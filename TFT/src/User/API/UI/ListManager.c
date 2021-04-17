#include "ListManager.h"
#include "includes.h"

#define KEY_INDEX_PAGEUP   (LISTITEM_PER_PAGE)
#define KEY_INDEX_PAGEDOWN (KEY_PAGEUP + 1)
#define KEY_INDEX_BACK     (KEY_PAGEDOWN + 1)

static LISTITEMS listItems;
static LISTITEM *totalItems;

static uint16_t list_max_items;
static uint8_t list_max_page;
static uint8_t list_cur_page;
static bool handleBack = true;

static void (*action_preparePage)(LISTITEMS * listItems, uint8_t index) = NULL;
static void (*action_prepareItem)(LISTITEM * item, uint16_t index, uint8_t itemPos) = NULL;
static void (*action_pageChanged)(uint8_t pageIndex) = NULL;

void listViewCreate(LABEL title, LISTITEM * items, uint16_t max_items, uint8_t cur_page, bool handleBackPress,
                    void (*preparePage_action)(LISTITEMS * listItems, uint8_t pageIndex),
                    void (*prepareItem_action)(LISTITEM * item, uint16_t index, uint8_t itemPos),
                    void (*pageChanged_action)(uint8_t pageIndex))
{
  listItems.title = title;
  totalItems = items;
  list_max_items = max_items;
  list_max_page = (list_max_items + LISTITEM_PER_PAGE - 1) / LISTITEM_PER_PAGE;
  handleBack = handleBackPress;
  action_preparePage = preparePage_action;
  action_prepareItem = prepareItem_action;
  action_pageChanged = pageChanged_action;

  listViewSetCurPage(cur_page);
  menuDrawListPage(&listItems);
}

void listViewSetTitle(LABEL title)
{
  listItems.title = title;
  menuDrawTitle(labelGetAddress(&listItems.title));
}

uint8_t listViewGetCurPage(void)
{
  return list_cur_page;
}

void listViewSetCurPage(uint8_t cur_page)
{
  if(action_preparePage != NULL)
  {
    action_preparePage(&listItems, cur_page);
  }
  else
  {
    for (uint8_t i = 0; i < LISTITEM_PER_PAGE; i++)
    {
      uint16_t index = cur_page * LISTITEM_PER_PAGE + i;
      if (index < list_max_items)
      {
        if (totalItems != NULL)
          listItems.items[i] = totalItems[index];
        if (action_prepareItem != NULL)
          action_prepareItem(&listItems.items[i], index, i);
      }
      else
      {
        listItems.items[i].icon = CHARICON_BACKGROUND;
      }
    }
  }

  // only 1 page or in first page, hide up button
  listItems.items[5].icon = ((list_max_items <= LISTITEM_PER_PAGE) || (cur_page == 0)) ? CHARICON_BACKGROUND : CHARICON_PAGEUP;
  // only 1 page or in last page, hide down button
  listItems.items[6].icon = ((list_max_items <= LISTITEM_PER_PAGE) || (cur_page == list_max_page-1)) ? CHARICON_BACKGROUND : CHARICON_PAGEDOWN;

  listItems.items[7].icon = CHARICON_BACK;

  list_cur_page = cur_page;
}

bool listViewNextPage(void)
{
  if (list_max_page <= 1) return false;  // only 0 or 1 page, can't goto next page
  if (list_cur_page + 1 >= list_max_page) return false;  // already last page

  // goto next page
  list_cur_page++;

  if (action_pageChanged != NULL)
    action_pageChanged(list_cur_page);

  listViewSetCurPage(list_cur_page);
  menuRefreshListPage();
  return true;
}

bool listViewPreviousPage(void)
{
  if (list_max_page <= 1) return false;  // only 0 or 1 page, can't goto previous page
  if (list_cur_page == 0) return false;  // already first page

  // goto previous page
  list_cur_page--;

  if (action_pageChanged != NULL)
    action_pageChanged(list_cur_page);

  listViewSetCurPage(list_cur_page);
  menuRefreshListPage();
  return true;
}

void listViewRefreshPage(void)
{
  menuRefreshListPage();
}

void listViewRefreshMenu(void)
{
  menuDrawListPage(&listItems);
}

void listViewRefreshItem(uint16_t item)
{
  uint8_t cur_i = item % LISTITEM_PER_PAGE;

  if (item > list_max_items)
    return;  // error index.
  if (item < list_cur_page * LISTITEM_PER_PAGE || item >= (list_cur_page + 1) * LISTITEM_PER_PAGE)
    return;  // not in cur page

  if (item < list_max_items)
  {
    listItems.items[cur_i] = totalItems[item];

    if (action_prepareItem != NULL)
      action_prepareItem(&listItems.items[cur_i], item, cur_i);
  }
  else
  {
    listItems.items[cur_i].icon = CHARICON_BACKGROUND;
  }
  menuDrawListItem(&listItems.items[cur_i], cur_i);
}

uint16_t listViewGetSelectedIndex(void)
{
  KEY_VALUES key_num = menuKeyGetValue();

  if (key_num < LISTITEM_PER_PAGE)
  {
    // return actual item index
    uint8_t cur_index = list_cur_page * LISTITEM_PER_PAGE + key_num;

    if (cur_index < list_max_items)
    {
      if (totalItems[cur_index].icon != CHARICON_BACKGROUND)
        return cur_index;
      else
        return KEY_IDLE;
    }
  }

  // check function keypress
  switch (key_num)
  {
    case KEY_INDEX_PAGEUP:
      listViewPreviousPage();
      return KEY_PAGEUP;

    case KEY_INDEX_PAGEDOWN:
      listViewNextPage();
      return KEY_PAGEDOWN;

    case KEY_INDEX_BACK:
      if(handleBack)
        infoMenu.cur--;
      return KEY_BACK;

    default:
      return KEY_IDLE;
  }
}

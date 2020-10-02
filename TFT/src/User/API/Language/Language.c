#include "Language.h"
#include "includes.h"
#include "language_en.h"
#include "language_keywords.h"

//
// Add new Keywords in Language.inc file Only
//
char tempLabelString[MAX_LANG_LABEL_LENGTH];

const char *const en_pack[LABEL_NUM] = {
  #define X_WORD(NAME) EN_##NAME ,
  #include "Language.inc"
  #undef  X_WORD
};

const char *const lang_key_list[LABEL_NUM] =
{
  #define X_WORD(NAME) LANG_KEY_##NAME ,
  #include "Language.inc"
  #undef  X_WORD
};


uint8_t *textSelect(uint16_t sel)
{
  switch(infoSettings.language)
  {
    case LANG_DEFAULT:
      return (uint8_t *)en_pack[sel];
    case LANG_FLASH:
      loadLabelText((u8*)&tempLabelString, sel);
      return (u8*)&tempLabelString;
    default:
      return NULL;
  }
}

uint32_t getLabelFlashAddr(uint16_t index)
{
  if (index > LABEL_BACKGROUND) return LANGUAGE_ADDR;
  return (LANGUAGE_ADDR + (MAX_LANG_LABEL_LENGTH * index));
}

bool loadLabelText(uint8_t* buf, uint16_t index)
{
  if(index >= LABEL_BACKGROUND) return false;
  W25Qxx_ReadBuffer(buf, getLabelFlashAddr(index), MAX_LANG_LABEL_LENGTH);
  return true;
}

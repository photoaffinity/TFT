#include "vfs.h"
#include "includes.h"

MYFILE infoFile = {"?:", {0}, {0}, 0, 0, 0, 0, TFT_SD, {0}};

void setPrintModelIcon(bool exist)
{
  infoFile.modelIcon = exist;
}

bool isPrintModelIcon(void)
{
  return infoFile.modelIcon;
}

bool mountFS(void)
{
  //resetInfoFile();  // needn't this
  switch (infoFile.source)
  {
    case TFT_SD:
      return mountSDCard();

    case TFT_UDISK:
      return mountUDisk();

    case BOARD_SD:
      if (infoHost.printing)
        return true;  // no mount while printing
      else
        return mountGcodeSDCard();

    default:
      return false;
  }
}

// clear and free memory from file list
void clearInfoFile(void)
{
  uint8_t i = 0;
  for (i = 0; i < infoFile.folderCount; i++)
  {
    free(infoFile.folder[i]);
    infoFile.folder[i] = 0;
  }
  for (i = 0; i < infoFile.fileCount; i++)
  {
    free(infoFile.file[i]);
    infoFile.file[i] = 0;

    if (infoFile.longFile[i] != 0)  // long filename is optional so we need to check its presence
      free(infoFile.longFile[i]);
    infoFile.longFile[i] = 0;
  }
  infoFile.folderCount = 0;
  infoFile.fileCount = 0;
}

TCHAR * getCurFileSource(void)
{
  switch (infoFile.source)
  {
    case TFT_SD:
      return "SD:";

    case TFT_UDISK:
      return "U:";

    case BOARD_SD:
    case BOARD_SD_REMOTE:
      return infoMachineSettings.firmwareType == FW_REPRAPFW ? "gcodes" : "bSD:";

    default:
      break;
  }
  return NULL;
}

// reset file list
void resetInfoFile(void)
{
  FS_SOURCE source = infoFile.source;
  clearInfoFile();
  memset(&infoFile, 0, sizeof(infoFile));
  infoFile.source = source;
  strcpy(infoFile.title, getCurFileSource());
}

// scan files in source
bool scanPrintFiles(void)
{
  clearInfoFile();
  switch (infoFile.source)
  {
    case TFT_SD:
    case TFT_UDISK:
      return scanPrintFilesFatFs();

    case BOARD_SD:
      return scanPrintFilesGcodeFs();

    default:
      return false;
  }
}

// check and open folder
bool EnterDir(char * nextdir)
{
  if (strlen(infoFile.title) + strlen(nextdir) + 2 >= MAX_PATH_LEN)
    return 0;
  strcat(infoFile.title, "/");
  strcat(infoFile.title, nextdir);
  return 1;
}

// close folder
void ExitDir(void)
{
  int i = strlen(infoFile.title);
  for (; i > 0 && infoFile.title[i] != '/'; i--)
  {
  }
  infoFile.title[i] = 0;
}

// check if current folder is root
bool IsRootDir(void)
{
  return !strchr(infoFile.title, '/');
}

// check if filename provides a supported filename extension
char *isSupportedFile(char * filename)
{
  char *extPos = strrchr(filename, '.');  // check last "." in the name where extension is supposed to start

  if (extPos != NULL && extPos[1] != 'g' && extPos[1] != 'G')
  {
    extPos = NULL;
  }

  return extPos;
}
/**
  * @brief  Temporarily remove extension 
  * @param  filename: targeted filename
  * @param  maxLength: the max length of the "filename" parameter as it was defined.
  *         It is needed to check if extension hide flag can be added.
  * @retval pointer to the resulting name
  */
char *hideFileExtension(char * filename)
{
  char * extPos;

  extPos = isSupportedFile(filename);
  if (extPos != NULL)  // if filename provides a supported filename extension
  {
    filename[extPos - filename] = 0;  // temporarily hide filename extension
  }
  else
  {
    filename[strlen(filename) + 1] = 0;  // extension cannot be hidden so set extension hide flag accordingly
  }
  
  return filename;
}

/**
  * @brief  Restore the temprarily hidden extension 
  * @param  filename: targeted filename
  * @param  maxLength: the max length of the "filename" parameter as it was defined.
  *         It is needed to check if extension hide flag can be retrieved.
  * @retval pointer to the resulting name
  */
char *restoreFileExtension(char *filename)
{
  if (filename[strlen(filename) + 1] != 0)  // check extra byte for filename extension check. If 0, no filename extension was previously hidden
  {
    filename[strlen(filename)] = '.';       // restore filename extension
  }

  return filename;
}

char *hideFileIndexExtension(uint8_t index)
{
  char * filename = infoFile.file[index];

  if (infoSettings.filename_extension == 0)  // if filename extension is disabled
  {
    hideFileExtension(filename);

    if (infoMachineSettings.longFilename == ENABLED && infoFile.source == BOARD_SD)
    {
      filename = infoFile.longFile[index];
      hideFileExtension(filename);
    }
  }

  return filename;
}

char *restoreFileIndexExtension(uint8_t index)
{
  char * filename = infoFile.file[index];

  if (infoSettings.filename_extension == 0)  // if filename extension is disabled
  {
    restoreFileExtension(filename);

    if (infoMachineSettings.longFilename == ENABLED && infoFile.source == BOARD_SD)
    {
      filename = infoFile.longFile[index];
      restoreFileExtension(filename);
    }
  }

  return filename;
}

// Volume exist detect
static bool volumeSrcStatus[FF_VOLUMES] = {false, false};

bool isVolumeExist(uint8_t src)
{
  if (src >= FF_VOLUMES)
    return true;
  return volumeSrcStatus[src];
}

uint8_t (*volumeInserted[FF_VOLUMES])(void) = {SD_CD_Inserted, USBH_USR_Inserted};

void loopVolumeSource(void)
{
  for (uint8_t i = 0; i < FF_VOLUMES; i++)
  {
    if (volumeSrcStatus[i] != (*volumeInserted[i])())
    {
      const int16_t labelSDStates[FF_VOLUMES][2] = {{LABEL_TFTSD_REMOVED, LABEL_TFTSD_INSERTED},
                                                    {LABEL_U_DISK_REMOVED, LABEL_U_DISK_INSERTED}};
      volumeSrcStatus[i] = (*volumeInserted[i])();
      volumeReminderMessage(labelSDStates[i][volumeSrcStatus[i]], STATUS_NORMAL);
    }
  }
}

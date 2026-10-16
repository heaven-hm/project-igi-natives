#include "gi_platform.h"
#include "005098D0-Physics_Local_2.h"
int32_t Physics_Local_2()

{
    return Sys_CloseFileStream_5(QFile_DeviceIndex("LOCAL:"));
}

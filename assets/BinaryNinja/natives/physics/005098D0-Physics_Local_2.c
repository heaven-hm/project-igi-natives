// Original IGI.EXE function: Physics_Local_2 (VA 0x005098D0; static CFG gate PASS, CFG score 1.000).
#include "Physics_Local_2.h"
int32_t Physics_Local_2()

{
    return Sys_CloseFileStream_5(QFile_DeviceIndex("LOCAL:"));
}

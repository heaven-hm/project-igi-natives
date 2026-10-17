// Original IGI.EXE function: Sys_DispatchOpcode_7 (VA 0x004B1FC0; static CFG gate PASS, CFG score 1.000).
#include "Sys_DispatchOpcode_7.h"
int32_t Sys_DispatchOpcode_7(void* context)

{
    int32_t* data_val = QFile_ReadWrite(context, "r");

    if (!data_val)
        return 0;

    Sys_ReadFileBlock_4(data_val);
    return 1;
}

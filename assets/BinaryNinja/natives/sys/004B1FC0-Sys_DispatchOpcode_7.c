// Original IGI.EXE function: Sys_DispatchOpcode_7 (VA 0x004B1FC0; static CFG gate PASS, CFG score 1.000).
#include "Sys_DispatchOpcode_7.h"
int32_t Sys_DispatchOpcode_7(void* a1)

{
    int32_t* valA = QFile_ReadWrite(a1, "r");

    if (!valA)
        return 0;

    Sys_ReadFileBlock_4(valA);
    return 1;
}

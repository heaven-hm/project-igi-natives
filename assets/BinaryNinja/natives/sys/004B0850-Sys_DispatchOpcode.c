// Original IGI.EXE function: Sys_DispatchOpcode (VA 0x004B0850; static CFG gate PASS, CFG score 1.000).
#include "Sys_DispatchOpcode.h"
int32_t Sys_DispatchOpcode(int32_t* a1, int32_t* a2, int32_t* a3, char* a4, int32_t a5, int32_t a6)

{
    if (!Camera_UpdateViewCone_33(0x938280, 0x9402e0, a4))
        return 0;

    return Sys_ExecuteBytecode(a1, a2, a3, a5, 0x938280, 0x9402e0, a6);
}

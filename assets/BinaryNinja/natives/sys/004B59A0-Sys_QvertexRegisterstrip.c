// Original IGI.EXE function: Sys_QvertexRegisterstrip (VA 0x004B59A0; static CFG gate FAIL, CFG score 0.505).
#include "Sys_QvertexRegisterstrip.h"
int32_t Sys_QvertexRegisterstrip()

{
    g_a84a50 = 0;
    g_a84a58 = 0;
    g_a84a54 = Sys_RendermodeFailedToCr_2("QVertex:RegisterStrip");
    /* tailcall */
    return Physics_QvertexDrawstrip();
}

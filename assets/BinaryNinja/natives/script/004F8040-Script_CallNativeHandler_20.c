// Original IGI.EXE function: Script_CallNativeHandler_20 (VA 0x004F8040; static CFG gate PASS, CFG score 1.000).
#include "Script_CallNativeHandler_20.h"
int32_t Script_CallNativeHandler_20(void* a1)

{
    int32_t dstD = QHash_ValueGet();

    if (!dstD)
        QHash_ValueSet();

    *(a1 + 0x2b48) = Mem_Alloc(0x320, 4);

    if (!dstD)
        Sys_DispatchOpcode_2();

    int32_t i = 0;
    void* objC = a1 + 0x2b4c;

    do
    {
        objC += 4;
        int32_t tmpD2 = *(a1 + 0x2b48) + i;
        i += 0x28;
        *(objC - 4) = tmpD2;
    } while (i < 0x320);

    int32_t result = g_a76c9c + 0x320;
    g_a76c9c = result;
    return result;
}

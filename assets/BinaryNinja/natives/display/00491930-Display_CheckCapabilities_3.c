// Original IGI.EXE function: Display_CheckCapabilities_3 (VA 0x00491930; static CFG gate PASS, CFG score 1.000).
#include "Display_CheckCapabilities_3.h"
int32_t Display_CheckCapabilities_3()

{
    if (g_5ca02d)
        Display_OpenDevice_4(0);

    int32_t v_8 = Display_SyncVSync_5();
    int32_t v_4 = 0;
    Sys_AllocateMemory_3(sub_491910, &v_8);
    Display_RestoreDevice_7();
    int32_t result = Display_OpenDevice_16();
    g_5ca02c = 0;
    return result;
}

// Original IGI.EXE function: Sys_Sortrender (VA 0x004B73C0; static CFG gate PASS, CFG score 1.000).
#include "Sys_Sortrender.h"
int32_t Sys_Sortrender()

{
    int32_t data_val = Display_RestoreDevice_14("SortRender");
    g_943e48 = data_val;
    return Display_SetGammaRamp_14(data_val, sub_4b7100);
}

#include "004B7C80-Sys_Allocpalette.h"
/* 0x004b7c80 Sys_Allocpalette full linked: callers=1 callees=3 */
int32_t sub_4b7c80()

{
    g_a84a48 = sub_4b0e70("AllocPalette");
    g_a84a40 = sub_4b0e70("DeAllocPalette");
    int32_t result = sub_4b0e70("DownloadPalette");
    g_a84a44 = result;
    return result;
}

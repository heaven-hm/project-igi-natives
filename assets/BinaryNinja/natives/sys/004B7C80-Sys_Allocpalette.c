#include "Sys_Allocpalette.h"
int32_t Sys_Allocpalette()

{
    g_a84a48 = Sys_RendermodeFailedToCr_2("AllocPalette");
    g_a84a40 = Sys_RendermodeFailedToCr_2("DeAllocPalette");
    int32_t result = Sys_RendermodeFailedToCr_2("DownloadPalette");
    g_a84a44 = result;
    return result;
}

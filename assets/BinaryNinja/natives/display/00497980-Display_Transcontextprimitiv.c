// Original IGI.EXE function: Display_Transcontextprimitiv (VA 0x00497980; static CFG gate PASS, CFG score 1.000).
#include "Display_Transcontextprimitiv.h"
int32_t Display_Transcontextprimitiv()

{
    Display_SwapBuffers_15();
    g_543a68 = Display_RestoreDevice_14("TransContextPrimitive");
    Sys_AllocateMemory_3(sub_497950, 0);
    g_6e5ba4 = Sys_RendermodeFailedToCr_2("SetActiveTransContext");
    g_6e5ba8 = Sys_RendermodeFailedToCr_2("SetNearClippingPlane");
    Display_CreateSurface_14(1);
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), g_6e5ba4, Display_CouldnTSetViewport);
    return Sys_CheckHeap_2(Display_CheckCapabilities_7(), g_6e5ba8, sub_497d00);
}

// IGI native provenance: Display_Transcontextprimitiv - 0x00497980 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00497980-Display_Transcontextprimitiv.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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

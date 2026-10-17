// IGI native provenance: Display_DisplayCanOnlyBeOpen - 0x00491700 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00491700-Display_DisplayCanOnlyBeOpen.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_DisplayCanOnlyBeOpen.h"
int32_t Display_DisplayCanOnlyBeOpen()

{
    if (!g_5ca02c)
    {
        g_5c9fa8 = 0;
        g_542314 = Sys_RendermodeFailedToCr_2("DisplayOpen");
        g_542318 = Sys_RendermodeFailedToCr_2("DisplayClose");
        g_54231c = Sys_RendermodeFailedToCr_2("DisplaySetMode");
        g_542320 = Sys_RendermodeFailedToCr_2("DisplayUnsetMode");
        g_542324 = Sys_RendermodeFailedToCr_2("DisplayRestore");
        g_542328 = Sys_RendermodeFailedToCr_2("DisplayVSync");
        g_54232c = Sys_RendermodeFailedToCr_2("DisplaySwapBuffers");
        g_542330 = Sys_RendermodeFailedToCr_2("DisplayClear");
        g_542334 = Sys_RendermodeFailedToCr_2("Enum");
        g_542310 = Sys_RendermodeFailedToCr_2("GetGFXCaps");
        g_5ca02d = 0;
        g_c10384 = 0;
        Display_RestoreDevice_3();
        g_542340 = Display_RestoreDevice_14("ClipWindowPrimitive");
        g_542338 = Display_RestoreDevice_14("BlitPrimitive");
        g_54233c = Display_RestoreDevice_14("SnapshotPrimitive");
        Display_Direct3D();
        Display_Offscreenbuffer();
        int32_t item_8 = Display_SetDisplayMode_5();
        int32_t item_4 = 0;
        Sys_AllocateMemory_3(sub_491910, &item_8);
        Camera_ApplyBandFilter_32(sub_4918f0);
        Camera_ApplyWideScreen_32(sub_491890);
        int32_t result = Camera_ApplyPostProcess_32(sub_491890);
        g_5ca02c = 1;
        return result;
    }

    Error_Show("Display can only be opened once!");

    while (true)
        /* nop */
}

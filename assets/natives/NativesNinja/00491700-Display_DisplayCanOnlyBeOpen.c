#include "00491700-Display_DisplayCanOnlyBeOpen.h"
/* 0x00491700 Display_DisplayCanOnlyBeOpen full linked: callers=1 callees=23 */
int32_t sub_491700()

{
    if (!g_5ca02c)
    {
        g_5c9fa8 = 0;
        g_542314 = sub_4b0e70("DisplayOpen");
        g_542318 = sub_4b0e70("DisplayClose");
        g_54231c = sub_4b0e70("DisplaySetMode");
        g_542320 = sub_4b0e70("DisplayUnsetMode");
        g_542324 = sub_4b0e70("DisplayRestore");
        g_542328 = sub_4b0e70("DisplayVSync");
        g_54232c = sub_4b0e70("DisplaySwapBuffers");
        g_542330 = sub_4b0e70("DisplayClear");
        g_542334 = sub_4b0e70("Enum");
        g_542310 = sub_4b0e70("GetGFXCaps");
        g_5ca02d = 0;
        g_c10384 = 0;
        sub_491860();
        g_542340 = sub_4978d0("ClipWindowPrimitive");
        g_542338 = sub_4978d0("BlitPrimitive");
        g_54233c = sub_4978d0("SnapshotPrimitive");
        sub_493580();
        sub_498080();
        int32_t var_8 = sub_491df0();
        int32_t var_4 = 0;
        sub_4b0ee0(sub_491910, &var_8);
        sub_4af860(sub_4918f0);
        sub_4af880(sub_491890);
        int32_t result = sub_4af890(sub_491890);
        g_5ca02c = 1;
        return result;
    }

    Error_Show("Display can only be opened once!");

    while (true)
        /* nop */
}

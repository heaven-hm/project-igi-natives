#include "00498080-Display_Offscreenbuffer.h"
/* 0x00498080 Display_Offscreenbuffer full linked: callers=1 callees=13 */
int32_t sub_498080()

{
    g_6e5bb8 = sub_4b0e00("OffscreenBuffer");
    int32_t eax_1 = sub_491df0();
    sub_4b0ec0(g_6e5bb8, eax_1, sub_498230);
    int32_t eax_3 = sub_491e00();
    sub_4b0ec0(g_6e5bb8, eax_3, sub_4d3710);
    int32_t eax_4 = sub_491e50();
    sub_4b0ec0(g_6e5bb8, eax_4, sub_498260);
    int32_t eax_5 = sub_491e40();
    sub_4b0ec0(g_6e5bb8, eax_5, sub_4d3710);
    int32_t eax_7 = sub_491dc0();
    sub_4b0ec0(g_6e5bb8, eax_7, sub_498290);
    int32_t eax_8 = sub_491db0();
    int32_t result = sub_4b0ec0(g_6e5bb8, eax_8, sub_498140);
    g_6e5bbc = 1;
    return result;
}

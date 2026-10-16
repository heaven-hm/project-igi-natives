#include "00497980-Display_Transcontextprimitiv.h"
/* 0x00497980 Display_Transcontextprimitiv full linked: callers=1 callees=10 */
int32_t sub_497980()

{
    sub_497ed0();
    g_543a68 = sub_4978d0("TransContextPrimitive");
    sub_4b0ee0(sub_497950, 0);
    g_6e5ba4 = sub_4b0e70("SetActiveTransContext");
    g_6e5ba8 = sub_4b0e70("SetNearClippingPlane");
    sub_497940(1);
    sub_4b0ec0(sub_4950e0(), g_6e5ba4, sub_497a00);
    return sub_4b0ec0(sub_4950e0(), g_6e5ba8, sub_497d00);
}

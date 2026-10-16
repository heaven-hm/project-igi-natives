#include "Weapon_UpdateZoom_4.h"
int32_t* Weapon_UpdateZoom_4(int32_t a1, int32_t a2, int32_t a3, int32_t a4)

{
    int32_t v_1c = a2;
    int32_t v_10 = a4;
    int32_t v_14 = a3;
    int32_t v_18 = 0xffffffff;
    int32_t v_c = a1 + 0x20;
    int32_t v_8 = a1;
    int32_t v_4 = 0;
    return AI_EventBroadcast(&v_1c);
}

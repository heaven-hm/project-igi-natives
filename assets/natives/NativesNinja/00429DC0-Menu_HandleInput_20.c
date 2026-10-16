#include "00429DC0-Menu_HandleInput_20.h"
/* 0x00429dc0 Menu_HandleInput_20 full linked: callers=1 callees=5 */
int32_t Menu_HandleInput_20(float a1)

{
    float esi = a1;
    void* eax_1 = *(*(esi + 0x1b4) + 0x2d4);
    *(esi + 0x86c) = 0x3dcccccd;
    *(esi + 0x870) = 0x3dcccccd;
    *(esi + 0x874) = 0x3dcccccd;
    *(esi + 0x880) = *(eax_1 + 0x134);
    int32_t edx = *(eax_1 + 0x12c);
    *(esi + 0x884) = edx;
    *(esi + 0x888) = 0;
    int32_t ecx_1 = *(eax_1 + 0x138);
    *(esi + 0x87c) = 0x49fa0000;
    *(esi + 0x88c) = ecx_1;
    int32_t var_4 = 0x3cb2674f;
    int32_t var_18;
    __builtin_strncpy(&var_18, "33KA33KA33KA", 0x14);
    int32_t var_20 = edx;
    int32_t var_1c = edx;
    a1 = (*(eax_1 + 0x130) / *(eax_1 + 0x12c) - 1f) / (*(esi + 0x88c) * 30f);
    uint32_t edx_3 = *(eax_1 + 0x24c) + 0x18;
    void* eax_2 = Level_StartMission_4();
    int32_t var_c;
    struct status_msg* eax_4 = sub_4fdf00(sub_4f0ee0(), eax_2, edx_3, &var_c, &var_18, &var_20,
        0x49fa0000, 0x1080000, 0, a1, 0, 0x7d0, 0);
    *(esi + 0x868) = eax_4;
    int32_t result = sub_4fe5d0(eax_4, 1);
    *(esi + 0x878) = 0;
    return result;
}

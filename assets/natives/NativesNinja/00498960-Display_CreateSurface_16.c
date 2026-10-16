#include "00498960-Display_CreateSurface_16.h"
/* 0x00498960 Display_CreateSurface_16 full linked: callers=1 callees=3 */
struct status_msg* sub_498960(uint32_t a1, int32_t a2, int32_t a3, float a4, float a5)

{
    int32_t kind;
    kind = g_c311c0;
    struct status_msg* result = QTask_HandleInput(nullptr, kind, 0);
    *(result + 0xe3c) = 0;
    *(result + 0x564c) = 0;
    sub_4c6890(a1, result, 0);
    int32_t ecx = 0;
    result->head[0x1a] = a1;
    ecx = !a3;
    *(result + 0x5650) = ecx;
    *(result + 0x5654) = a2;
    *(result + 0x56a8) = 0;
    *(result + 0x5648) = 0;
    void* __offset(status_msg, 0xe5c) eax_1 = &result->head[0x397];
    int32_t i_1 = 0x240;
    int32_t i;

    do
    {
        *(ADJ(eax_1) + 0xe5c) = 0;
        eax_1 += 0x20;
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    *(result + 0x56a0) = a4;
    *(result + 0x5698) = a4 + a5;
    sub_499fa0(result, 0.3125f);
    int32_t ecx_1 = g_bcad74;
    int32_t ecx_2 = -(ecx_1);
    int32_t var_10 = 0;
    int32_t var_c = 0;
    int32_t var_8 = 0;
    int32_t var_4 = 0;
    int32_t* eax_2 = g_5ca110;
    int32_t var_c_1 = (((ecx_2 - ecx_2) & 0xfffff800) + 0x800) | 0x10000;
    var_10 = 0x10;
    int32_t var_4_1 = 0x780;
    int32_t var_8_1 = 0x142;
    (*(*eax_2 + 0x14))(eax_2, &var_10, &result->head[0x15b3], 0);
    *(result + 0x56ad) = 0;
    g_6e5bd0 = result;
    return result;
}

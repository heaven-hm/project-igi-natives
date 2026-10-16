#include "0047F0D0-Weapon_UpdateBarrel_9.h"
/* 0x0047f0d0 Weapon_UpdateBarrel_9 full linked: callers=1 callees=9 */
struct status_msg* sub_47f0d0(void* a1, int32_t a2, int32_t a3, int32_t a4, float a5)

{
    float var_34_1 = sub_4b4770(Level_SetMission_5()) * 0.0314159282f;
    float var_38_1 = sub_4b4770(Level_SetMission_5()) * 0.0314159282f;
    float var_28[0xa];
    sub_4b38e0(&var_28, sub_4b4770(Level_SetMission_5()) * 0.0314159282f, var_38_1, var_34_1);
    int32_t ecx = a3;
    int32_t* var_44 = ecx;
    ecx = g_5c1156;
    struct status_msg* result = sub_503cc0(*(a1 + 0x80), ecx, a2, &var_28, var_44);
    long double x87_r7_7 = a5 * 0.00048828125f;
    int32_t ecx_1 = *(*(a1 + 0x80) + 0x20);
    result->sprite[0x5c] = x87_r7_7;
    result->head[0x26] = x87_r7_7;
    result->head[0x27] = x87_r7_7;
    result->head[0x28] = x87_r7_7;
    result->sprite[0x4c] = ecx_1;
    result->sprite[0x4d] = *(&ecx_1 + 1);
    result->sprite[0x4e] = *(&ecx_1 + 2);
    result->sprite[0x4f] = *(&ecx_1 + 3);
    result->sprite[0x54] = 0;
    result->sprite[0x55] = 0;
    result->sprite[0x56] = 0;
    result->sprite[0x57] = 0;
    result->sprite[0x58] = 0;
    result->sprite[0x59] = 0;
    result->sprite[0x5a] = 0;
    result->sprite[0x5b] = 0;
    result->sprite[0x50] = a4;
    result->sprite[0x51] = *(&a4 + 1);
    result->sprite[0x52] = *(&a4 + 2);
    result->sprite[0x53] = *(&a4 + 3);

    if (a4)
    {
        long double x87_r7_8 = a5;
        int32_t var_34_2 = 0;
        sub_47ebd0(result, x87_r7_8 + x87_r7_8);
    }

    return result;
}

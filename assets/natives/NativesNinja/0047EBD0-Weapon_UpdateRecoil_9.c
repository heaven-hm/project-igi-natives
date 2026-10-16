#include "0047EBD0-Weapon_UpdateRecoil_9.h"
/* 0x0047ebd0 Weapon_UpdateRecoil_9 full linked: callers=1 callees=12 */
int32_t sub_47ebd0(void* a1, float a2)

{
    long double x87_r7_1 = a2 * 0.5f;
    int32_t result = *(a1 + 0x104);
    int32_t var_4 = 0x3f8eb90c;
    float var_20 = x87_r7_1;
    float var_1c = x87_r7_1;
    long double x87_r7_3 = *(a1 + 0x110) * 15f;
    int32_t var_18;
    __builtin_strncpy(&var_18, "33KA33KA33KA", 0x14);
    int32_t var_c;

    if (result == 2)
    {
        a2 = 1f / x87_r7_3;
        struct status_msg* eax_3 = sub_4fdf00(a1, Level_StartMission_4(), g_5c1158 + 0x18,
            &var_c, &var_18, &var_20, 0x49480000, 8, 0, a2, 0, 0xc8, 0);
        *(a1 + 0x108) = eax_3;
        sub_4fe5d0(eax_3, 0);
        uint32_t ecx_2 = g_5c1160 + 0x18;
        void* eax_4 = Level_StartMission_4();
        struct status_msg* eax_6 = sub_4fdf00(sub_4f0ee0(), eax_4, ecx_2, &var_c, &var_18, &var_20,
            0x49480000, 0x10, 0, a2, 0, 0xc8, 0);
        *(a1 + 0x10c) = eax_6;
        return sub_4fe5d0(eax_6, 0);
    }

    if (result != 1)
        return result;

    int32_t ecx;
    int32_t var_34 = ecx;
    uint32_t edx_1 = g_5c1160 + 0x18;
    void* eax_8 = Level_StartMission_4();
    struct status_msg* eax_10 = sub_4fdf00(sub_4f0ee0(), eax_8, edx_1, &var_c, &var_18, &var_20,
        0x49480000, 8, 0, 1f / x87_r7_3, 0, 0xc8, 0);
    *(a1 + 0x10c) = eax_10;
    return sub_4fe5d0(eax_10, 0);
}

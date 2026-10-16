#include "0047EAD0-Weapon_EjectShell_9.h"
/* 0x0047ead0 Weapon_EjectShell_9 full linked: callers=2 callees=10 */
struct status_msg* sub_47ead0(int32_t a1, int32_t a2, int32_t* a3, int32_t a4, int16_t a5, int32_t a6, int32_t a7)

{
    uint32_t edx_2 = g_5c1160 + 0x18;
    int32_t var_10 = 0x400eb90c;
    int32_t var_24;
    __builtin_strncpy(&var_24, "33KA33KA33KA", 0x14);
    void* eax_1 = Level_StartMission_4();
    int32_t var_18;
    struct status_msg* result = sub_4fdf00(sub_4f0ee0(), eax_1, edx_2, &var_18, &var_24, a3,
        0x49480000, a2, 0, a4, 0, 1, 0);
    sub_4fe5d0(result, 1);
    int32_t var_c = 0;
    int32_t var_8 = 0;
    int32_t var_4 = 0x3f800000;
    float var_38_2 = sub_4b4770(Level_SetMission_5()) * 6.28318548f;
    sub_4fe120(result, a1 + 0x28, &var_c, a7,
        (0.5f - sub_4b4770(Level_SetMission_5())) * 0.0188495573f, var_38_2, 0x3f800000, a5,
        a6);
    return result;
}

#include "004761B0-M203_LoadParameters.h"
/* 0x004761b0 M203_LoadParameters full linked: callers=0 callees=12 */
struct status_msg* sub_4761b0(float a1)

{
    int32_t var_18;
    __builtin_memset(&var_18, 0, 0x18);
    sub_4c1790(Level_CheckQTaskID_4(), a1);
    sub_4c5710(Level_StartMission_4(), a1, 0);
    long double x87_r7 = *(a1 + 0x9c);
    long double x87_r6 = *(a1 + 0xa0);
    x87_r6 - x87_r7;
    long double x87_r7_1;

    if (!(*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = *(a1 + 0xa0);
    else
        x87_r7_1 = *(a1 + 0x9c);

    long double x87_r6_1 = *(a1 + 0x98);
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = *(a1 + 0x9c);
        long double x87_r6_2 = *(a1 + 0xa0);
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = *(a1 + 0xa0);
        else
            x87_r7_3 = *(a1 + 0x9c);
    }
    else
        x87_r7_3 = *(a1 + 0x98);

    float var_44_3 = sub_4d0950(*(a1 + 0x6c)) * x87_r7_3;
    sub_4c7140(Level_StartMission_4(), a1, &var_18, var_44_3, 2);
    *(a1 + 0x114) = 0;
    *(a1 + 0x118) = 0;
    uint32_t edx_1 = g_5be3ac + 0x18;
    int32_t var_24 = 0;
    int32_t var_20 = 0;
    int32_t var_1c = 0;
    int32_t var_38;
    memcpy(&var_38,
        "\x9a\x99\x19\x44\x9a\x99\x19\x44\x00\x00\xfe\x42\x00\x00\xfe\x42\x00\x00\xfe\x42", 0x14);
    void* eax_6 = Level_StartMission_4();
    int32_t var_30;
    struct status_msg* result = sub_4fdf00(sub_4f0ee0(), eax_6, edx_1, &var_24, &var_30, &var_38,
        0x49480000, 0x1000008, 0, 0x3dcccccd, 0, 0x14, 0);
    *(a1 + 0x11c) = result;
    return result;
}

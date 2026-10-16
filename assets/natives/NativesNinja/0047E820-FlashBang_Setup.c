#include "0047E820-FlashBang_Setup.h"
/* 0x0047e820 FlashBang_Setup full linked: callers=0 callees=13 */
int32_t sub_47e820(int32_t* a1)

{
    int32_t* ebx = a1;
    a1 = 3;
    bool cond:0_1;

    do
    {
        int32_t var_40 = 0;
        void var_34;
        memcpy(&var_34, &ebx[8], 0x18);
        int32_t var_3c_1 = 0;
        int32_t var_38_1 = 0;
        float var_38_2 =
            (sub_4b4770(Level_SetMission_5()) + 1.0) * 1.5 * 4096000f * 9.25925906e-06f;
        float var_44_1 = (sub_4b4770(Level_SetMission_5()) + 1.0) * 0.25;
        long double x87_r7_10 = sub_4b4770(Level_SetMission_5()) - 0.5f;
        sub_4fe120(ebx[0xe], &var_34, &var_40, var_44_1,
            (x87_r7_10 + x87_r7_10) * 0.0436332338f + 0.020362176f, 0, 0x3f800000, 0x5a, 0x1e);
        cond:0_1 = a1 != 1;
        a1 -= 1;
    } while (cond:0_1);
    struct status_msg* eax_8 = sub_4e6b00(sub_4f0ee0(), "explo_flash");

    if (eax_8)
        sub_4e6c30(eax_8, &ebx[8]);

    int32_t var_1c = 0x13;
    int32_t var_18 = 0xffffffff;
    int32_t var_14 = 3;
    void* var_c = &ebx[8];
    int32_t var_10 = 0x47200000;
    int32_t var_4 = 0;
    int32_t* var_8 = ebx;
    sub_450ce0(&var_1c);
    return QTask_FindType(ebx);
}

#include "00412F80-HumanPlayer_Action.h"
/* 0x00412f80 HumanPlayer_Action full linked: callers=0 callees=12 */
struct status_msg* HumanPlayer_Action(void* a1)

{
    struct status_msg* result = Human_HitDamage();

    if (!result)
    {
        result = *(a1 + 0xde0);

        if (!result)
        {
            *(a1 + 0x2e8) = 0xd;
            sub_489e10(a1 + 0x254, 0xd);
            long double x87_r7_1 = g_56e208;
            *(a1 + 0xde0) = 0x2d;
            long double x87_r7_2 = x87_r7_1 * *(a1 + 0x2cc);
            *(a1 + 0x2c8) = x87_r7_2 + *(a1 + 0x2c8);
            *(a1 + 0x254) = x87_r7_2 + *(a1 + 0x254);
            sub_465970(*(a1 + 0x4ec), 0x434ccccd, 0x3c567750, 0x2d);
            *(a1 + 0xdcc) = (sub_4b4770(Level_SetMission_5()) + 1.0) * 0.40000000000000002;
            *(a1 + 0xdd0) = (sub_4b4770(Level_SetMission_5()) + 1.0) * 0.40000000000000002;
            *(a1 + 0xdd4) = (sub_4b4770(Level_SetMission_5()) + 1.0) * 0.40000000000000002;
            long double st0_4;
            st0_4 = sub_4b4770(Level_SetMission_5());
            *(a1 + 0xdd8) = (st0_4 + 1.0) * 0.40000000000000002;
            long double x87_r7_16 = *(a1 + 0x254);
            long double temp0_1 = *(a1 + 0x258);
            x87_r7_16 - temp0_1;
            result = (x87_r7_16 < temp0_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_16, temp0_1) ? 1 : 0) << 0xa
                | (x87_r7_16 == temp0_1 ? 1 : 0) << 0xe;

            if (*(&result + 1) & 1)
                return sub_4e6b00(*(a1 + 0x4ec), "elfence_spark1");
        }
    }

    return result;
}

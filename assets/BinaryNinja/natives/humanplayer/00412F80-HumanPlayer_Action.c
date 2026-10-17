// Original IGI.EXE function: HumanPlayer_Action (VA 0x00412F80; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_Action.h"
struct status_msg* HumanPlayer_Action(void* a1)

{
    struct status_msg* result = Human_HitDamage();

    if (!result)
    {
        result = *(a1 + 0xde0);

        if (!result)
        {
            *(a1 + 0x2e8) = 0xd;
            FX_FragmentSimulate_14(a1 + 0x254, 0xd);
            long double x87_r7_1 = g_56e208;
            *(a1 + 0xde0) = 0x2d;
            long double x87_r7_2 = x87_r7_1 * *(a1 + 0x2cc);
            *(a1 + 0x2c8) = x87_r7_2 + *(a1 + 0x2c8);
            *(a1 + 0x254) = x87_r7_2 + *(a1 + 0x254);
            AI_CheckSector_23(*(a1 + 0x4ec), 0x434ccccd, 0x3c567750, 0x2d);
            *(a1 + 0xdcc) = (Sys_AllocateMemory_14(Level_SetMission_5()) + 1.0) * 0.40000000000000002;
            *(a1 + 0xdd0) = (Sys_AllocateMemory_14(Level_SetMission_5()) + 1.0) * 0.40000000000000002;
            *(a1 + 0xdd4) = (Sys_AllocateMemory_14(Level_SetMission_5()) + 1.0) * 0.40000000000000002;
            long double fp0_4;
            fp0_4 = Sys_AllocateMemory_14(Level_SetMission_5());
            *(a1 + 0xdd8) = (fp0_4 + 1.0) * 0.40000000000000002;
            long double x87_r7_16 = *(a1 + 0x254);
            long double f0_1 = *(a1 + 0x258);
            x87_r7_16 - f0_1;
            result = (x87_r7_16 < f0_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_16, f0_1) ? 1 : 0) << 0xa
                | (x87_r7_16 == f0_1 ? 1 : 0) << 0xe;

            if (*(&result + 1) & 1)
                return SoundSys_SetMasterVolume_7(*(a1 + 0x4ec), "elfence_spark1");
        }
    }

    return result;
}

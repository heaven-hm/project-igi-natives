// IGI native provenance: HumanPlayer_Action - 0x00412F80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00412F80-HumanPlayer_Action.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_Action.h"
struct status_msg* HumanPlayer_Action(void* context)

{
    struct status_msg* result = Human_HitDamage();

    if (!result)
    {
        result = *(context + 0xde0);

        if (!result)
        {
            *(context + 0x2e8) = 0xd;
            FX_FragmentSimulate_14(context + 0x254, 0xd);
            long double fpu_val_7_1 = g_56e208;
            *(context + 0xde0) = 0x2d;
            long double fpu_val_7_2 = fpu_val_7_1 * *(context + 0x2cc);
            *(context + 0x2c8) = fpu_val_7_2 + *(context + 0x2c8);
            *(context + 0x254) = fpu_val_7_2 + *(context + 0x254);
            AI_CheckSector_23(*(context + 0x4ec), 0x434ccccd, 0x3c567750, 0x2d);
            *(context + 0xdcc) = (Sys_AllocateMemory_14(Level_SetMission_5()) + 1.0) * 0.40000000000000002;
            *(context + 0xdd0) = (Sys_AllocateMemory_14(Level_SetMission_5()) + 1.0) * 0.40000000000000002;
            *(context + 0xdd4) = (Sys_AllocateMemory_14(Level_SetMission_5()) + 1.0) * 0.40000000000000002;
            long double fp0_4;
            fp0_4 = Sys_AllocateMemory_14(Level_SetMission_5());
            *(context + 0xdd8) = (fp0_4 + 1.0) * 0.40000000000000002;
            long double fpu_val_7_16 = *(context + 0x254);
            long double f0_1 = *(context + 0x258);
            fpu_val_7_16 - f0_1;
            result = (fpu_val_7_16 < f0_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_16, f0_1) ? 1 : 0) << 0xa
                | (fpu_val_7_16 == f0_1 ? 1 : 0) << 0xe;

            if (*(&result + 1) & 1)
                return SoundSys_SetMasterVolume_7(*(context + 0x4ec), "elfence_spark1");
        }
    }

    return result;
}

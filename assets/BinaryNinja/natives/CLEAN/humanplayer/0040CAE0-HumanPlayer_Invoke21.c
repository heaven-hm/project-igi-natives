// IGI native provenance: HumanPlayer_Invoke21 - 0x0040CAE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040CAE0-HumanPlayer_Invoke21.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_Invoke21.h"

void* HumanPlayer_Invoke21(void* arg1, void* arg2)

{
    void* result = AI_CombatTarget_21(arg2);
    long double x87_r7 = *(arg2 + 0x1d4);
    long double temp0 = 0f;
    x87_r7 - temp0;
    void* result_1 = result;
    char ecx_1 = 0;
    result = (x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        long double x87_r7_1 = *(arg2 + 0x134);
        long double temp1_1 = 0f;
        x87_r7_1 - temp1_1;
        result = (x87_r7_1 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 0x40)
            ecx_1 = 1;
    }

    if (!(*(arg1 + 8) & 0x20000) && !ecx_1)
        return result;

    *(arg2 + 0x4d0) = 1;
    HumanPlayer_LoadParameters_6(arg2);
    AI_TakeCover_22(*(arg2 + 0x4ec));
    AI_UpdateOrders_20(arg2);
    Weapon_ReloadClip_4(result_1);
    AI_SelectTarget_20(arg2);
    AI_UpdatePatrol_21(arg2, nullptr);
    AI_CheckSector_19(arg2);
    AI_CheckHearing_20(arg2);
    int32_t* edx_1 = *(arg1 + 4);
    *(arg1 + 0xc) = *(arg1 + 0x10);
    *(arg1 + 0x10) = 0;
    int32_t eax_1 = *edx_1;
    *(arg1 + 0x14) = eax_1;
    return eax_1(arg1, arg2);
}

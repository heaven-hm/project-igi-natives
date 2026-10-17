// IGI native provenance: HumanPlayer_Invoke21_40D580 - 0x0040D580 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040D580-HumanPlayer_Invoke21_40D580.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_Invoke21_40D580.h"

int32_t HumanPlayer_Invoke21_40D580(void* arg1, void* arg2)

{
    void* result_val = AI_CombatTarget_21(arg2);
    long double x87_r7 = *(arg2 + 0x1d4);
    long double temp0 = 0f;
    x87_r7 - temp0;
    char ecx_1 = 0;

    if (*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
            | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 0x40)
        ecx_1 = 1;

    if (*(arg1 + 8) & 0x20000)
        ecx_1 = 1;

    int32_t result = *(arg2 + 0xd64);
    int32_t data_val = *(arg2 + 0xd60);

    if (result < data_val)
    {
        result += 1;
        *(arg2 + 0xd64) = result;
    }

    if (*(arg2 + 0xd64) == data_val)
    {
        if (!ecx_1)
            Env_ScanViewCone_3(result_val);
    }
    else if (!ecx_1)
        return result;

    HumanPlayer_LoadParameters_6(arg2);
    AI_TakeCover_22(*(arg2 + 0x4ec));
    AI_UpdateOrders_20(arg2);
    AI_SelectTarget_20(arg2);
    AI_UpdatePatrol_21(arg2, nullptr);
    Human_ViewCam(arg2, 1);
    HumanPlayer_UpdateMotion_5(arg2);
    AI_CheckHearing_20(arg2);
    void* eax_3 = *(arg2 + 0xd70);

    if (eax_3)
        SoundSys_SetFrequency_7(eax_3);

    int32_t* edx_1 = *(arg1 + 4);
    *(arg1 + 0xc) = *(arg1 + 0x10);
    *(arg1 + 0x10) = 0;
    int32_t eax_4 = *edx_1;
    *(arg1 + 0x14) = eax_4;
    return eax_4(arg1, arg2);
}

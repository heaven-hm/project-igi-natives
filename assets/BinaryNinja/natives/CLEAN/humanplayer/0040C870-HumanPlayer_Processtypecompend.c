// IGI native provenance: HumanPlayer_Processtypecompend - 0x0040C870 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040C870-HumanPlayer_Processtypecompend.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_Processtypecompend.h"

int32_t HumanPlayer_Processtypecompend(void* arg1, void* arg2)

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
        {
            Env_ScanViewCone_3(result_val);
            struct status_msg* eax_2 = SoundSys_SetMasterVolume_7(arg2, "typecomp_end");

            if (eax_2)
                SoundSys_StopSoundSample_7(eax_2, DynObj_UpdateDynTree_4(arg2));
        }
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
    void* eax_5 = *(arg2 + 0xd70);

    if (eax_5)
        SoundSys_SetFrequency_7(eax_5);

    int32_t* edx_1 = *(arg1 + 4);
    *(arg1 + 0xc) = *(arg1 + 0x10);
    *(arg1 + 0x10) = 0;
    int32_t eax_6 = *edx_1;
    *(arg1 + 0x14) = eax_6;
    return eax_6(arg1, arg2);
}

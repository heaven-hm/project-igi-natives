// IGI native provenance: PickupTrigger_Invoke29 - 0x0046A0D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046A0D0-PickupTrigger_Invoke29.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PickupTrigger_Invoke29.h"

void* PickupTrigger_Invoke29(float arg1)

{
    void* result_val = AI_CheckHearing_29();
    int32_t* i = *(arg1 + 8);

    if (*i && i)
    {
        int32_t afa7e0_1 = g_afa7e0;

        do
        {
            int32_t* edi_1 = *i;
            void* eax_4;

            if (!edi_1)
                eax_4 = nullptr;
            else
            {
                int32_t eax_1 = *edi_1;
                int32_t eax_2 = -(eax_1);
                eax_4 = (eax_2 - eax_2) & edi_1;
            }

            *((afa7e0_1 << 2) + &g_afa6e0) = eax_4;
            int32_t afa7e0_2 = afa7e0_1 + 1;
            int32_t eax_5 = 0;
            g_afa7e0 = afa7e0_2;
            eax_5 = i[7];
            int32_t eax_6 = *((eax_5 << 2) + &g_a970e0);

            if (eax_6)
            {
                eax_6(i);
                afa7e0_2 = g_afa7e0;
            }

            i = *((afa7e0_2 << 2) + &g_afa6dc);
            afa7e0_1 = afa7e0_2 - 1;
            g_afa7e0 = afa7e0_1;
        } while (i);
    }

    AI_CheckVisibility_27(arg1);
    AI_CombatTarget_27(arg1);
    float var_14 = arg1;
    AI_UpdatePatrol_27();
    int32_t context_val;
    long double st0;
    st0 = FX_TrailUpdate_11();
    int32_t var_10_3 = context_val;
    int32_t* eax_7 = SoundSys_SetFrequency_9();
    int32_t var_1c = 0x43960000;
    Camera_SubmitFrame(result_val, &g_5bdd78, arg1 + 0x20, *(arg1 + 0x70), 0x3f800000, eax_7, arg1, st0,
        0f);
    int32_t eax_8 = *(arg1 + 0x7c);

    if (!eax_8)
    {
        *(arg1 + 0x78) = 0x3dcccccd;
        long double x87_r7_2 = Sys_AllocateMemory_14(Level_SetMission_5()) * 0.400000006f;
        *(arg1 + 0x7c) = 0xf;
        *(arg1 + 0x78) = x87_r7_2 + *(arg1 + 0x78);
        uint32_t eax_12 = Sys_FreeMemory_14(Level_SetMission_5(), 0x4b);
        *(arg1 + 0x7c) += eax_12;
    }
    else
        *(arg1 + 0x7c) = eax_8 - 1;

    long double x87_r7_5 = *(arg1 + 0x78) - 0.0333333351f;
    void* ecx_4 = *(arg1 + 0x74);
    *(arg1 + 0x78) = x87_r7_5;
    return Camera_SetFieldOfView_3(ecx_4, x87_r7_5);
}

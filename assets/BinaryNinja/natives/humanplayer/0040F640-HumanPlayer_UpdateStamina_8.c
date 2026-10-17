// Original IGI.EXE function: HumanPlayer_UpdateStamina_8 (VA 0x0040F640; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_UpdateStamina_8.h"
void* HumanPlayer_UpdateStamina_8(void* a1, int32_t* a2)

{
    void* flagP = a2[0x13b];
    void* valA1;
    int32_t objC;
    valA1 = Table_GetAt(&a2[0x131], 0);
    int32_t tmpD;
    void* valA2 = HumanPlayer_LoadParameters_13(valA1, tmpD, objC, valA1);
    a2[0x138] += 1;
    void* valA3 = *(flagP + 0x20c);

    if (valA3 == 3)
    {
        valA3 = a2[0x139];
        *(a2 + 0x4d1) = 1;

        if (valA3)
        {
            valA3 = SoundSys_SetFrequency_7(valA3);
            a2[0x139] = 0;
        }
    }

    if (*(a1 + 8) & 1)
    {
        Bones_PlayAnimation(flagP + 0x68, 0, *(valA2 + 0x67c), 0, 0f);
        AI_UpdateSensors_22(a2[0x13b], -0.610865235f, 0xbeb2b8c3);
        AI_SelectTarget_22(a2[0x13b], 0f, 0, 0x3d6e4bae, 0x3d082b3f);
        void v_8;
        Script_ParseEnumReal32_13(valA1, &v_8);
        int32_t v_4;
        int32_t valA5 = v_4;
        bool cond_0_1 = valA5;
        valA5 = g_56e214;

        if (!cond_0_1 && !valA5)
        {
            HumanPlayer_UpdateHealth_8(a2, 1);
            *(a1 + 0x14) = HumanPlayer_CheckCollision_7;
            return a1;
        }

        valA3 = Script_SpawnNewTask_13(valA1, valA5);
        *(a1 + 0x14) = HumanPlayer_PlayFootstep_8;
    }

    return valA3;
}

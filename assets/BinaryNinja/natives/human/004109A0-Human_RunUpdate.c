#include "Human_RunUpdate.h"
void* Human_RunUpdate(int32_t* a1)

// Sig: void Human_RunUpdate(HumanPlayer* human)
// Note: Main HUMAN PLAYER RUN/MOVEMENT UPDATE - large handler; reads human
// struct field +0x2EC (lea dstD,[srcS+0x2ec], matching the documented param-ptr
// slot) and drives movement state. Hooked by IGI-MP as HumanPlayer_RunUpdate.
{
    HumanPlayer_ApplyPhysics(a1);
    float* v_80 = a1;
    AI_MoveToNode_18(v_80);
    AI_TakeCover_18(a1);

    if (!AI_CombatTarget_29())
    {
        HumanPlayer_UpdateHealth_9(a1);
        v_80 = nullptr;
        HumanPlayer_UpdateHealth_8(a1, v_80);
    }

    v_80 = &a1[0xbb];
    SoundSys_Update3DPosition_16(v_80, a1);
    SoundSys_Update3DPosition_16(&a1[0x33e], a1);
    long double fpu7 = a1[0x80];
    long double f0 = 0f;
    fpu7 - f0;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        long double x87_r7_1 = a1[0x58];
        long double f2_1 = 0f;
        x87_r7_1 - f2_1;

        if (*(&((x87_r7_1 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40)
            *(a1 + 0xd45) ^= 1;
    }

    long double x87_r7_2 = a1[0x8d];
    long double f1 = 0f;
    x87_r7_2 - f1;
    int32_t objC = a1[0xbf];
    int16_t valA3 = (x87_r7_2 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f1) ? 1 : 0) << 0xa
        | (x87_r7_2 == f1 ? 1 : 0) << 0xe;
    int32_t valA4;

    if (objC == 0x30)
    {
        if (!(*(&valA3 + 1) & 0x40))
        {
            long double x87_r7_4 = a1[0x65];
            long double f3_1 = 0f;
            x87_r7_4 - f3_1;

            if (*(&((x87_r7_4 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f3_1) ? 1 : 0) << 0xa
                | (x87_r7_4 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40)
            {
                __builtin_memset(&a1[0x199], 0, 0x18);
                a1[0xbe] = a1[0xbf];
                a1[0xbf] = 0;
                valA4 = *a1[0xbc];
            label_410ad7:
                v_80 = &a1[0xbb];
                a1[0xc0] = valA4;
                valA4(v_80, a1);
            }
        }
    }
    else if (!(*(&valA3 + 1) & 0x40))
    {
        long double x87_r7_3 = a1[0x65];
        long double f4_1 = 0f;
        x87_r7_3 - f4_1;

        if (*(&((x87_r7_3 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f4_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            a1[0xbe] = objC;
            a1[0xbf] = 0x30;
            valA4 = *(a1[0xbc] + 0xc0);
            goto label_410ad7;
        }
    }

    if (a1[0x35e] || *(a1 + 0xd79))
        Ladder_Mount(a1);

    if (a1[0x364] || *(a1 + 0xd91))
        HumanPlayer_PlaySound_9(a1);

    if (*(a1 + 0xd93) || a1[0x365])
        HumanPlayer_TakeDamage_9(a1);

    if (a1[0x368] || *(a1 + 0xda1))
        HumanPlayer_WireSlide1_2(a1);

    a1[0xbd] &= 0xfffeffff;
    AI_UpdateOrders_18(a1);
    float objC2 = a1[0x13b];
    v_80 = a1;
    AI_UpdatePatrol_23(objC2, v_80);
    a1[0x36] = 1;
    Render_TransformVertices_5(&a1[0x145], &a1[0x148], &a1[0x1a]);

    if (!a1[0x14b])
    {
        a1[0x148] = g_56e1e8 * a1[0x148];
        a1[0x149] = g_56e1e8 * a1[0x149];
        a1[0x14a] = g_56e1e8 * a1[0x14a];
    }

    float v_60 = a1[0x23] * a1[0x14a] + a1[0x22] * a1[0x149] + a1[0x21] * a1[0x148];
    long double x87_r6_17 = a1[0x26] * a1[0x14a] + a1[0x25] * a1[0x149];
    long double x87_r5_11 = a1[0x24] * a1[0x148];
    a1[0x148] = a1[0x20] * a1[0x14a] + a1[0x1f] * a1[0x149] + a1[0x1e] * a1[0x148];
    a1[0x149] = v_60;
    a1[0x14a] = x87_r6_17 + x87_r5_11;
    AI_AlertAllies_18(a1);

    if (a1[0xbf] != 0x30)
    {
        if (a1[0x1db])
            Human_AttachedMovement(a1);
        else
            Human_MovementIntegrator(a1);
    }

    v_80 = a1[0x13b];
    AI_CombatTarget_23(v_80, a1);
    Muzzle_Eye(a1);
    AI_UpdateSensors_18(a1);
    HumanPlayer_UpdateStamina_9(a1);
    AI_WalkRain1D_4(a1);
    HumanPlayer_Earcandy(a1);
    HumanPlayer_HandleInput_9(a1);
    HumanPlayer_ApplyPhysics_9(a1);
    HumanPlayer_PlayFootstep_9(a1);
    long double x87_r6_19 = a1[0x19b];
    long double f5 = 0f;
    x87_r6_19 - f5;
    long double x87_r6_20 = a1[0x19b];

    if (*(&((x87_r6_19 < f5 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_19, f5) ? 1 : 0) << 0xa
            | (x87_r6_19 == f5 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
        x87_r6_20 = -(x87_r6_20);

    v_80 = x87_r6_20 * 0.000244140625f * 30f;
    AI_CheckHearing_18(a1, "Speed Z (m/s): %.2f\n");
    int32_t v_90_2 = AI_CheckSector_20(a1);
    AI_CheckHearing_18(a1, "Ground task: %x\n");
    int32_t v_9c_1 = a1[0x1db];
    AI_CheckHearing_18(a1, "Attach task: %x\n");
    v_80 = a1[0x1ca];
    AI_CheckHearing_18(a1, "Delta move pos X: %.2f\n");
    v_80 = a1[0x1cb];
    AI_CheckHearing_18(a1, "Delta move pos Y: %.2f\n");
    v_80 = a1[0x1cc];
    AI_CheckHearing_18(a1, "Delta move pos Z: %.2f\n");
    v_80 = a1[0x1d7];
    AI_CheckHearing_18(a1, "Delta move Alpha: %.2f\n");
    v_80 = a1[0x1d8];
    AI_CheckHearing_18(a1, "Delta move Beta: %.2f\n");
    v_80 = a1[0x1d9];
    AI_CheckHearing_18(a1, "Delta move Gamma: %.2f\n");
    v_80 = *(a1 + 0x710) * 0.000244140625;
    AI_CheckHearing_18(a1, "Distance to ground from feet: %.2fm\n");
    v_80 = a1[0x1c6] * 57.2957764f;
    AI_CheckHearing_18(a1, "Ground angle: %.3f\n");
    v_80 = a1[0x148];
    AI_CheckHearing_18(a1, "Delta translation X: %.2f\n");
    v_80 = a1[0x149];
    AI_CheckHearing_18(a1, "Delta translation Y: %.2f\n");
    v_80 = a1[0x14a];
    int32_t* v_88_14 = a1;
    AI_CheckHearing_18(v_88_14, "Delta translation Z: %.2f\n");

    if (a1[0xbd] & 4)
    {
        char* v_7c_12 = "Ground!\n";
        v_80 = a1;
        AI_CheckHearing_18(v_80, v_7c_12);
    }

    void* result = DEBUG_KEYSENABLEINVALID(0x57);

    if (result)
        g_56df94 ^= 1;

    if (g_56df94)
    {
        v_80 = *(a1 + 0x30) * 0.000244140625;
        v_88_14 = *(a1 + 0x28) * 0.000244140625;
        v_90_2 = *(a1 + 0x20) * 0.000244140625;
        SoundSys_Update3DPosition_11("Player position: %.2f, %.2f, %.2f\n");
        result = Level_LoadLevel_6();

        if (*(result + 0x5c))
        {
            void* valA21 = *(Level_LoadLevel_6() + 0x5c);
            int32_t tmpD5 = *(valA21 + 0x44);
            int32_t v_58 = *(valA21 + 0x38);
            int32_t v_54_1 = tmpD5;
            int32_t v_50_1 = *(valA21 + 0x50);
            int32_t v_4c_1 = *(valA21 + 0x3c);
            int32_t v_48_1 = *(valA21 + 0x48);
            int32_t v_44_1 = *(valA21 + 0x54);
            int32_t v_40_1 = *(valA21 + 0x40);
            int32_t v_3c_1 = *(valA21 + 0x4c);
            int32_t v_38_1 = *(valA21 + 0x58);
            int32_t v_34_1 = *(valA21 + 0x5c);
            void v_30;
            memcpy(&v_30, &v_58, 0x28);
            float v_6c;
            float* v_7c_14 = &v_6c;
            float v_68;
            v_80 = &v_68;
            float v_18[0x4];
            Sys_ResolveSymbol_10(&v_18, v_80, v_7c_14);
            long double x87_r6_42 = v_6c;
            long double f6_1 = 0f;
            x87_r6_42 - f6_1;

            if (*(&((x87_r6_42 < f6_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_42, f6_1) ? 1 : 0) << 0xa
                | (x87_r6_42 == f6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
            {
                long double f7_1;

                do
                {
                    x87_r6_42 = x87_r6_42 + 6.28318548f;
                    f7_1 = 0f;
                    x87_r6_42 - f7_1;
                } while (*(&((x87_r6_42 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_42, f7_1) ? 1 : 0) << 0xa
                    | (x87_r6_42 == f7_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1);
                v_6c = x87_r6_42;
            }

            v_80 = x87_r6_42 * 57.2957764f;
            v_88_14 = v_68 * 57.2957764f;
            return SoundSys_Update3DPosition_11("Player angle: %.2f, %.2f\n");
        }
    }

    return result;
}

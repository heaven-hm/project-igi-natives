// IGI native provenance: Human_RunUpdate - 0x004109A0 - CFG score 98.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 004109A0-Human_RunUpdate.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Human_RunUpdate.h"
void* Human_RunUpdate(int32_t* context)

// Sig: void Human_RunUpdate(HumanPlayer* human)
// Note: Main HUMAN PLAYER RUN/MOVEMENT UPDATE - large handler; reads human
// struct field +0x2EC (lea dest_val,[source_val+0x2ec], matching the documented param-ptr
// slot) and drives movement state. Hooked by IGI-MP as HumanPlayer_RunUpdate.
{
    HumanPlayer_ApplyPhysics(context);
    float* item_80 = context;
    AI_MoveToNode_18(item_80);
    AI_TakeCover_18(context);

    if (!AI_CombatTarget_29())
    {
        HumanPlayer_UpdateHealth_9(context);
        item_80 = nullptr;
        HumanPlayer_UpdateHealth_8(context, item_80);
    }

    item_80 = &context[0xbb];
    SoundSys_Update3DPosition_16(item_80, context);
    SoundSys_Update3DPosition_16(&context[0x33e], context);
    long double fpu7 = context[0x80];
    long double f0 = 0.0f;
    fpu7 - f0;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        long double fpu_val_7_1 = context[0x58];
        long double f2_1 = 0.0f;
        fpu_val_7_1 - f2_1;

        if (*(&((fpu_val_7_1 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_1 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40)
            *(context + 0xd45) ^= 1;
    }

    long double fpu_val_7_2 = context[0x8d];
    long double f1 = 0.0f;
    fpu_val_7_2 - f1;
    int32_t entity_val = context[0xbf];
    int16_t data_3 = (fpu_val_7_2 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f1) ? 1 : 0) << 0xa
        | (fpu_val_7_2 == f1 ? 1 : 0) << 0xe;
    int32_t data_4;

    if (entity_val == 0x30)
    {
        if (!(*(&data_3 + 1) & 0x40))
        {
            long double fpu_val_7_4 = context[0x65];
            long double f3_1 = 0.0f;
            fpu_val_7_4 - f3_1;

            if (*(&((fpu_val_7_4 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f3_1) ? 1 : 0) << 0xa
                | (fpu_val_7_4 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40)
            {
                memset(&context[0x199], 0, 0x18);
                context[0xbe] = context[0xbf];
                context[0xbf] = 0;
                data_4 = *context[0xbc];
            label_410ad7:
                item_80 = &context[0xbb];
                context[0xc0] = data_4;
                data_4(item_80, context);
            }
        }
    }
    else if (!(*(&data_3 + 1) & 0x40))
    {
        long double fpu_val_7_3 = context[0x65];
        long double f4_1 = 0.0f;
        fpu_val_7_3 - f4_1;

        if (*(&((fpu_val_7_3 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f4_1) ? 1 : 0) << 0xa
            | (fpu_val_7_3 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            context[0xbe] = entity_val;
            context[0xbf] = 0x30;
            data_4 = *(context[0xbc] + 0xc0);
            goto label_410ad7;
        }
    }

    if (context[0x35e] || *(context + 0xd79))
        Ladder_Mount(context);

    if (context[0x364] || *(context + 0xd91))
        HumanPlayer_PlaySound_9(context);

    if (*(context + 0xd93) || context[0x365])
        HumanPlayer_TakeDamage_9(context);

    if (context[0x368] || *(context + 0xda1))
        HumanPlayer_WireSlide1_2(context);

    context[0xbd] &= 0xfffeffff;
    AI_UpdateOrders_18(context);
    float entity_2 = context[0x13b];
    item_80 = context;
    AI_UpdatePatrol_23(entity_2, item_80);
    context[0x36] = 1;
    Render_TransformVertices_5(&context[0x145], &context[0x148], &context[0x1a]);

    if (!context[0x14b])
    {
        context[0x148] = g_56e1e8 * context[0x148];
        context[0x149] = g_56e1e8 * context[0x149];
        context[0x14a] = g_56e1e8 * context[0x14a];
    }

    float item_60 = context[0x23] * context[0x14a] + context[0x22] * context[0x149] + context[0x21] * context[0x148];
    long double fpu_val_6_17 = context[0x26] * context[0x14a] + context[0x25] * context[0x149];
    long double fpu_val_5_11 = context[0x24] * context[0x148];
    context[0x148] = context[0x20] * context[0x14a] + context[0x1f] * context[0x149] + context[0x1e] * context[0x148];
    context[0x149] = item_60;
    context[0x14a] = fpu_val_6_17 + fpu_val_5_11;
    AI_AlertAllies_18(context);

    if (context[0xbf] != 0x30)
    {
        if (context[0x1db])
            Human_AttachedMovement(context);
        else
            Human_MovementIntegrator(context);
    }

    item_80 = context[0x13b];
    AI_CombatTarget_23(item_80, context);
    Muzzle_Eye(context);
    AI_UpdateSensors_18(context);
    HumanPlayer_UpdateStamina_9(context);
    AI_WalkRain1D_4(context);
    HumanPlayer_Earcandy(context);
    HumanPlayer_HandleInput_9(context);
    HumanPlayer_ApplyPhysics_9(context);
    HumanPlayer_PlayFootstep_9(context);
    long double fpu_val_6_19 = context[0x19b];
    long double f5 = 0.0f;
    fpu_val_6_19 - f5;
    long double fpu_val_6_20 = context[0x19b];

    if (*(&((fpu_val_6_19 < f5 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_19, f5) ? 1 : 0) << 0xa
            | (fpu_val_6_19 == f5 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
        fpu_val_6_20 = -(fpu_val_6_20);

    item_80 = fpu_val_6_20 * 0.000244140625f * 30.0f;
    AI_CheckHearing_18(context, "Speed Z (m/s): %.2f\n");
    int32_t item_90_2 = AI_CheckSector_20(context);
    AI_CheckHearing_18(context, "Ground task: %x\n");
    int32_t item_9c_1 = context[0x1db];
    AI_CheckHearing_18(context, "Attach task: %x\n");
    item_80 = context[0x1ca];
    AI_CheckHearing_18(context, "Delta move pos X: %.2f\n");
    item_80 = context[0x1cb];
    AI_CheckHearing_18(context, "Delta move pos Y: %.2f\n");
    item_80 = context[0x1cc];
    AI_CheckHearing_18(context, "Delta move pos Z: %.2f\n");
    item_80 = context[0x1d7];
    AI_CheckHearing_18(context, "Delta move Alpha: %.2f\n");
    item_80 = context[0x1d8];
    AI_CheckHearing_18(context, "Delta move Beta: %.2f\n");
    item_80 = context[0x1d9];
    AI_CheckHearing_18(context, "Delta move Gamma: %.2f\n");
    item_80 = *(context + 0x710) * 0.000244140625;
    AI_CheckHearing_18(context, "Distance to ground from feet: %.2fm\n");
    item_80 = context[0x1c6] * 57.2957764f;
    AI_CheckHearing_18(context, "Ground angle: %.3f\n");
    item_80 = context[0x148];
    AI_CheckHearing_18(context, "Delta translation X: %.2f\n");
    item_80 = context[0x149];
    AI_CheckHearing_18(context, "Delta translation Y: %.2f\n");
    item_80 = context[0x14a];
    int32_t* item_88_14 = context;
    AI_CheckHearing_18(item_88_14, "Delta translation Z: %.2f\n");

    if (context[0xbd] & 4)
    {
        char* item_7c_12 = "Ground!\n";
        item_80 = context;
        AI_CheckHearing_18(item_80, item_7c_12);
    }

    void* result = DEBUG_KEYSENABLEINVALID(0x57);

    if (result)
        g_56df94 ^= 1;

    if (g_56df94)
    {
        item_80 = *(context + 0x30) * 0.000244140625;
        item_88_14 = *(context + 0x28) * 0.000244140625;
        item_90_2 = *(context + 0x20) * 0.000244140625;
        SoundSys_Update3DPosition_11("Player position: %.2f, %.2f, %.2f\n");
        result = Level_LoadLevel_6();

        if (*(result + 0x5c))
        {
            void* data_21 = *(Level_LoadLevel_6() + 0x5c);
            int32_t temp_5 = *(data_21 + 0x44);
            int32_t item_58 = *(data_21 + 0x38);
            int32_t item_54_1 = temp_5;
            int32_t item_50_1 = *(data_21 + 0x50);
            int32_t item_4c_1 = *(data_21 + 0x3c);
            int32_t item_48_1 = *(data_21 + 0x48);
            int32_t item_44_1 = *(data_21 + 0x54);
            int32_t item_40_1 = *(data_21 + 0x40);
            int32_t item_3c_1 = *(data_21 + 0x4c);
            int32_t item_38_1 = *(data_21 + 0x58);
            int32_t item_34_1 = *(data_21 + 0x5c);
            void item_30;
            memcpy(&item_30, &item_58, 0x28);
            float item_6c;
            float* item_7c_14 = &item_6c;
            float item_68;
            item_80 = &item_68;
            float item_18[0x4];
            Sys_ResolveSymbol_10(&item_18, item_80, item_7c_14);
            long double fpu_val_6_42 = item_6c;
            long double f6_1 = 0.0f;
            fpu_val_6_42 - f6_1;

            if (*(&((fpu_val_6_42 < f6_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_42, f6_1) ? 1 : 0) << 0xa
                | (fpu_val_6_42 == f6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
            {
                long double f7_1;

                do
                {
                    fpu_val_6_42 = fpu_val_6_42 + 6.28318548f;
                    f7_1 = 0.0f;
                    fpu_val_6_42 - f7_1;
                } while (*(&((fpu_val_6_42 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_42, f7_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_42 == f7_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1);
                item_6c = fpu_val_6_42;
            }

            item_80 = fpu_val_6_42 * 57.2957764f;
            item_88_14 = item_68 * 57.2957764f;
            return SoundSys_Update3DPosition_11("Player angle: %.2f, %.2f\n");
        }
    }

    return result;
}

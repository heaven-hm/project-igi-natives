// IGI native provenance: AI_SpeedZMS2F - 0x004550B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004550B0-AI_SpeedZMS2F.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_SpeedZMS2F.h"
int32_t AI_SpeedZMS2F(float* context)

{
    AI_MoveToNode_16(context);
    AI_MoveToNode_18(context);
    SoundSys_Update3DPosition_16(&context[0xbb], context);
    long double fpu7 = context[0x80];
    long double f0 = 0.0f;
    fpu7 - f0;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
            | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x40))
        context[0x340] ^= 1;

    context[0xbd] &= 0xfffeffff;
    AI_UpdateOrders_18(context);
    AI_UpdatePatrol_23(context[0x13b], context);
    context[0x36] = 1;
    Render_TransformVertices_5(&context[0x145], &context[0x148], &context[0x1a]);

    if (!context[0x14b])
    {
        void* data_5 = context[0x200];
        long double fpu_val_6_1 = 1.0f;

        if (data_5 && *(data_5 + 0x3d38) == 4)
            fpu_val_6_1 = HumanPlayer_UpdateMotion_10();

        context[0x148] = fpu_val_6_1 * context[0x148];
        context[0x149] = fpu_val_6_1 * context[0x149];
        context[0x14a] = fpu_val_6_1 * context[0x14a];
    }

    long double fpu_val_6_11 =
        context[0x23] * context[0x14a] + context[0x22] * context[0x149] + context[0x21] * context[0x148];
    long double fpu_val_6_14 = context[0x26] * context[0x14a] + context[0x25] * context[0x149];
    long double fpu_val_5_16 = context[0x24] * context[0x148];
    context[0x148] = context[0x20] * context[0x14a] + context[0x1f] * context[0x149] + context[0x1e] * context[0x148];
    context[0x149] = fpu_val_6_11;
    context[0x14a] = fpu_val_6_14 + fpu_val_5_16;
    AI_AlertAllies_18(context);

    if (context[0x1db])
        Human_AttachedMovement(context);
    else
        Human_MovementIntegrator(context);

    void* item_28_2 = context[0x13b];
    AI_CombatTarget_23(item_28_2, context);
    Muzzle_Eye(context);
    AI_UpdateSensors_18(context);
    AI_WalkRain1D(context);
    long double fpu_val_6_16 = context[0x19b];
    long double f1 = 0.0f;
    fpu_val_6_16 - f1;
    long double fpu_val_6_17 = context[0x19b];

    if (*(&((fpu_val_6_16 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_16, f1) ? 1 : 0) << 0xa
            | (fpu_val_6_16 == f1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
        fpu_val_6_17 = -(fpu_val_6_17);

    item_28_2 = fpu_val_6_17 * 0.000244140625f * 30.0f;
    AI_CheckHearing_18(context, "Speed Z (m/s): %.2f\n");
    int32_t item_38_1 = AI_CheckSector_20(context);
    AI_CheckHearing_18(context, "Ground task: %x\n");
    int32_t item_44 = context[0x1db];
    AI_CheckHearing_18(context, "Attach task: %x\n");
    item_28_2 = context[0x1ca];
    AI_CheckHearing_18(context, "Delta move pos X: %.2f\n");
    item_28_2 = context[0x1cb];
    AI_CheckHearing_18(context, "Delta move pos Y: %.2f\n");
    item_28_2 = context[0x1cc];
    AI_CheckHearing_18(context, "Delta move pos Z: %.2f\n");
    item_28_2 = context[0x1d7];
    AI_CheckHearing_18(context, "Delta move Alpha: %.2f\n");
    item_28_2 = context[0x1d8];
    AI_CheckHearing_18(context, "Delta move Beta: %.2f\n");
    item_28_2 = context[0x1d9];
    AI_CheckHearing_18(context, "Delta move Gamma: %.2f\n");
    item_28_2 = *(context + 0x710) * 0.000244140625;
    AI_CheckHearing_18(context, "Distance to ground from feet: %.2fm\n");
    item_28_2 = context[0x1c6] * 57.2957764f;
    AI_CheckHearing_18(context, "Ground angle: %.3f\n");
    item_28_2 = context[0x148];
    AI_CheckHearing_18(context, "Delta translation X: %.2f\n");
    item_28_2 = context[0x149];
    AI_CheckHearing_18(context, "Delta translation Y: %.2f\n");
    item_28_2 = context[0x14a];
    AI_CheckHearing_18(context, "Delta translation Z: %.2f\n");
    char result = context[0xbd];

    if (!(4 & result))
        return result;

    return AI_CheckHearing_18(context, "Ground!\n");
}

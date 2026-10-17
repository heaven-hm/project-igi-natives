// Original IGI.EXE function: AI_SpeedZMS2F_3 (VA 0x00459F50; static CFG gate PASS, CFG score 1.000).
#include "AI_SpeedZMS2F_3.h"
int32_t AI_SpeedZMS2F_3(float* a1)

{
    AI_MoveToNode_16(a1);
    AI_MoveToNode_18(a1);
    SoundSys_Update3DPosition_16(&a1[0xbb], a1);
    long double fpu7 = a1[0x80];
    long double f0 = 0f;
    fpu7 - f0;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
            | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x40))
        a1[0x340] ^= 1;

    a1[0xbd] &= 0xfffeffff;
    AI_UpdateOrders_18(a1);
    AI_UpdatePatrol_23(a1[0x13b], a1);
    a1[0x36] = 1;
    Render_TransformVertices_5(&a1[0x145], &a1[0x148], &a1[0x1a]);
    long double x87_r6_7 =
        a1[0x23] * a1[0x14a] + a1[0x22] * a1[0x149] + a1[0x21] * a1[0x148];
    long double x87_r6_10 = a1[0x26] * a1[0x14a] + a1[0x25] * a1[0x149];
    long double x87_r5_11 = a1[0x24] * a1[0x148];
    a1[0x148] = a1[0x20] * a1[0x14a] + a1[0x1f] * a1[0x149] + a1[0x1e] * a1[0x148];
    a1[0x149] = x87_r6_7;
    a1[0x14a] = x87_r6_10 + x87_r5_11;
    AI_AlertAllies_18(a1);

    if (a1[0x1db])
        Human_AttachedMovement(a1);
    else
        Human_MovementIntegrator(a1);

    void* v_28_2 = a1[0x13b];
    AI_CombatTarget_23(v_28_2, a1);
    Muzzle_Eye(a1);
    AI_UpdateSensors_18(a1);
    AI_WalkRain1D_2(a1);
    long double x87_r6_12 = a1[0x19b];
    long double f1 = 0f;
    x87_r6_12 - f1;
    long double x87_r6_13 = a1[0x19b];

    if (*(&((x87_r6_12 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_12, f1) ? 1 : 0) << 0xa
            | (x87_r6_12 == f1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
        x87_r6_13 = -(x87_r6_13);

    v_28_2 = x87_r6_13 * 0.000244140625f * 30f;
    AI_CheckHearing_18(a1, "Speed Z (m/s): %.2f\n");
    int32_t v_38_1 = AI_CheckSector_20(a1);
    AI_CheckHearing_18(a1, "Ground task: %x\n");
    int32_t v_44 = a1[0x1db];
    AI_CheckHearing_18(a1, "Attach task: %x\n");
    v_28_2 = a1[0x1ca];
    AI_CheckHearing_18(a1, "Delta move pos X: %.2f\n");
    v_28_2 = a1[0x1cb];
    AI_CheckHearing_18(a1, "Delta move pos Y: %.2f\n");
    v_28_2 = a1[0x1cc];
    AI_CheckHearing_18(a1, "Delta move pos Z: %.2f\n");
    v_28_2 = a1[0x1d7];
    AI_CheckHearing_18(a1, "Delta move Alpha: %.2f\n");
    v_28_2 = a1[0x1d8];
    AI_CheckHearing_18(a1, "Delta move Beta: %.2f\n");
    v_28_2 = a1[0x1d9];
    AI_CheckHearing_18(a1, "Delta move Gamma: %.2f\n");
    v_28_2 = *(a1 + 0x710) * 0.000244140625;
    AI_CheckHearing_18(a1, "Distance to ground from feet: %.2fm\n");
    v_28_2 = a1[0x1c6] * 57.2957764f;
    AI_CheckHearing_18(a1, "Ground angle: %.3f\n");
    v_28_2 = a1[0x148];
    AI_CheckHearing_18(a1, "Delta translation X: %.2f\n");
    v_28_2 = a1[0x149];
    AI_CheckHearing_18(a1, "Delta translation Y: %.2f\n");
    v_28_2 = a1[0x14a];
    AI_CheckHearing_18(a1, "Delta translation Z: %.2f\n");
    char result = a1[0xbd];

    if (!(result & 4))
        return result;

    return AI_CheckHearing_18(a1, "Ground!\n");
}

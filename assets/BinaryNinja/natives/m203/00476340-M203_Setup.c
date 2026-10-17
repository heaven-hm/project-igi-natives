// Original IGI.EXE function: M203_Setup (VA 0x00476340; static CFG gate PASS, CFG score 0.944).
#include "M203_Setup.h"
int32_t M203_Setup(int32_t* context)

{
    long double fpu_val_7_1 = context[0x42] * 0.995000005f;
    int32_t* data_val = context[0x45];
    context[0x42] = fpu_val_7_1;
    long double fpu_val_6_1 = context[0x43] * 0.995000005f;
    double item_88[0x3];
    memcpy(&item_88, &context[0x3c], 0x18);
    context[0x43] = fpu_val_6_1;
    long double fpu_val_6_4 = (context[0x44] - 35.6807098f) * 0.995000005f;
    float item_d0 = fpu_val_6_4;
    context[0x44] = fpu_val_6_4;
    int32_t* item_c8 = context;
    *(context + 0xf0) = fpu_val_7_1 + *(context + 0xf0);
    *(context + 0xf8) = fpu_val_6_1 + *(context + 0xf8);
    *(context + 0x100) = item_d0 + *(context + 0x100);
    double item_b8[0x3];
    memcpy(&item_b8, &context[0x3c], 0x18);

    if (!data_val)
        int32_t item_c4_1 = 0;
    else
        int32_t item_c4 = *data_val;

    int32_t* data_2 = context[0x46];

    if (!data_2)
        int32_t item_c0_1 = 0;
    else
        int32_t item_c0 = *data_2;

    int32_t item_bc = 0x3f800000;
    char data_3 = Level_StartMission_2();
    int32_t item_cc;
    int32_t item_70;
    int32_t entity_2 = DynObj_FindSymbol_11(Level_StartMission_4(), &item_70, &item_88, &item_b8, 1, data_3,
        &item_cc, 0xffffffff);
    int32_t item_18;

    if (item_18)
    {
        int32_t item_114 = entity_2;
        int32_t item_118 = entity_2;
        void item_68;
        FX_SmokeEmit(&item_68, 1, 1, context[0x49], context[0x48] * 4096.0f, 0, 0x45800000, 3, 1, &item_70,
            "1009_01_1", "explo_proxy", 0x15, 2, 0x47c80000, 0);
        return QTask_FindType(context);
    }

    long double fpu_val_7_10 = context[0x27];
    long double fpu_val_6_5 = context[0x28];
    fpu_val_6_5 - fpu_val_7_10;
    long double fpu_val_7_11;

    if (!(*(&((fpu_val_6_5 < fpu_val_7_10 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_5, fpu_val_7_10) ? 1 : 0) << 0xa
            | (fpu_val_6_5 == fpu_val_7_10 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_11 = context[0x28];
    else
        fpu_val_7_11 = context[0x27];

    long double fpu_val_6_6 = context[0x26];
    fpu_val_6_6 - fpu_val_7_11;
    long double fpu_val_7_13;

    if (*(&((fpu_val_6_6 < fpu_val_7_11 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_6, fpu_val_7_11) ? 1 : 0) << 0xa
        | (fpu_val_6_6 == fpu_val_7_11 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_14 = context[0x27];
        long double fpu_val_6_7 = context[0x28];
        fpu_val_6_7 - fpu_val_7_14;

        if (!(*(&((fpu_val_6_7 < fpu_val_7_14 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_7, fpu_val_7_14) ? 1 : 0) << 0xa
                | (fpu_val_6_7 == fpu_val_7_14 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_13 = context[0x28];
        else
            fpu_val_7_13 = context[0x27];
    }
    else
        fpu_val_7_13 = context[0x26];

    float item_e8_1 = Render_ComputeNormals(context[0x1b]) * fpu_val_7_13;
    WorldObject_CommitTransform(Level_StartMission_4(), context, &context[0x3c], item_e8_1);
    item_cc = 0;
    void item_a0;
    memcpy(&item_a0, &context[0x3c], 0x18);
    int32_t item_c8_1 = 0;
    int32_t item_c4_2 = 0;
    float item_c4_3 = (Sys_AllocateMemory_14(Level_SetMission_5()) * 0.75 + 0.14999999999999999) * 4096000.0f
        * 9.25925906e-06.0f;
    float item_d4_2 = (Sys_AllocateMemory_14(Level_SetMission_5()) + 1.0) * 0.34999999999999998;
    long double fpu_val_7_26 = Sys_AllocateMemory_14(Level_SetMission_5()) - 0.5f;
    item_d0 = (fpu_val_7_26 + fpu_val_7_26) * 0.052359879f + 0.0127990814f;
    return Script_SpawnNewTask_31(context[0x47], &item_a0, &item_cc, item_d4_2, item_d0, 0, 0x3f800000, 7, 7);
}

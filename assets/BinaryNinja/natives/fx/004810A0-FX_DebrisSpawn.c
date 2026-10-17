// IGI native provenance: FX_DebrisSpawn - 0x004810A0 - CFG score 93.3% (PASS; structural only); runtime behavior not verified.
// Evidence: 004810A0-FX_DebrisSpawn.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_DebrisSpawn.h"
struct status_msg* FX_DebrisSpawn(int32_t context, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6, int32_t param_7, uint32_t param_8, uint32_t param_9, int32_t* param_10, int32_t param_11, int32_t param_12, int32_t* param_13, int32_t param_14, int32_t param_15, int32_t* param_16, uint32_t param_17, uint32_t param_18, uint32_t param_19, uint32_t param_20)

{
    int32_t kind;
    kind = g_5c1154;
    struct status_msg* result = QTask_HandleInput(Script_FormatString(), kind, 0);
    memcpy(&result->head[8], context, 0x18);
    result->head[0xf] = param_3;
    result->head[0xe] = param_2;
    result->head[0x10] = param_3;
    result->head[0x14] = param_4;
    result->head[0x16] = param_6;
    result->head[0x15] = param_5;
    result->head[0x11] = *param_16;
    result->head[0x12] = param_16[1];
    result->head[0x13] = param_16[2];
    long double fpu7 = result->head[0x11];
    long double f0 = 0.0f;
    fpu7 - f0;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_48113e:
        long double fpu_val_7_3 = result->head[0x13];
        long double fpu_val_6_1 = result->head[0x12];
        long double fpu_val_5_1 = result->head[0x11];
        long double fpu_val_7_5 =
            1.0 / sqrtl(fpu_val_5_1 * fpu_val_5_1 + fpu_val_6_1 * fpu_val_6_1 + fpu_val_7_3 * fpu_val_7_3);
        result->head[0x11] = result->head[0x11] * fpu_val_7_5;
        result->head[0x12] = result->head[0x12] * fpu_val_7_5;
        result->head[0x13] = result->head[0x13] * fpu_val_7_5;
    }
    else
    {
        long double fpu_val_7_1 = result->head[0x12];
        long double f1_1 = 0.0f;
        fpu_val_7_1 - f1_1;

        if (!(*(&((fpu_val_7_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_1 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_48113e;

        long double fpu_val_7_2 = result->head[0x13];
        long double f2_1 = 0.0f;
        fpu_val_7_2 - f2_1;

        if (!(*(&((fpu_val_7_2 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_2 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_48113e;
    }

    result->head[0x17] = param_17;
    result->head[0x18] = param_18;
    result->head[0x19] = param_19;
    result->head[0x1a] = param_8;
    result->head[0x1b] = param_9;
    int32_t* item_1c;

    if (param_10 && *param_10)
    {
        uint32_t data_8 = Weapon_CheckAmmo_8();
        int32_t entity_5 = 0;
        entity_5 = *(*param_10 + 0x1c);

        if (*(((data_8 * 0x180 + entity_5) << 2) + &g_a96ae0))
        {
            int32_t temp_8 = g_5c1164 + 0x18;
            item_1c = param_10;
            int32_t source_4 = *param_10;
            int32_t item_14_1 = temp_8;
            int32_t item_18_1 = 0;
            int32_t item_10_1 = param_7;
            uint32_t data_13 = Weapon_CheckAmmo_8();
            int32_t temp_9 = 0;
            temp_9 = *(source_4 + 0x1c);
            (*(((data_13 * 0x180 + temp_9) << 2) + &g_a96ae0))(source_4, &item_1c);
        }
    }

    int32_t dest_1 = param_12;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_1;
        dest_1 += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    int32_t entity_9 = ~i;
    int32_t source_6;
    int32_t dest_4;
    dest_4 = memcpy(&result->head[0x1c], dest_1 - entity_9, entity_9 & 0xfffffffc);
    memcpy(dest_4, source_6, entity_9 & 3);
    float item_28 = Sys_AllocateMemory_14(Level_SetMission_5()) * 0.628318548f;
    float item_24 = Sys_AllocateMemory_14(Level_SetMission_5()) * 0.628318548f;
    float item_20 = Sys_AllocateMemory_14(Level_SetMission_5()) * 0.628318548f;
    float* item_40_2 = &item_28;
    result->head[0x20] = Physics_CheckHullCollision_2(0x2d, param_11, 0, 0x3f7ae148, 0x3f19999a, 0x4232674f,
        result->head[0x15] * 0.000219726557f, &item_28, 0);

    if (param_13 == 0xffffffff)
    {
        result->head[0x21] = param_20;
        return result;
    }

    item_1c = param_13;
    int32_t item_14_2 = param_14;
    int32_t item_18_2 = 1;
    int32_t item_c = context;
    int32_t item_10_2 = param_15;
    int32_t item_4 = 0;
    struct status_msg* result_1 = result;
    AI_EventBroadcast(&item_1c);
    result->head[0x21] = param_20;
    return result;
}

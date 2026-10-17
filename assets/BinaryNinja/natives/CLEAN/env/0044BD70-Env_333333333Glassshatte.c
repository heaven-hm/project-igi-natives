// IGI native provenance: Env_333333333Glassshatte - 0x0044BD70 - CFG score 91.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 0044BD70-Env_333333333Glassshatte.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Env_333333333Glassshatte.h"
struct status_msg* Env_333333333Glassshatte(uint32_t context, float* param_2, double* param_3, double* param_4, float param_5 )

{
    int32_t* kind = context;
    void* entity_val = *kind;
    kind = g_57c240;
    void* source_val = *(*(entity_val + 0xc) + 0xc);
    struct status_msg* data_1 = QTask_HandleInput(Script_FormatString(), kind, 0);
    g_57c244 = 1;
    int32_t* source_1 = *(source_val + 0x2c);
    struct status_msg* temp_1 = data_1;
    struct status_msg* result = *source_1;
    struct status_msg* item_24 = temp_1;

    if (!result)
        return result;

    temp_1->head[0x1b] = *param_3 - *param_4;
    temp_1->head[0x1c] = param_3[1] - param_4[1];
    long double fpu_val_7_6 = param_3[2] - param_4[2];
    temp_1->head[0x1d] = fpu_val_7_6;
    long double fpu_val_6_1 = temp_1->head[0x1c];
    long double fpu_val_5_1 = temp_1->head[0x1b];
    float item_30_1 = sqrtl(fpu_val_5_1 * fpu_val_5_1 + fpu_val_6_1 * fpu_val_6_1 + fpu_val_7_6 * fpu_val_7_6);
    long double fpu_val_7_8 = 0.0f;
    long double f1_1 = item_30_1;
    fpu_val_7_8 - f1_1;
    long double fpu_val_7_9;

    if (*(&((fpu_val_7_8 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_8, f1_1) ? 1 : 0) << 0xa
        | (fpu_val_7_8 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double fpu_val_7_10 = 1.0f;
        long double f2_1 = item_30_1;
        fpu_val_7_10 - f2_1;

        fpu_val_7_9 = !(*(&((fpu_val_7_10 < f2_1 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_7_10, f2_1) ? 1 : 0) << 0xa | (fpu_val_7_10 == f2_1 ? 1 : 0) << 0xe)
            + 1) & 1) ? item_30_1 : 1.0f;
    }
    else
        fpu_val_7_9 = 0.0f;

    long double fpu_val_7_11 = fpu_val_7_9 * param_5;
    long double fpu_val_6_4 = fpu_val_7_11 / item_30_1;
    long double fpu_val_5_4 = fpu_val_6_4 * temp_1->head[0x1b];
    float item_28_1 = fpu_val_5_4;
    temp_1->head[0x1b] = fpu_val_5_4;
    long double fpu_val_5_6 = fpu_val_6_4 * temp_1->head[0x1c];
    float item_30_2 = fpu_val_5_6;
    temp_1->head[0x1c] = fpu_val_5_6;
    long double fpu_val_6_5 = fpu_val_6_4 * temp_1->head[0x1d];
    temp_1->head[0x1d] = fpu_val_6_5;
    float item_1c_1 = item_28_1 * param_2[1] + fpu_val_6_5 * param_2[7] + item_30_2 * param_2[4];
    long double fpu_val_6_7 = fpu_val_6_5 * param_2[8] + item_30_2 * param_2[5];
    long double fpu_val_5_18 = item_28_1 * param_2[2];
    temp_1->head[0x1b] = item_28_1 * *param_2 + fpu_val_6_5 * param_2[6] + item_30_2 * param_2[3];
    temp_1->head[0x1c] = item_1c_1;
    temp_1->head[0x1d] = fpu_val_6_7 + fpu_val_5_18;
    memcpy(&temp_1->head[0x1e], param_3, 0x18);
    memcpy(&temp_1->head[0x24], param_2, 0x28);
    temp_1->head[0x1a] = context;
    double* data_6 = param_3;
    temp_1->sprite[8] = 0x1e;
    temp_1->sprite[9] = 0;
    temp_1->sprite[0xa] = 0;
    temp_1->sprite[0xb] = 0;
    g_57c270 = *param_4 - *data_6;
    g_57c274 = param_4[1] - data_6[1];
    g_57c278 = param_4[2] - data_6[2];
    void* __offset(status_msg, 0x177c0) source_4 = &temp_1->head[0x5df0];
    int32_t item_28_2 = 0;
    float item_1c_2 = g_57c270 * param_2[1] + g_57c278 * param_2[7] + g_57c274 * param_2[4];
    long double fpu_val_6_25 = g_57c270 * param_2[2] + g_57c278 * param_2[8];
    long double fpu_val_5_30 = g_57c274 * param_2[5];
    g_57c270 = g_57c270 * *param_2 + g_57c278 * param_2[6] + g_57c274 * param_2[3];
    g_57c274 = item_1c_2;
    g_57c26c = source_4;
    g_57c228 = "333?333?333?GlassShatter";
    g_57c25c = temp_1;
    g_57c23c = fpu_val_7_11;
    g_57c278 = fpu_val_6_25 + fpu_val_5_30;
    g_57c27c = &temp_1->sprite[0xc];
    int32_t* entity_8 = source_1;
    temp_1->sprite[4] = 0;
    temp_1->sprite[5] = 0;
    temp_1->sprite[6] = 0;
    temp_1->sprite[7] = 0;

    if (*entity_8 > 0)
    {
        while (true)
        {
            int32_t data_7 = entity_8[4];
            int32_t dest_3 = entity_8[5];
            int32_t entity_9 = 0;
            entity_9 = *(data_7 + (item_28_2 << 3));
            void* data_8 = data_7 + (item_28_2 << 3);
            int32_t source_6 = 0;
            source_6 = *(data_8 + 2);
            float* entity_11 = (entity_9 << 4) + dest_3;
            float* source_8 = (source_6 << 4) + dest_3;
            int32_t dest_4 = 0;
            dest_4 = *(data_8 + 4);
            float* dest_6 = (dest_4 << 4) + source_1[5];
            long double fpu_val_7_13 = *dest_6 - *entity_11;
            long double fpu_val_6_28 = dest_6[1] - entity_11[1];
            long double fpu_val_5_32 = dest_6[2] - entity_11[2];
            float item_20_3 = *source_8 - *entity_11;
            float item_1c_3 = source_8[1] - entity_11[1];
            long double fpu_val_4_19 = source_8[2] - entity_11[2];
            long double fpu_val_5_40 =
                (param_3[2] - param_4[2]) * (fpu_val_7_13 * item_1c_3 - item_20_3 * fpu_val_6_28)
                + (param_3[1] - param_4[1]) * -((fpu_val_4_19 * fpu_val_7_13 - item_20_3 * fpu_val_5_32));
            long double fpu_val_6_33 =
                fpu_val_5_40 + (*param_3 - *param_4) * (fpu_val_4_19 * fpu_val_6_28 - item_1c_3 * fpu_val_5_32);
            long double f3_1 = 0.0f;
            fpu_val_6_33 - f3_1;

            if (*(&((fpu_val_6_33 < f3_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_33, f3_1) ? 1 : 0) << 0xa
                | (fpu_val_6_33 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            {
                Env_ActivateEntity_11(entity_11, source_8, dest_6);
                temp_1 = item_24;
            }

            int32_t data_18 = item_28_2 + 1;
            item_28_2 = data_18;

            if (data_18 >= *source_1)
                break;

            entity_8 = source_1;
        }

        data_6 = param_3;
    }

    uint32_t temp_2;
    temp_2 = temp_1->sprite[4];
    *(&temp_2 + 1) = temp_1->sprite[5];
    *(&temp_2 + 2) = temp_1->sprite[6];
    *(&temp_2 + 3) = temp_1->sprite[7];
    *(item_24 + 0x2b040) =
        Display_RestoreDevice_18(Level_StartMission_4(), nullptr, data_6, param_2, source_4, temp_2, 0, 1, 0, nullptr, 0);
    return Env_GlassCrush1(param_3);
}

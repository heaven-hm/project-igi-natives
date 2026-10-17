// IGI native provenance: Env_333333333 - 0x0044A1D0 - CFG score 91.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 0044A1D0-Env_333333333.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Env_333333333.h"
struct status_msg* Env_333333333(uint32_t context, int32_t* param_2, double* param_3, float* param_4, void* param_5)

{
    int32_t* kind = context;
    void* entity_val = *kind;
    kind = g_57c240;
    void* source_val = *(*(entity_val + 0xc) + 0xc);
    struct status_msg* data_1 = QTask_HandleInput(Script_FormatString(), kind, 0);
    g_57c244 = 0;
    int32_t* source_1 = *(source_val + 0x2c);
    struct status_msg* result = *source_1;

    if (!result)
        return result;

    data_1->head[0x1b] = *param_2;
    data_1->head[0x1c] = param_2[1];
    data_1->head[0x1d] = param_2[2];
    long double fpu_val_7_1 = data_1->head[0x1d];
    long double fpu_val_6_1 = data_1->head[0x1c];
    long double fpu_val_5_1 = data_1->head[0x1b];
    long double fpu_val_7_3 =
        10.0f / sqrtl(fpu_val_5_1 * fpu_val_5_1 + fpu_val_6_1 * fpu_val_6_1 + fpu_val_7_1 * fpu_val_7_1);
    long double fpu_val_6_4 = data_1->head[0x1b] * fpu_val_7_3;
    float item_20_1 = fpu_val_6_4;
    data_1->head[0x1b] = fpu_val_6_4;
    long double fpu_val_6_6 = data_1->head[0x1c] * fpu_val_7_3;
    float item_1c_1 = fpu_val_6_6;
    data_1->head[0x1c] = fpu_val_6_6;
    long double fpu_val_7_4 = fpu_val_7_3 * data_1->head[0x1d];
    data_1->head[0x1d] = fpu_val_7_4;
    float item_14_1 = fpu_val_7_4 * param_4[7] + item_1c_1 * param_4[4] + item_20_1 * param_4[1];
    long double fpu_val_7_6 = item_20_1 * param_4[2] + fpu_val_7_4 * param_4[8];
    long double fpu_val_6_20 = item_1c_1 * param_4[5];
    data_1->head[0x1b] = fpu_val_7_4 * param_4[6] + item_1c_1 * param_4[3] + item_20_1 * *param_4;
    data_1->head[0x1c] = item_14_1;
    data_1->head[0x1d] = fpu_val_7_6 + fpu_val_6_20;
    double* temp_4 = param_3;
    memcpy(&data_1->head[0x1e], temp_4, 0x18);
    memcpy(&data_1->head[0x24], param_4, 0x28);
    data_1->head[0x1a] = context;
    data_1->sprite[8] = 0x1e;
    data_1->sprite[9] = 0;
    data_1->sprite[0xa] = 0;
    data_1->sprite[0xb] = 0;
    g_57c270 = *(param_5 + 8) - *temp_4;
    g_57c274 = *(param_5 + 0x10) - temp_4[1];
    long double fpu_val_7_13 = *(param_5 + 0x18) - temp_4[2];
    g_57c278 = fpu_val_7_13;
    float item_14_2 = g_57c278 * param_4[7] + g_57c274 * param_4[4] + g_57c270 * param_4[1];
    long double fpu_val_7_23 = g_57c270 * param_4[2] + g_57c278 * param_4[8];
    long double fpu_val_6_32 = g_57c274 * param_4[5];
    g_57c270 = fpu_val_7_13 * param_4[6] + g_57c274 * param_4[3] + g_57c270 * *param_4;
    g_57c274 = item_14_2;
    g_57c278 = fpu_val_7_23 + fpu_val_6_32;
    g_57c250 = *(param_5 + 8) - *temp_4;
    g_57c254 = *(param_5 + 0x10) - temp_4[1];
    long double fpu_val_7_30 = *(param_5 + 0x18) - temp_4[2];
    g_57c258 = fpu_val_7_30;
    float item_14_3 = g_57c258 * param_4[7] + g_57c254 * param_4[4] + g_57c250 * param_4[1];
    long double fpu_val_7_40 = g_57c250 * param_4[2] + g_57c258 * param_4[8];
    long double fpu_val_6_44 = g_57c254 * param_4[5];
    g_57c250 = fpu_val_7_30 * param_4[6] + g_57c254 * param_4[3] + g_57c250 * *param_4;
    g_57c254 = item_14_3;
    g_57c258 = fpu_val_7_40 + fpu_val_6_44;
    long double fpu_val_7_45 =
        *(param_5 + 0x40) * param_4[6] + *(param_5 + 0x3c) * param_4[3] + *param_4 * *(param_5 + 0x38);
    long double fpu_val_7_52 = param_4[2] * *(param_5 + 0x38) + *(param_5 + 0x40) * param_4[8];
    long double fpu_val_6_56 = *(param_5 + 0x3c) * param_4[5];
    g_57c264 = *(param_5 + 0x40) * param_4[7] + *(param_5 + 0x3c) * param_4[4] + *(param_5 + 0x38) * param_4[1];
    g_57c260 = fpu_val_7_45;
    g_57c27c = &data_1->sprite[0xc];
    int32_t* entity_12 = source_1;
    g_57c23c = 0x41200000;
    g_57c228 = "333?333?333?";
    g_57c25c = data_1;
    g_57c268 = fpu_val_7_52 + fpu_val_6_56;
    g_57c26c = &data_1->head[0x5df0];
    data_1->sprite[4] = 0;
    data_1->sprite[5] = 0;
    data_1->sprite[6] = 0;
    data_1->sprite[7] = 0;
    context = 0;

    if (*entity_12 > 0)
    {
        while (true)
        {
            int32_t data_8 = entity_12[4];
            int32_t dest_3 = entity_12[5];
            int32_t entity_13 = 0;
            entity_13 = *(data_8 + (context << 3));
            void* data_9 = data_8 + (context << 3);
            int32_t source_8 = 0;
            source_8 = *(data_9 + 2);
            float* entity_15 = (entity_13 << 4) + dest_3;
            float* source_10 = (source_8 << 4) + dest_3;
            int32_t dest_4 = 0;
            dest_4 = *(data_9 + 4);
            float* dest_6 = (dest_4 << 4) + source_1[5];
            long double fpu_val_7_55 = *dest_6 - *entity_15;
            long double fpu_val_6_58 = dest_6[1] - entity_15[1];
            long double fpu_val_5_12 = dest_6[2] - entity_15[2];
            float item_18_5 = *source_10 - *entity_15;
            float item_14_5 = source_10[1] - entity_15[1];
            long double fpu_val_4_11 = source_10[2] - entity_15[2];
            long double fpu_val_7_60 = (fpu_val_4_11 * fpu_val_6_58 - item_14_5 * fpu_val_5_12) * *param_2
                + (fpu_val_7_55 * item_14_5 - item_18_5 * fpu_val_6_58) * param_2[2] +
                -((fpu_val_4_11 * fpu_val_7_55 - item_18_5 * fpu_val_5_12)) * param_2[1];
            long double f1_1 = 0.0f;
            fpu_val_7_60 - f1_1;

            if (*(&((fpu_val_7_60 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_60, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_60 == f1_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
                Env_ActivateEntity_11(entity_15, source_10, dest_6);
                temp_4 = param_3;
            }

            uint32_t data_14 = context + 1;
            context = data_14;

            if (data_14 >= *source_1)
                break;

            entity_12 = source_1;
        }
    }

    uint32_t data_15;
    data_15 = data_1->sprite[4];
    *(&data_15 + 1) = data_1->sprite[5];
    *(&data_15 + 2) = data_1->sprite[6];
    *(&data_15 + 3) = data_1->sprite[7];
    *(data_1 + 0x2b040) = Display_RestoreDevice_18(Level_StartMission_4(), nullptr, temp_4, param_4,
        &data_1->head[0x5df0], data_15, 0, 1, 0, nullptr, 0);
    return Env_GlassCrush1(param_3);
}

// IGI native provenance: StationaryGun_Update - 0x00474F60 - CFG score 85.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 00474F60-StationaryGun_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "StationaryGun_Update.h"
void* StationaryGun_Update(double* context, int32_t* param_2)

{
    float* data_val = param_2[1];
    double item_30 = data_val[2] * context[0x28] + data_val[1] * context[0x27] + *data_val * context[0x26];
    double item_28 = data_val[5] * context[0x28] + data_val[4] * context[0x27] + data_val[3] * context[0x26];
    double item_20 = data_val[8] * context[0x28] + data_val[7] * context[0x27] + data_val[6] * context[0x26];
    memcpy(&context[0x1e], &item_30, 0x18);
    context[0x1e] = **param_2 + context[0x1e];
    context[0x1f] = *(*param_2 + 8) + context[0x1f];
    context[0x20] = *(*param_2 + 0x10) + context[0x20];
    float* data_3 = param_2[1];
    item_30 = *data_3 * context[0x29] + data_3[2] * context[0x2c] + data_3[1] * *(context + 0x154);
    *(&item_30 + 4) = *data_3 * *(context + 0x14c) + data_3[2] * *(context + 0x164) + data_3[1] * context[0x2b];
    item_28 = *data_3 * context[0x2a] + data_3[2] * context[0x2d] + data_3[1] * *(context + 0x15c);
    *(&item_28 + 4) = data_3[5] * context[0x2c] + data_3[3] * context[0x29] + data_3[4] * *(context + 0x154);
    item_20 = data_3[5] * *(context + 0x164) + data_3[3] * *(context + 0x14c) + data_3[4] * context[0x2b];
    *(&item_20 + 4) = data_3[5] * context[0x2d] + data_3[3] * context[0x2a] + data_3[4] * *(context + 0x15c);
    float item_18 = data_3[8] * context[0x2c] + data_3[6] * context[0x29] + data_3[7] * *(context + 0x154);
    float item_14 = data_3[8] * *(context + 0x164) + data_3[6] * *(context + 0x14c) + data_3[7] * context[0x2b];
    int32_t item_c = data_3[9] + *(context + 0x16c) + 1;
    float item_10 = data_3[8] * context[0x2d] + data_3[6] * context[0x2a] + data_3[7] * *(context + 0x15c);
    long double fpu_val_7_54 = *(context + 0x9c);
    long double fpu_val_6_48 = context[0x14];
    fpu_val_6_48 - fpu_val_7_54;
    memcpy(&context[0x21], &item_30, 0x28);
    long double fpu_val_7_55;

    if (!(*(&((fpu_val_6_48 < fpu_val_7_54 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_48, fpu_val_7_54) ? 1 : 0) << 0xa
            | (fpu_val_6_48 == fpu_val_7_54 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_55 = context[0x14];
    else
        fpu_val_7_55 = *(context + 0x9c);

    long double fpu_val_6_49 = context[0x13];
    fpu_val_6_49 - fpu_val_7_55;
    long double fpu_val_7_57;

    if (*(&((fpu_val_6_49 < fpu_val_7_55 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_49, fpu_val_7_55) ? 1 : 0) << 0xa
        | (fpu_val_6_49 == fpu_val_7_55 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_58 = *(context + 0x9c);
        long double fpu_val_6_50 = context[0x14];
        fpu_val_6_50 - fpu_val_7_58;

        if (!(*(&((fpu_val_6_50 < fpu_val_7_58 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_50, fpu_val_7_58) ? 1 : 0) << 0xa
                | (fpu_val_6_50 == fpu_val_7_58 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_57 = context[0x14];
        else
            fpu_val_7_57 = *(context + 0x9c);
    }
    else
        fpu_val_7_57 = context[0x13];

    float item_4c_1 = Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_57;
    void* item_58 = context[0xd];
    WorldObject_CommitTransform(item_58, context, &context[0x1e], item_4c_1);
    void* item_5c = &context[0xe];
    memcpy(&context[0xe], &context[0x21], 0x28);
    Weapon_ComputeAccuracy_3(context);
    void* item_38 = &context[0x1e];
    void* result = &context[0x21];
    int32_t* i_1 = context[1];
    void* result_1 = result;

    if (*i_1)
    {
        int32_t* i = i_1;

        if (i)
        {
            int32_t entity_3 = g_afa7e0;

            do
            {
                int32_t* temp_3 = *i;
                void* data_13;

                if (!temp_3)
                    data_13 = nullptr;
                else
                {
                    int32_t data_10 = *temp_3;
                    int32_t data_11 = -(data_10);
                    data_13 = (data_11 - data_11) & temp_3;
                }

                *((entity_3 << 2) + &g_afa6e0) = data_13;
                g_afa7e0 = entity_3 + 1;
                uint32_t data_15 = DynObj_CreateMagicObject_6();
                int32_t temp_4 = 0;
                temp_4 = i[7];
                result = *(((data_15 * 0x180 + temp_4) << 2) + &g_a96ae0);

                if (result)
                    result = result(i, &item_38);

                entity_3 = g_afa7e0 - 1;
                g_afa7e0 = entity_3;
                i = *((entity_3 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}

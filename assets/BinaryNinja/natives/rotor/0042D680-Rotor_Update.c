// IGI native provenance: Rotor_Update - 0x0042D680 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042D680-Rotor_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Rotor_Update.h"
void* Rotor_Update(void* context, float param_2)

{
    int32_t* flagP = param_2;
    float* data_val = flagP[1];
    double item_40 = data_val[2] * *(context + 0x100) + data_val[1] * *(context + 0xf8) + *data_val * *(context + 0xf0);
    double item_38 = data_val[5] * *(context + 0x100) + data_val[4] * *(context + 0xf8) + data_val[3] * *(context + 0xf0);
    double* data_1 = *flagP;
    double item_30 = data_val[8] * *(context + 0x100) + data_val[7] * *(context + 0xf8) + data_val[6] * *(context + 0xf0);
    long double fpu_val_7_12 = item_40;
    double item_18;
    memcpy(&item_18, &item_40, 0x18);
    item_18 = fpu_val_7_12 + *data_1;
    double item_10;
    double item_10_1 = item_10 + data_1[1];
    double item_8;
    double item_8_1 = item_8 + data_1[2];
    long double fpu_val_7_18 = *(context + 0x9c);
    long double fpu_val_6_12 = *(context + 0xa0);
    fpu_val_6_12 - fpu_val_7_18;
    long double fpu_val_7_19;

    if (!(*(&((fpu_val_6_12 < fpu_val_7_18 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_12, fpu_val_7_18) ? 1 : 0) << 0xa
            | (fpu_val_6_12 == fpu_val_7_18 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_19 = *(context + 0xa0);
    else
        fpu_val_7_19 = *(context + 0x9c);

    long double fpu_val_6_13 = *(context + 0x98);
    fpu_val_6_13 - fpu_val_7_19;
    long double fpu_val_7_21;

    if (*(&((fpu_val_6_13 < fpu_val_7_19 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_13, fpu_val_7_19) ? 1 : 0) << 0xa
        | (fpu_val_6_13 == fpu_val_7_19 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_22 = *(context + 0x9c);
        long double fpu_val_6_14 = *(context + 0xa0);
        fpu_val_6_14 - fpu_val_7_22;

        if (!(*(&((fpu_val_6_14 < fpu_val_7_22 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_14, fpu_val_7_22) ? 1 : 0) << 0xa
                | (fpu_val_6_14 == fpu_val_7_22 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_21 = *(context + 0xa0);
        else
            fpu_val_7_21 = *(context + 0x9c);
    }
    else
        fpu_val_7_21 = *(context + 0x98);

    float item_54_1 = Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_21;
    double* i_1 = &item_18;
    WorldObject_CommitTransform(Level_StartMission_4(), context, i_1, item_54_1);
    float* data_5 = flagP[1];
    item_40 = *(context + 0x120) * data_5[2] + *(context + 0x108) * *data_5 + data_5[1] * *(context + 0x114);
    *(&item_40 + 4) =
        *(context + 0x124) * data_5[2] + *(context + 0x10c) * *data_5 + data_5[1] * *(context + 0x118);
    item_38 = *(context + 0x128) * data_5[2] + *(context + 0x110) * *data_5 + data_5[1] * *(context + 0x11c);
    *(&item_38 + 4) =
        data_5[4] * *(context + 0x114) + *(context + 0x120) * data_5[5] + *(context + 0x108) * data_5[3];
    item_30 = data_5[4] * *(context + 0x118) + *(context + 0x124) * data_5[5] + *(context + 0x10c) * data_5[3];
    *(&item_30 + 4) =
        data_5[4] * *(context + 0x11c) + *(context + 0x128) * data_5[5] + *(context + 0x110) * data_5[3];
    float item_28 =
        data_5[7] * *(context + 0x114) + *(context + 0x120) * data_5[8] + *(context + 0x108) * data_5[6];
    float item_24 =
        data_5[7] * *(context + 0x118) + *(context + 0x124) * data_5[8] + *(context + 0x10c) * data_5[6];
    void* result = context + 0x70;
    int32_t item_1c = data_5[9] + *(context + 0x12c) + 1;
    float item_20 =
        data_5[7] * *(context + 0x11c) + *(context + 0x128) * data_5[8] + *(context + 0x110) * data_5[6];
    memcpy(result, &item_40, 0x28);
    double* i = *(context + 8);
    void* result_1 = *i;

    if (result_1 && i)
    {
        *(&item_40 + 4) = result;
        result = result_1;
        item_40 = context + 0x20;

        if (result && i)
        {
            int32_t entity_1 = g_afa7e0;

            do
            {
                int32_t* temp_1 = *i;
                void* data_10;

                if (!temp_1)
                    data_10 = nullptr;
                else
                {
                    int32_t data_7 = *temp_1;
                    int32_t data_8 = -(data_7);
                    data_10 = (data_8 - data_8) & temp_1;
                }

                *((entity_1 << 2) + &g_afa6e0) = data_10;
                g_afa7e0 = entity_1 + 1;
                uint32_t data_12 = MagicObj_GetEventId();
                int32_t data_13 = 0;
                data_13 = *(i + 0x1c);
                result = *(((data_12 * 0x180 + data_13) << 2) + &g_a96ae0);

                if (result)
                {
                    double* item_54_2 = &item_40;
                    i_1 = i;
                    result = result(i_1, item_54_2);
                }

                entity_1 = g_afa7e0 - 1;
                g_afa7e0 = entity_1;
                i = *((entity_1 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}

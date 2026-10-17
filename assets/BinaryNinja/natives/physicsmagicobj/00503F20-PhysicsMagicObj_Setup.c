// IGI native provenance: PhysicsMagicObj_Setup - 0x00503F20 - CFG score 86.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 00503F20-PhysicsMagicObj_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsMagicObj_Setup.h"
void* PhysicsMagicObj_Setup(void* context, float param_2)

{
    int32_t* flagP = param_2;
    float* data_val = flagP[1];
    double item_40 = data_val[2] * *(context + 0x730) + data_val[1] * *(context + 0x728) + *data_val * *(context + 0x720);
    double item_38 = data_val[5] * *(context + 0x730) + data_val[4] * *(context + 0x728) + data_val[3] * *(context + 0x720);
    double* data_1 = *flagP;
    double item_30 = data_val[8] * *(context + 0x730) + data_val[7] * *(context + 0x728) + data_val[6] * *(context + 0x720);
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

    long double fpu_val_7_24 = Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_21;
    void* temp_val = *(context + 0x68);
    float item_54_1 = fpu_val_7_24;
    double* i_1 = &item_18;
    WorldObject_CommitTransform(temp_val, context, i_1, item_54_1);
    float* data_4 = flagP[1];
    item_40 = *(context + 0x744) * data_4[1] + *data_4 * *(context + 0x738) + data_4[2] * *(context + 0x750);
    *(&item_40 + 4) =
        *(context + 0x748) * data_4[1] + *data_4 * *(context + 0x73c) + data_4[2] * *(context + 0x754);
    item_38 = *(context + 0x74c) * data_4[1] + *data_4 * *(context + 0x740) + data_4[2] * *(context + 0x758);
    *(&item_38 + 4) =
        *(context + 0x744) * data_4[4] + data_4[5] * *(context + 0x750) + data_4[3] * *(context + 0x738);
    item_30 = *(context + 0x748) * data_4[4] + data_4[5] * *(context + 0x754) + data_4[3] * *(context + 0x73c);
    *(&item_30 + 4) =
        *(context + 0x74c) * data_4[4] + data_4[5] * *(context + 0x758) + data_4[3] * *(context + 0x740);
    float item_28 =
        *(context + 0x744) * data_4[7] + data_4[8] * *(context + 0x750) + data_4[6] * *(context + 0x738);
    float item_24 =
        *(context + 0x748) * data_4[7] + data_4[8] * *(context + 0x754) + data_4[6] * *(context + 0x73c);
    void* result = context + 0x70;
    float item_20 =
        *(context + 0x74c) * data_4[7] + data_4[8] * *(context + 0x758) + data_4[6] * *(context + 0x740);
    int32_t item_1c = data_4[9] + *(context + 0x75c) + 1;
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
                int32_t* temp_2 = *i;
                void* data_9;

                if (!temp_2)
                    data_9 = nullptr;
                else
                {
                    int32_t data_6 = *temp_2;
                    int32_t data_7 = -(data_6);
                    data_9 = (data_7 - data_7) & temp_2;
                }

                *((entity_1 << 2) + &g_afa6e0) = data_9;
                g_afa7e0 = entity_1 + 1;
                uint32_t data_11 = MagicObj_GetEventId();
                int32_t entity_3 = 0;
                entity_3 = *(i + 0x1c);
                result = *(((data_11 * 0x180 + entity_3) << 2) + &g_a96ae0);

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

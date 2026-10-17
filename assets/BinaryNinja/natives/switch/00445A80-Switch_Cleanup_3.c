// Original IGI.EXE function: Switch_Cleanup_3 (VA 0x00445A80; static CFG gate FAIL, CFG score 0.833).
#include "Switch_Cleanup_3.h"
void* Switch_Cleanup_3(void* context, int32_t* param_2)

{
    float* data_val = param_2[1];
    double item_30 = data_val[2] * *(context + 0x140) + data_val[1] * *(context + 0x138) + *data_val * *(context + 0x130);
    double item_28 = data_val[5] * *(context + 0x140) + data_val[4] * *(context + 0x138) + data_val[3] * *(context + 0x130);
    double item_20 = data_val[8] * *(context + 0x140) + data_val[7] * *(context + 0x138) + data_val[6] * *(context + 0x130);
    memcpy(context + 0xf0, &item_30, 0x18);
    *(context + 0xf0) = **param_2 + *(context + 0xf0);
    *(context + 0xf8) = *(*param_2 + 8) + *(context + 0xf8);
    *(context + 0x100) = *(*param_2 + 0x10) + *(context + 0x100);
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

    float item_4c_1 = Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_21;
    void* item_58 = *(context + 0x68);
    WorldObject_CommitTransform(item_58, context, context + 0xf0, item_4c_1);
    float* data_6 = param_2[1];
    item_30 = *data_6 * *(context + 0x148) + data_6[1] * *(context + 0x154) + *(context + 0x160) * data_6[2];
    *(&item_30 + 4) =
        *data_6 * *(context + 0x14c) + data_6[1] * *(context + 0x158) + *(context + 0x164) * data_6[2];
    item_28 = *data_6 * *(context + 0x150) + data_6[1] * *(context + 0x15c) + *(context + 0x168) * data_6[2];
    *(&item_28 + 4) =
        data_6[5] * *(context + 0x160) + data_6[3] * *(context + 0x148) + data_6[4] * *(context + 0x154);
    item_20 = data_6[5] * *(context + 0x164) + data_6[3] * *(context + 0x14c) + data_6[4] * *(context + 0x158);
    *(&item_20 + 4) =
        data_6[5] * *(context + 0x168) + data_6[3] * *(context + 0x150) + data_6[4] * *(context + 0x15c);
    float item_18 =
        data_6[8] * *(context + 0x160) + data_6[6] * *(context + 0x148) + data_6[7] * *(context + 0x154);
    float item_14 =
        data_6[8] * *(context + 0x164) + data_6[6] * *(context + 0x14c) + data_6[7] * *(context + 0x158);
    void* result = context + 0x108;
    int32_t item_c = data_6[9] + *(context + 0x16c) + 1;
    float item_10 =
        data_6[8] * *(context + 0x168) + data_6[6] * *(context + 0x150) + data_6[7] * *(context + 0x15c);
    void* result_1 = result;
    memcpy(result, &item_30, 0x28);
    memcpy(context + 0x70, &item_30, 0x28);
    int32_t* i_1 = *(context + 8);
    void* item_38 = context + 0xf0;

    if (*i_1)
    {
        int32_t* i = i_1;

        if (i)
        {
            int32_t entity_5 = g_afa7e0;

            do
            {
                int32_t* temp_3 = *i;
                void* data_11;

                if (!temp_3)
                    data_11 = nullptr;
                else
                {
                    int32_t data_8 = *temp_3;
                    int32_t data_9 = -(data_8);
                    data_11 = (data_9 - data_9) & temp_3;
                }

                *((entity_5 << 2) + &g_afa6e0) = data_11;
                g_afa7e0 = entity_5 + 1;
                uint32_t data_13 = DynObj_CreateMagicObject_6();
                int32_t data_14 = 0;
                data_14 = i[7];
                result = *(((data_13 * 0x180 + data_14) << 2) + &g_a96ae0);

                if (result)
                    result = result(i, &item_38);

                entity_5 = g_afa7e0 - 1;
                g_afa7e0 = entity_5;
                i = *((entity_5 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}

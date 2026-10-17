// IGI native provenance: EditRigidObj_OnEvent - 0x004F2400 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004F2400-EditRigidObj_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "EditRigidObj_OnEvent.h"
int32_t EditRigidObj_OnEvent(void* context, int32_t* param_2)

{
    float* data_val = param_2[1];
    double item_30 = data_val[2] * *(context + 0x168) + data_val[1] * *(context + 0x160) + *data_val * *(context + 0x158);
    double item_28 = data_val[5] * *(context + 0x168) + data_val[4] * *(context + 0x160) + data_val[3] * *(context + 0x158);
    double item_20 = data_val[8] * *(context + 0x168) + data_val[7] * *(context + 0x160) + data_val[6] * *(context + 0x158);
    memcpy(context + 0xf0, &item_30, 0x18);
    *(context + 0xf0) = **param_2 + *(context + 0xf0);
    *(context + 0xf8) = *(*param_2 + 8) + *(context + 0xf8);
    *(context + 0x100) = *(*param_2 + 0x10) + *(context + 0x100);
    float* data_3 = param_2[1];
    item_30 = *(context + 0x170) * *data_3 + data_3[2] * *(context + 0x188) + data_3[1] * *(context + 0x17c);
    *(&item_30 + 4) =
        *(context + 0x174) * *data_3 + data_3[2] * *(context + 0x18c) + data_3[1] * *(context + 0x180);
    item_28 = *(context + 0x178) * *data_3 + data_3[2] * *(context + 0x190) + data_3[1] * *(context + 0x184);
    *(&item_28 + 4) =
        data_3[5] * *(context + 0x188) + data_3[3] * *(context + 0x170) + data_3[4] * *(context + 0x17c);
    item_20 = data_3[5] * *(context + 0x18c) + data_3[3] * *(context + 0x174) + data_3[4] * *(context + 0x180);
    *(&item_20 + 4) =
        data_3[5] * *(context + 0x190) + data_3[3] * *(context + 0x178) + data_3[4] * *(context + 0x184);
    float item_18 =
        data_3[8] * *(context + 0x188) + data_3[6] * *(context + 0x170) + data_3[7] * *(context + 0x17c);
    float item_14 =
        data_3[8] * *(context + 0x18c) + data_3[6] * *(context + 0x174) + data_3[7] * *(context + 0x180);
    int32_t item_c = data_3[9] + *(context + 0x194) + 1;
    float item_10 =
        data_3[8] * *(context + 0x190) + data_3[6] * *(context + 0x178) + data_3[7] * *(context + 0x184);
    long double fpu_val_7_54 = *(context + 0x9c);
    long double fpu_val_6_48 = *(context + 0xa0);
    fpu_val_6_48 - fpu_val_7_54;
    memcpy(context + 0x108, &item_30, 0x28);
    long double fpu_val_7_55;

    if (!(*(&((fpu_val_6_48 < fpu_val_7_54 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_48, fpu_val_7_54) ? 1 : 0) << 0xa
            | (fpu_val_6_48 == fpu_val_7_54 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_55 = *(context + 0xa0);
    else
        fpu_val_7_55 = *(context + 0x9c);

    long double fpu_val_6_49 = *(context + 0x98);
    fpu_val_6_49 - fpu_val_7_55;
    long double fpu_val_7_57;

    if (*(&((fpu_val_6_49 < fpu_val_7_55 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_49, fpu_val_7_55) ? 1 : 0) << 0xa
        | (fpu_val_6_49 == fpu_val_7_55 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_58 = *(context + 0x9c);
        long double fpu_val_6_50 = *(context + 0xa0);
        fpu_val_6_50 - fpu_val_7_58;

        if (!(*(&((fpu_val_6_50 < fpu_val_7_58 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_50, fpu_val_7_58) ? 1 : 0) << 0xa
                | (fpu_val_6_50 == fpu_val_7_58 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_57 = *(context + 0xa0);
        else
            fpu_val_7_57 = *(context + 0x9c);
    }
    else
        fpu_val_7_57 = *(context + 0x98);

    float item_4c_1 = Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_57;
    void* item_58 = *(context + 0x68);
    WorldObject_CommitTransform(item_58, context, context + 0xf0, item_4c_1);
    memcpy(context + 0x70, context + 0x108, 0x28);
    int32_t* i_1 = *(context + 8);
    void* item_38 = context + 0xf0;
    void* item_34 = context + 0x108;
    int32_t result = *i_1;

    if (result)
    {
        int32_t* i = i_1;

        if (i)
        {
            int32_t entity_4 = g_afa7e0;

            do
            {
                int32_t* temp_3 = *i;
                void* data_12;

                if (!temp_3)
                    data_12 = nullptr;
                else
                {
                    int32_t data_9 = *temp_3;
                    int32_t data_10 = -(data_9);
                    data_12 = (data_10 - data_10) & temp_3;
                }

                *((entity_4 << 2) + &g_afa6e0) = data_12;
                g_afa7e0 = entity_4 + 1;
                uint32_t data_14 = DynObj_CreateMagicObject_6();
                int32_t temp_4 = 0;
                temp_4 = i[7];
                result = *(((data_14 * 0x180 + temp_4) << 2) + &g_a96ae0);

                if (result)
                    result = result(i, &item_38);

                entity_4 = g_afa7e0 - 1;
                g_afa7e0 = entity_4;
                i = *((entity_4 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}

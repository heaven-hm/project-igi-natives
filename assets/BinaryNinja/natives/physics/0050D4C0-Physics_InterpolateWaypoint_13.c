// IGI native provenance: Physics_InterpolateWaypoint_13 - 0x0050D4C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0050D4C0-Physics_InterpolateWaypoint_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_InterpolateWaypoint_13.h"
int32_t** Physics_InterpolateWaypoint_13(int32_t* context)

{
    int32_t* dest_val = context;
    int32_t data_val = dest_val[1];
    int32_t** result;
    int32_t* source_val;

    if (!(data_val & 0x60000) || !g_a84a4c || data_val & 0x40000000)
    {
        result = nullptr;

        if (dest_val[2] >= 0)
            source_val = Display_CloseDevice_14(dest_val[3] * 0x1c + 0x28);
        else
            source_val = &g_a7cedc;
    }
    else
    {
        result = 1;
        source_val = Sys_AllocateMemory_19(Physics_EvaluateAreaCriteria_13, dest_val[3] * 0x1c + 0x28, *(dest_val[4] + 8));
    }

    if (source_val)
    {
        source_val[1] = g_54e890;
        source_val[3] = g_a84a50;
        source_val[4] = g_a84a58;
        source_val[5] = dest_val[1];
        source_val[7] = dest_val[3];
        source_val[8] = *dest_val;
        long double fpu_val_7_2 = *(dest_val[4] + 0x14) * 255.0f;
        source_val[9] = &source_val[0xa];
        int32_t item_14_1 = 0;
        source_val[6] = fpu_val_7_2;

        if (source_val[7] > 0)
        {
            int32_t item_18_1 = 0;
            void* context_1 = nullptr;
            bool flag_0_1;

            do
            {
                float* entity_9 = context_1 + dest_val[4];
                float* temp_9 = source_val[9] + item_18_1;
                *temp_9 = *entity_9 - 0.5f;
                temp_9[1] = entity_9[1] - 0.5f;
                long double fpu_val_7_7 = entity_9[2];
                long double f0_1 = 0.0f;
                fpu_val_7_7 - f0_1;

                if (*(&((fpu_val_7_7 < f0_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_7, f0_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_7 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41 || !g_6e5bb0)
                {
                    temp_9[2] = 0x3f000000;
                    temp_9[3] = 1.0f / ((g_bcadc8 - g_bcada0) * 0.5f);
                }
                else
                {
                    long double fpu_val_7_9 = g_bcada0 * 1.00999999f;
                    context = g_bcabec * entity_9[2];
                    long double f1_1 = context;
                    fpu_val_7_9 - f1_1;

                    if (*(&((fpu_val_7_9 < f1_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_9, f1_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_9 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                    {
                        long double fpu_val_7_11 = g_bcadc8;
                        long double f2_1 = context;
                        fpu_val_7_11 - f2_1;

                        if (!(*(&((fpu_val_7_11 < f2_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_11, f2_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_11 == f2_1 ? 1 : 0) << 0xe) + 1) & 1))
                            fpu_val_7_9 = context;
                        else
                            fpu_val_7_9 = g_bcadc8;
                    }

                    long double fpu_val_7_12 = 1.0f / fpu_val_7_9;
                    temp_9[3] = fpu_val_7_12;
                    long double fpu_val_7_15 = (1.0f - fpu_val_7_12 * g_bcada0) * g_bcab6c;
                    temp_9[2] = fpu_val_7_15;
                    temp_9[2] = (g_bcad8c - g_bcadb4) * fpu_val_7_15 + g_bcadb4;
                }

                int32_t data_15 = source_val[5];
                long double fpu_val_7_21 = entity_9[5];

                if (data_15 & 4)
                    fpu_val_7_21 = 0.5f;
                else if (data_15 & 0x20)
                    fpu_val_7_21 = 0.25f;

                int32_t data_21;
                int32_t flagP3;

                if (!(data_15 & 0x10880024))
                {
                    flagP3 = (((0xff00 - entity_9[6] * -255.0f) << 8) - entity_9[7] * -255.0f) << 8;
                    data_21 = entity_9[8] * -255.0f;
                }
                else
                {
                    data_21 = (((((fpu_val_7_21 * -255.0f) << 8) + entity_9[6] * -255.0f) << 8)
                        + entity_9[7] * -255.0f) << 8;
                    flagP3 = entity_9[8] * 255.0f;
                }

                temp_9[4] = flagP3 - data_21;
                void* data_24 = source_val[3];

                if (data_24)
                {
                    temp_9[5] = *(data_24 + 0x10) * entity_9[3] + 0.0009765625f;
                    temp_9[6] = *(source_val[3] + 0x14) * entity_9[4] + 0.0009765625f;
                }

                context_1 += 0x24;
                flag_0_1 = item_14_1 + 1 < source_val[7];
                item_14_1 += 1;
                item_18_1 += 0x1c;
            } while (flag_0_1);
        }
    }

    if (result)
        return result;

    int32_t data_28 = dest_val[2];

    if (data_28 >= 0)
        return Display_ClearSurfaces_14(data_28, source_val);

    return Display_SyncVSync_14(source_val);
}

// IGI native provenance: Script_ParseEnumInt32_18 - 0x004F5400 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F5400-Script_ParseEnumInt32_18.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_ParseEnumInt32_18.h"
int32_t* Script_ParseEnumInt32_18(void* context)

{
    char i = 0;
    int32_t* result_1 = nullptr;
    long double fpu7 = *(context + 0x64);
    int32_t source_val = 0xffffffff;
    char item_33c = 0;
    float item_344 = 0.0f;
    float item_340 = fpu7 / g_a76c54;
    int32_t* result = QTask_DeleteTask_2(context, Physics_CalculateSplineLength_7());

    if (result)
    {
        void item_320;
        Script_EvaluateCondition_17(&item_320, &result_1, QTask_DeleteTask_2(context, Physics_CalculateSplineLength_7()), &item_344,
            *(context + 0x6c));
        result = result_1;

        if (result)
        {
            Script_SpawnNewTask_18(&item_320, result);
            int32_t* result_3 = result_1;
            int32_t entity_1 = 0;

            if (result_3 > 0)
            {
                void item_31c;
                float* flagP1 = &item_31c;

                while (!i)
                {
                    long double fpu_val_7_2 = *flagP1;
                    long double f1_1 = item_340;
                    fpu_val_7_2 - f1_1;

                    if (!(*(&((fpu_val_7_2 < f1_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_2, f1_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_2 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                        i = 1;
                    else
                        source_val = entity_1;

                    entity_1 += 1;
                    flagP1 = &flagP1[2];

                    if (entity_1 >= result_3)
                        break;
                }
            }

            long double fpu_val_7_3 = item_340;
            long double f0_1 = item_344;
            fpu_val_7_3 - f0_1;

            if (!(*(&((fpu_val_7_3 < f0_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_3, f0_1) ? 1 : 0) << 0xa
                | (fpu_val_7_3 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                *(context + 0x61) = 1;
                long double fpu_val_7_4 = g_a76c54;
                *(context + 0x20c) = 0xffffffff;
                *(context + 0x64) = fpu_val_7_4 * item_344;
            }

            if (*(context + 0x20c) != source_val)
            {
                *(context + 0x20c) = source_val;
                item_33c = 1;
            }

            void* item_360_3 = &item_320;
            int32_t* item_338 = Script_FormatString_17(item_360_3, result_3, source_val - 1);
            int32_t* result_2 = result_1;
            int32_t* data_9 = Script_FormatString_17(&item_320, result_2, source_val);
            int32_t* data_11 = Script_FormatString_17(&item_320, result_1, source_val + 1);
            int32_t item_32c_1 = Script_FormatString_17(&item_320, result_1, source_val + 2);
            int32_t* data_14 = data_9;

            if (!*(*item_338 + 0x94))
                item_338 = data_14;

            if (*(*data_14 + 0x94))
                data_14 = data_11;
            else
                int32_t* item_330_2 = data_14;

            if (!*(*data_14 + 0x94))
                int32_t* item_32c_2 = data_14;

            int32_t saved_ebp_4 = item_33c;
            item_360_3 = item_344;
            result_2 = item_340;
            return CutScene_ApplyFrame(context, &item_338, result_2);
        }
    }

    return result;
}

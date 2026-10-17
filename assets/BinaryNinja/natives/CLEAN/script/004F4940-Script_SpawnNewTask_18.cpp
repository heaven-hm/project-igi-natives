// IGI native provenance: Script_SpawnNewTask_18 - 0x004F4940 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F4940-Script_SpawnNewTask_18.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_SpawnNewTask_18.h"
void* Script_SpawnNewTask_18(float context, void* param_2)

{
    int32_t* entity_val = context;
    void* data_val = *entity_val;
    context = *(data_val + 0x3c);
    float item_8 = *(data_val + 0x40);
    float item_4 = *(data_val + 0x44);
    void* result = param_2;

    if (result > 1)
    {
        int32_t* entity_1 = &entity_val[2];
        void* i_1 = result - 1;
        void* i;

        do
        {
            void* data_2 = *entity_1;
            long double fpu_val_7_2 = *(data_2 + 0x3c) - context;
            float* temp_2 = data_2 + 0x3c;
            long double f0_1 = 3.1415926535897944;
            fpu_val_7_2 - f0_1;

            if (!(*(&((fpu_val_7_2 < f0_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_2, f0_1) ? 1 : 0) << 0xa
                | (fpu_val_7_2 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double fpu_val_7_6;
                long double f2_1;

                do
                {
                    *temp_2 = *temp_2 - 6.28318548f;
                    void* data_4 = *entity_1;
                    fpu_val_7_6 = *(data_4 + 0x3c) - context;
                    temp_2 = data_4 + 0x3c;
                    f2_1 = 3.1415926535897944;
                    fpu_val_7_6 - f2_1;
                } while (!(*(&((fpu_val_7_6 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_6, f2_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_6 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41));
            }

            void* data_6 = *entity_1;
            long double fpu_val_7_8 = *(data_6 + 0x3c) - context;
            float* temp_3 = data_6 + 0x3c;
            long double f1_1 = -3.1415926535897944;
            fpu_val_7_8 - f1_1;

            if (*(&((fpu_val_7_8 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_8, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_8 == f1_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
                long double fpu_val_7_12;
                long double f4_1;

                do
                {
                    *temp_3 = *temp_3 + 6.28318548f;
                    void* data_8 = *entity_1;
                    fpu_val_7_12 = *(data_8 + 0x3c) - context;
                    temp_3 = data_8 + 0x3c;
                    f4_1 = -3.1415926535897944;
                    fpu_val_7_12 - f4_1;
                } while (*(&((fpu_val_7_12 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_12, f4_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_12 == f4_1 ? 1 : 0) << 0xe) + 1) & 1);
            }

            void* data_10 = *entity_1;
            long double fpu_val_7_14 = *(data_10 + 0x40) - item_8;
            context = *(data_10 + 0x3c);
            float* temp_5 = data_10 + 0x40;
            long double f3_1 = 3.1415926535897944;
            fpu_val_7_14 - f3_1;

            if (!(*(&((fpu_val_7_14 < f3_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_14, f3_1) ? 1 : 0) << 0xa
                | (fpu_val_7_14 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double fpu_val_7_18;
                long double f6_1;

                do
                {
                    *temp_5 = *temp_5 - 6.28318548f;
                    void* data_12 = *entity_1;
                    fpu_val_7_18 = *(data_12 + 0x40) - item_8;
                    temp_5 = data_12 + 0x40;
                    f6_1 = 3.1415926535897944;
                    fpu_val_7_18 - f6_1;
                } while (!(*(&((fpu_val_7_18 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_18, f6_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_18 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x41));
            }

            void* data_14 = *entity_1;
            long double fpu_val_7_20 = *(data_14 + 0x40) - item_8;
            float* temp_6 = data_14 + 0x40;
            long double f5_1 = -3.1415926535897944;
            fpu_val_7_20 - f5_1;

            if (*(&((fpu_val_7_20 < f5_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_20, f5_1) ? 1 : 0) << 0xa
                | (fpu_val_7_20 == f5_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
                long double fpu_val_7_24;
                long double f8_1;

                do
                {
                    *temp_6 = *temp_6 + 6.28318548f;
                    void* data_16 = *entity_1;
                    fpu_val_7_24 = *(data_16 + 0x40) - item_8;
                    temp_6 = data_16 + 0x40;
                    f8_1 = -3.1415926535897944;
                    fpu_val_7_24 - f8_1;
                } while (*(&((fpu_val_7_24 < f8_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_24, f8_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_24 == f8_1 ? 1 : 0) << 0xe) + 1) & 1);
            }

            void* data_18 = *entity_1;
            long double fpu_val_7_26 = *(data_18 + 0x44) - item_4;
            item_8 = *(data_18 + 0x40);
            float* temp_8 = data_18 + 0x44;
            long double f7_1 = 3.1415926535897944;
            fpu_val_7_26 - f7_1;

            if (!(*(&((fpu_val_7_26 < f7_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_26, f7_1) ? 1 : 0) << 0xa
                | (fpu_val_7_26 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double fpu_val_7_30;
                long double f10_1;

                do
                {
                    *temp_8 = *temp_8 - 6.28318548f;
                    void* data_20 = *entity_1;
                    fpu_val_7_30 = *(data_20 + 0x44) - item_4;
                    temp_8 = data_20 + 0x44;
                    f10_1 = 3.1415926535897944;
                    fpu_val_7_30 - f10_1;
                } while (!(*(&((fpu_val_7_30 < f10_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_30, f10_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_30 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x41));
            }

            void* data_22 = *entity_1;
            long double fpu_val_7_32 = *(data_22 + 0x44) - item_4;
            float* temp_9 = data_22 + 0x44;
            long double f9_1 = -3.1415926535897944;
            fpu_val_7_32 - f9_1;

            if (*(&((fpu_val_7_32 < f9_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_32, f9_1) ? 1 : 0) << 0xa
                | (fpu_val_7_32 == f9_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
                long double fpu_val_7_36;
                long double f12_1;

                do
                {
                    *temp_9 = *temp_9 + 6.28318548f;
                    void* data_24 = *entity_1;
                    fpu_val_7_36 = *(data_24 + 0x44) - item_4;
                    temp_9 = data_24 + 0x44;
                    f12_1 = -3.1415926535897944;
                    fpu_val_7_36 - f12_1;
                } while (*(&((fpu_val_7_36 < f12_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_36, f12_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_36 == f12_1 ? 1 : 0) << 0xe) + 1) & 1);
            }

            result = *entity_1;
            entity_1 = &entity_1[2];
            i = i_1;
            i_1 -= 1;
            item_4 = *(result + 0x44);
        } while (i != 1);
    }

    return result;
}

// IGI native provenance: EditCamera_OnParsed - 0x00508410 - CFG score 91.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 00508410-EditCamera_OnParsed.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "EditCamera_OnParsed.h"
char* EditCamera_OnParsed(void* context, char* param_2)

{
    int32_t data_1 = Sys_CheckHeap_22(context + 0xa9);
    long double fpu7 = *(context + 0x88);
    long double f0 = 0.00100000005f;
    fpu7 - f0;
    *(context + 0xcc) = data_1;
    long double fpu_val_7_1;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double fpu_val_7_2 = *(context + 0x88);
        long double f1_1 = 3.0f;
        fpu_val_7_2 - f1_1;

        if (*(&((fpu_val_7_2 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_2 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            fpu_val_7_1 = *(context + 0x88);
        else
            fpu_val_7_1 = 3.0f;
    }
    else
        fpu_val_7_1 = 0.00100000005f;

    int32_t entity_val = *(context + 0x90);
    *(context + 0x88) = fpu_val_7_1;
    int32_t data_3 = Script_ExecuteLevelScript_4(entity_val);
    int32_t* i_1 = *(context + 0x8c);
    int32_t* i_2 = Script_ExecuteLevelScript_4(i_1);

    if (data_3 == context)
        *(context + 0x90) = 0xffffffff;

    memset(context + 0x48, 0, 0x18);
    *(context + 0x60) = 0x3f800000;
    *(context + 0x64) = 0;
    *(context + 0x68) = 0;
    *(context + 0x6c) = 0;
    *(context + 0x70) = 0x3f800000;
    *(context + 0x74) = 0;
    *(context + 0x78) = 0;
    *(context + 0x7c) = 0;
    *(context + 0x80) = 0x3f800000;
    *(context + 0x84) = 0;

    if (i_2)
    {
        int32_t data_4 = 0;
        data_4 = i_2[7];

        if (!*((data_4 << 2) + &g_a994e0))
            *(context + 0x8c) = 0xffffffff;
        else
        {
            uint32_t data_6 = Script_ParseEnumReal32_8();
            int32_t temp_1 = 0;
            temp_1 = i_2[7];
            int32_t data_7 = *(((data_6 * 0x180 + temp_1) << 2) + &g_a96ae0);
            i_1 = i_2;
            data_7(i_1, param_2);
            int32_t temp_2 = 0;
            temp_2 = i_2[7];
            int32_t item_8_1 = 0;
            void item_58;
            (*((temp_2 << 2) + &g_a994e0))(i_2, &item_58);
            memcpy(context + 0x48, &item_58, 0x18);
            void item_34;
            memcpy(context + 0x60, &item_34, 0x28);
        }
    }

    char* result = param_2;

    if (!result || !*result)
    {
        int32_t* i = *(context + 8);

        if (*i && i)
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
                uint32_t data_13 = Script_ParseEnumReal32_8();
                int32_t temp_4 = 0;
                temp_4 = i[7];
                result = *(((data_13 * 0x180 + temp_4) << 2) + &g_a96ae0);

                if (result)
                {
                    int32_t item_6c_3 = 0;
                    i_1 = i;
                    result = result(i_1, item_6c_3);
                }

                entity_5 = g_afa7e0 - 1;
                g_afa7e0 = entity_5;
                i = *((entity_5 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}

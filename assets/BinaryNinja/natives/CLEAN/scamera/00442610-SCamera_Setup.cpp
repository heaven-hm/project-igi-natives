// IGI native provenance: SCamera_Setup - 0x00442610 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00442610-SCamera_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SCamera_Setup.h"
int32_t* SCamera_Setup(long double context , void* param_2)

{
    int32_t* i = *(param_2 + 8);
    int32_t* data_val;

    if (*i && i)
    {
        int32_t temp_1 = g_afa7e0;

        do
        {
            int32_t* source_1 = *i;
            void* data_4;

            if (!source_1)
                data_4 = nullptr;
            else
            {
                int32_t data_1 = *source_1;
                int32_t data_2 = -(data_1);
                data_4 = (data_2 - data_2) & source_1;
            }

            *((temp_1 << 2) + &g_afa6e0) = data_4;
            int32_t temp_2 = temp_1 + 1;
            int32_t data_5 = 0;
            g_afa7e0 = temp_2;
            data_5 = i[7];
            data_val = *((data_5 << 2) + &g_a970e0);

            if (data_val)
            {
                data_val = data_val(i);
                temp_2 = g_afa7e0;
            }

            i = *((temp_2 << 2) + &g_afa6dc);
            temp_1 = temp_2 - 1;
            g_afa7e0 = temp_1;
        } while (i);
    }

    data_val = *(param_2 + 0x170);

    if (data_val)
        *(param_2 + 0x168) = 0;
    else
    {
        data_val = Script_FormatString_6(param_2 + 0x174);

        if (data_val)
        {
            int32_t data_6 = Script_SpawnNewTask_7(param_2 + 0x174, param_2);
            *(param_2 + 0x168) = context;
            return data_6;
        }
    }

    return data_val;
}

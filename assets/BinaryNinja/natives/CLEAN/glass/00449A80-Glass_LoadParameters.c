// IGI native provenance: Glass_LoadParameters - 0x00449A80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00449A80-Glass_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Glass_LoadParameters.h"
int32_t Glass_LoadParameters(int32_t* context)

{
    int32_t* i = context[2];
    int32_t result;

    if (*i && i)
    {
        int32_t temp_1 = g_afa7e0;

        do
        {
            int32_t* source_1 = *i;
            void* data_3;

            if (!source_1)
                data_3 = nullptr;
            else
            {
                int32_t data_val = *source_1;
                int32_t data_1 = -(data_val);
                data_3 = (data_1 - data_1) & source_1;
            }

            *((temp_1 << 2) + &g_afa6e0) = data_3;
            int32_t temp_2 = temp_1 + 1;
            int32_t data_4 = 0;
            g_afa7e0 = temp_2;
            data_4 = i[7];
            result = *((data_4 << 2) + &g_a970e0);

            if (result)
            {
                result = result(i);
                temp_2 = g_afa7e0;
            }

            i = *((temp_2 << 2) + &g_afa6dc);
            temp_1 = temp_2 - 1;
            g_afa7e0 = temp_1;
        } while (i);
    }

    result = context[0x51];

    if (!result)
        return result;

    return QTask_FindType(context);
}

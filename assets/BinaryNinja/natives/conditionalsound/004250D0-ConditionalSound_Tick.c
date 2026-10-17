// IGI native provenance: ConditionalSound_Tick - 0x004250D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004250D0-ConditionalSound_Tick.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ConditionalSound_Tick.h"
int32_t* ConditionalSound_Tick(long double context , void* param_2)

{
    if (Script_FormatString_6(param_2 + 0x20))
    {
        *(param_2 + 0xb1) = *(param_2 + 0xb0);
        Script_SpawnNewTask_7(param_2 + 0x20, param_2);
        *(param_2 + 0xb0) = context;
    }

    int32_t* result = Menu_DrawWidget_15(param_2);
    result = *(param_2 + 0xa9);

    if (!result)
    {
    label_42512e:
        result = *(param_2 + 0xb0);

        if (!result)
            result = ConditionalSound_Stop(param_2);
        else
        {
            result = *(param_2 + 0xb1);

            if (!result)
                result = ConditionalSound_Start(param_2);
        }

        int32_t* i = *(param_2 + 8);

        if (*i && i)
        {
            int32_t temp_1 = g_afa7e0;

            do
            {
                int32_t* source_1 = *i;
                void* data_5;

                if (!source_1)
                    data_5 = nullptr;
                else
                {
                    int32_t data_2 = *source_1;
                    int32_t data_3 = -(data_2);
                    data_5 = (data_3 - data_3) & source_1;
                }

                *((temp_1 << 2) + &g_afa6e0) = data_5;
                int32_t temp_2 = temp_1 + 1;
                int32_t data_6 = 0;
                g_afa7e0 = temp_2;
                data_6 = i[7];
                result = *((data_6 << 2) + &g_a970e0);

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
    }
    else
    {
        result = *(param_2 + 0x124);

        if (!result)
            goto label_42512e;
    }

    return result;
}

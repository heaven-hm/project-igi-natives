// Original IGI.EXE function: ExplodeObject_Setup (VA 0x00481970; static CFG gate PASS, CFG score 1.000).
#include "ExplodeObject_Setup.h"
void* ExplodeObject_Setup(long double context , double* param_2)

{
    int32_t* i = param_2[1];
    void* result;

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

    result = param_2[0x32];

    if (!result)
    {
        if (Script_FormatString_6(param_2 + 0x194))
        {
            Script_SpawnNewTask_7(param_2 + 0x194, param_2);
            *(param_2 + 0x1e4) = context;
        }

        if (*(param_2 + 0x1e4) || !*(param_2 + 0x1f4))
        {
            FX_1009011(param_2);
            result = DynObj_Missing(&param_2[0x30]);

            if (result)
                goto label_481a3c;
        }
        else
        {
        label_481a3c:
            result = *(param_2 + 0x1f4);

            if (result > 0)
            {
                result -= 1;
                *(param_2 + 0x1f4) = result;
            }
        }
    }

    return result;
}

// Original IGI.EXE function: SoundDefGroup_LoadParameters (VA 0x004EB3D0; static CFG gate PASS, CFG score 1.000).
#include "SoundDefGroup_LoadParameters.h"
int32_t* SoundDefGroup_LoadParameters(int32_t* context)

{
    int32_t* i = context[2];

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
            int32_t data_6 = *((data_5 << 2) + &g_a970e0);

            if (data_6)
            {
                data_6(i);
                temp_2 = g_afa7e0;
            }

            i = *((temp_2 << 2) + &g_afa6dc);
            temp_1 = temp_2 - 1;
            g_afa7e0 = temp_1;
        } while (i);
    }

    int32_t* result = context[2];

    if (!*result || !result)
    {
        result = context[8];

        if (!result)
            return QTask_FindType(context);
    }

    return result;
}

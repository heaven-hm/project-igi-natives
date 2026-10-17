// Original IGI.EXE function: SoundDefTriggerOnce_Setup (VA 0x004E9AA0; static CFG gate PASS, CFG score 1.000).
#include "SoundDefTriggerOnce_Setup.h"
int32_t SoundDefTriggerOnce_Setup(int32_t context)

{
    int32_t* source_val = context;

    if (source_val[0x49])
        return QTask_FindType(source_val);

    int32_t result;

    if (!*(source_val + 0x123))
        result = SoundSys_SetMasterVolume_14(source_val);
    else
    {
        SoundSys_SetMasterVolume_14(source_val);
        result = SoundSys_SetFrequency_4();
        source_val[0x4a] = 1.0f / result + source_val[0x4a];
    }

    int32_t* i = source_val[2];

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

    return result;
}

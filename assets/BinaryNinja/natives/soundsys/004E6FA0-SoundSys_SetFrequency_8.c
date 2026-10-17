// Original IGI.EXE function: SoundSys_SetFrequency_8 (VA 0x004E6FA0; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_SetFrequency_8.h"
void* SoundSys_SetFrequency_8(void* context)

{
    void* i = g_a5e5f4;

    if (i)
    {
        int32_t temp_1 = *(context + 4);

        do
        {
            if (*(i + 0x10) == temp_1 && *(i + 0x14) == *(context + 8))
            {
                void* data_val = *(i + 0x1c);

                if (data_val)
                    return Display_SyncVSync_11(data_val, temp_1, context, data_val);

                data_val = 1;
                return data_val;
            }

            i = *(i + 4);
        } while (i);
    }

    i = 0;
    return i;
}

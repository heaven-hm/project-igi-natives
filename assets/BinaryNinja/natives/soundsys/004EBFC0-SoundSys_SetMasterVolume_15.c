// Original IGI.EXE function: SoundSys_SetMasterVolume_15 (VA 0x004EBFC0; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_SetMasterVolume_15.h"
uint32_t SoundSys_SetMasterVolume_15()

{
    int32_t data_1 = g_a5ef84;
    int32_t dest_val = 0;

    if (data_1 > 0)
    {
        int32_t* source_1 = &g_a5ec88;

        do
        {
            void* data_val = *source_1;

            if (data_val)
            {
                Sys_ExecuteBytecode_2(data_val);
                *source_1 = 0;
            }

            data_1 = g_a5ef84;
            dest_val += 1;
            source_1 = &source_1[3];
        } while (dest_val < data_1);
    }

    data_1 = g_54db80;
    QTask_InitContext(data_1);
    char entity_val = g_54db81;
    g_54db80 = 0xff;
    QTask_InitContext(entity_val);
    char temp_val = g_54db82;
    g_54db81 = 0xff;
    uint32_t result = QTask_InitContext(temp_val);
    g_54db82 = 0xff;
    return result;
}

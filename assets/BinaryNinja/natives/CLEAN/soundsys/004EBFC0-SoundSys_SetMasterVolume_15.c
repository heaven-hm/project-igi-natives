// IGI native provenance: SoundSys_SetMasterVolume_15 - 0x004EBFC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EBFC0-SoundSys_SetMasterVolume_15.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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

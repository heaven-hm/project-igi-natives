// IGI native provenance: SoundSys_SetFrequency_8 - 0x004E6FA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E6FA0-SoundSys_SetFrequency_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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

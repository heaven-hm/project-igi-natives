// IGI native provenance: SoundSysMicrophone_Setup - 0x004EBCD0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EBCD0-SoundSysMicrophone_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSysMicrophone_Setup.h"
int32_t* SoundSysMicrophone_Setup(void* context)

{
    void* item_8 = context;
    char item_4 = 1;
    int32_t i = 0;
    int32_t* result = SoundSys_InitSoundSys_9();

    if (*result > 0)
    {
        int32_t source_1 = 8;

        do
        {
            int32_t entity_1 = 0;
            entity_1 = *(*(SoundSys_InitSoundSys_9() + source_1) + 0x1c);
            int32_t data_2 = 0;
            data_2 = g_54db6a;
            (*(((entity_1 + data_2 * 0x180) << 2) + &g_a96ae0))(*(SoundSys_InitSoundSys_9() + source_1), &item_8);
            i += 1;
            source_1 += 4;
            result = SoundSys_InitSoundSys_9();
        } while (i < *result);
    }

    int32_t* i_1 = *(context + 8);

    if (*i_1 && i_1)
    {
        int32_t temp_3 = g_afa7e0;

        do
        {
            int32_t* source_2 = *i_1;
            void* data_7;

            if (!source_2)
                data_7 = nullptr;
            else
            {
                int32_t data_4 = *source_2;
                int32_t data_5 = -(data_4);
                data_7 = (data_5 - data_5) & source_2;
            }

            *((temp_3 << 2) + &g_afa6e0) = data_7;
            int32_t temp_4 = temp_3 + 1;
            int32_t data_8 = 0;
            g_afa7e0 = temp_4;
            data_8 = i_1[7];
            result = *((data_8 << 2) + &g_a970e0);

            if (result)
            {
                result = result(i_1);
                temp_4 = g_afa7e0;
            }

            i_1 = *((temp_4 << 2) + &g_afa6dc);
            temp_3 = temp_4 - 1;
            g_afa7e0 = temp_3;
        } while (i_1);
    }

    return result;
}

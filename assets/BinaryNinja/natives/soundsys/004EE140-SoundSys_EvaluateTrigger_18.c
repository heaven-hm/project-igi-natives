// Original IGI.EXE function: SoundSys_EvaluateTrigger_18 (VA 0x004EE140; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_EvaluateTrigger_18.h"
void* SoundSys_EvaluateTrigger_18(char* context)

{
    int32_t flagP = 0;

    if (SoundSys_StopSoundSample_18() > 0)
    {
        while (true)
        {
            void* result = SoundSys_LoadSoundDef_18(flagP);
            char* source_1 = context;
            char* entity_1 = result + 0x138;
            int32_t entity_3;

            while (true)
            {
                char data_1 = *entity_1;
                char f0_1 = *source_1;
                bool c_1 = data_1 < f0_1;

                if (data_1 == f0_1)
                {
                    if (!data_1)
                    {
                        entity_3 = 0;
                        break;
                    }

                    data_1 = entity_1[1];
                    char f3_1 = source_1[1];
                    c_1 = data_1 < f3_1;

                    if (data_1 == f3_1)
                    {
                        entity_1 = &entity_1[2];
                        source_1 = &source_1[2];

                        if (data_1)
                            continue;

                        entity_3 = 0;
                        break;
                    }
                }

                entity_3 = entity_1 - entity_1 + 1;
                break;
            }

            if (!entity_3)
                return result;

            flagP += 1;

            if (flagP >= SoundSys_StopSoundSample_18())
                break;
        }
    }

    return 0;
}

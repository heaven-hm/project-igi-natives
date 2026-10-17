// IGI native provenance: SoundSys_EvaluateTrigger_18 - 0x004EE140 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EE140-SoundSys_EvaluateTrigger_18.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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

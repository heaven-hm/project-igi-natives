#include "SoundSys_EvaluateTrigger_18.h"
void* SoundSys_EvaluateTrigger_18(char* a1)

{
    int32_t flagP = 0;

    if (SoundSys_StopSoundSample_18() > 0)
    {
        while (true)
        {
            void* result = SoundSys_LoadSoundDef_18(flagP);
            char* srcS1 = a1;
            char* objC1 = result + 0x138;
            int32_t objC3;

            while (true)
            {
                char valA1 = *objC1;
                char f0_1 = *srcS1;
                bool c_1 = valA1 < f0_1;

                if (valA1 == f0_1)
                {
                    if (!valA1)
                    {
                        objC3 = 0;
                        break;
                    }

                    valA1 = objC1[1];
                    char f3_1 = srcS1[1];
                    c_1 = valA1 < f3_1;

                    if (valA1 == f3_1)
                    {
                        objC1 = &objC1[2];
                        srcS1 = &srcS1[2];

                        if (valA1)
                            continue;

                        objC3 = 0;
                        break;
                    }
                }

                objC3 = objC1 - objC1 + 1;
                break;
            }

            if (!objC3)
                return result;

            flagP += 1;

            if (flagP >= SoundSys_StopSoundSample_18())
                break;
        }
    }

    return 0;
}

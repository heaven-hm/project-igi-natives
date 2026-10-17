// Original IGI.EXE function: SoundDefGroup_OnEvent (VA 0x004EB670; static CFG gate PASS, CFG score 1.000).
#include "SoundDefGroup_OnEvent.h"
int32_t SoundDefGroup_OnEvent(void* a1, int32_t* a2)

{
    int32_t result = a2[1];

    if (!result)
    {
        char* valA = *a2;
        int32_t ctxB;
        int32_t v_10_1 = ctxB;
        char* srcS1 = a1 + 0x22;

        while (true)
        {
            char tmpD1 = *valA;
            char ctxB1 = *srcS1;
            bool c_1 = tmpD1 < ctxB1;

            if (tmpD1 == ctxB1)
            {
                if (!tmpD1)
                {
                    result = 0;
                    break;
                }

                tmpD1 = valA[1];
                ctxB1 = srcS1[1];
                c_1 = tmpD1 < ctxB1;

                if (tmpD1 == ctxB1)
                {
                    valA = &valA[2];
                    srcS1 = &srcS1[2];

                    if (tmpD1)
                        continue;

                    result = 0;
                    break;
                }
            }

            result = valA - valA + 1;
            break;
        }

        if (!result)
        {
            a2[1] = a1;
            return result;
        }

        int32_t* i = *(a1 + 8);

        if (*i && i)
        {
            int32_t objC2 = g_afa7e0;

            do
            {
                int32_t* tmpD2 = *i;
                void* valA5;

                if (!tmpD2)
                    valA5 = nullptr;
                else
                {
                    int32_t valA2 = *tmpD2;
                    int32_t valA3 = -(valA2);
                    valA5 = (valA3 - valA3) & tmpD2;
                }

                *((objC2 << 2) + &g_afa6e0) = valA5;
                g_afa7e0 = objC2 + 1;
                uint32_t valA7 = SoundSys_StopSoundSample_5();
                int32_t objC4 = 0;
                objC4 = i[7];
                result = *(((valA7 * 0x180 + objC4) << 2) + &g_a96ae0);

                if (result)
                    result = result(i, a2);

                objC2 = g_afa7e0 - 1;
                g_afa7e0 = objC2;
                i = *((objC2 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}

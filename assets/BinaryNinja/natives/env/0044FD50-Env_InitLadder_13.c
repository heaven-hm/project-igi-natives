#include "Env_InitLadder_13.h"
int32_t Env_InitLadder_13(int32_t* a1)

{
    int32_t* srcS = a1;
    int32_t v_4 = 0x18;
    char v_5 = 0;
    int32_t result = srcS[0xf1c];

    if (result)
    {
        if (AI_AlertAllies(srcS))
            v_4 = *(AI_AlertAllies(srcS) + 8);

        result = srcS[0x237];
        int32_t ctxB1 = 0;

        if (result > 0)
        {
            a1 = &srcS[0x207];

            do
            {
                int32_t flagP1 = *a1;

                if (ctxB1 < v_4 && Camera_ApplyPostProcess_33(&srcS[flagP1 * 3 + 0x1bc]) && !v_5)
                    v_5 = HumanAI_EventDispatch(srcS, flagP1, ctxB1);

                srcS[flagP1 + 0x21f] = 0;
                int32_t* i_1 = srcS[flagP1 * 3 + 0x1bc];

                for (int32_t* i = *i_1; i; i = *i)
                {
                    Env_TriggerAlarm_13(srcS, i_1);
                    i_1 = i;
                    srcS[flagP1 + 0x21f] += 1;
                }

                result = srcS[0x237];
                ctxB1 += 1;
                a1 = &a1[1];
            } while (ctxB1 < result);
        }
    }

    return result;
}

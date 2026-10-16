#include "Script_CallNativeHandler_12.h"
int32_t** Script_CallNativeHandler_12(int32_t a1 @ 0x8, char* a2)

{
    int32_t** valA = Table_GetAt(a1, a2);
    int32_t** dstD = valA;
    int32_t** arg_4;

    if (dstD)
    {
        int32_t* srcS = *dstD;
        int32_t** flagP1 = arg_4;

        if (!srcS || !*srcS || !srcS)
        {
            valA = flagP1[2];
            int32_t* srcS1 = *valA;
            int32_t srcS2 = -(srcS1);
            srcS = (srcS2 - srcS2) & valA;
        }

        while (srcS != dstD)
        {
            int32_t valA4 = 0;
            int32_t objC2 = 0;
            valA4 = g_a76c03;
            arg_4 = nullptr;
            objC2 = srcS[7];
            valA = *(((valA4 * 0x180 + objC2) << 2) + &g_a96ae0);

            if (valA)
            {
                valA(srcS, &arg_4);
                valA = arg_4;

                if (valA && valA[1] == a2 && !valA[2])
                {
                    void* valA9 = Script_ExecuteLevelScript_12(a1, a2, srcS);
                    valA9 = 1;
                    return valA9;
                }
            }

            srcS = *srcS;

            if (!srcS || !*srcS || !srcS)
            {
                valA = flagP1[2];
                int32_t* srcS4 = *valA;
                int32_t srcS5 = -(srcS4);
                srcS = (srcS5 - srcS5) & valA;
            }
        }
    }
    else
    {
        int32_t* i = arg_4[2];

        if (*i && i)
        {
            do
            {
                int32_t valA1 = 0;
                arg_4 = nullptr;
                valA1 = g_a76c03;
                int32_t valA2 = 0;
                valA2 = i[7];
                valA = *(((valA1 * 0x180 + valA2) << 2) + &g_a96ae0);

                if (valA)
                {
                    valA(i, &arg_4);
                    valA = arg_4;

                    if (valA && valA[1] == a2 && !valA[2])
                    {
                        void* valA3 = Script_ExecuteLevelScript_12(a1, a2, i);
                        valA3 = 1;
                        return valA3;
                    }
                }

                i = *i;

                if (!i)
                    break;

                if (!*i)
                    break;
            } while (i);
        }
    }
    valA = 0;
    return valA;
}

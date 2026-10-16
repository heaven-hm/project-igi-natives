#include "gi_platform.h"
#include "00496280-Display_SwapBuffers_10.h"
int32_t Display_SwapBuffers_10(char* a1, char* a2, int32_t a3, int16_t* a4)

{
    int16_t* flagP = a4;
    int32_t srcS = flagP[3];
    int16_t tmpD = flagP[2];
    int32_t v_18 = flagP[1];
    int32_t objC1 = flagP[4];
    int32_t v_8 = (*(int32_t*)(uintptr_t)((srcS << 1) + &g_543930));
    char* v_1c = a2;
    int32_t v_4 = *((objC1 << 1) + &g_543930);
    int16_t tmpD3;
    tmpD3 = flagP[5];
    a2 = a1;
    int32_t v_10 = srcS;

    if (tmpD3)
    {
        char* tmpD4 = nullptr;
        tmpD4 = *a1;
        a1 = tmpD4;
        a2 = &a1[1];
    }

    int32_t result = a3;

    if (result > 0)
    {
        a3 = result;
        bool cond_1_1;

        do
        {
            int32_t i = 0;

            if (*flagP > 0)
            {
                do
                {
                    bool objC3 = flagP[5];
                    char* valA3;

                    if (!objC3)
                    {
                        char* valA4 = nullptr;
                        valA4 = *a2;
                        a1 = valA4;
                        a2 = &a2[1];
                        valA3 = valA4 >> 4;
                    }
                    else
                        valA3 = a1;

                    void* valA5 = valA3 & 0xf;
                    flagP[5] = !objC3;
                    int32_t objC4 = (&v_10)[i];
                    int32_t tmpD7 = *(valA5 + 0x543920);
                    int32_t objC5 = objC4 + tmpD7;
                    (&v_10)[i] = objC5;
                    int32_t ctxB1;

                    if (objC4 + tmpD7 >= 0)
                    {
                        ctxB1 = 0x58;

                        if (objC5 <= 0x58)
                            ctxB1 = objC5;
                    }
                    else
                        ctxB1 = 0;

                    int32_t srcS1 = (&v_8)[i];
                    char valA6 = valA5 & 7;
                    (&v_10)[i] = ctxB1;
                    int32_t objC7 = srcS1 >> 3;

                    if (valA6 & 4)
                        objC7 += srcS1;

                    if (valA6 & 2)
                    {
                        objC7 += srcS1 >> 1;
                        flagP = a4;
                    }

                    if (valA6 & 1)
                        objC7 += srcS1 >> 2;

                    int32_t valA7 = (&v_18)[i];
                    int32_t valA8;

                    valA8 = !(valA5 & 8) ? valA7 + objC7 : valA7 - objC7;

                    (&v_18)[i] = valA8;

                    if (valA8 < 0xffff8000)
                        valA8 = 0xffff8000;
                    else if (valA8 > 0x7fff)
                        valA8 = 0x7fff;

                    (&v_18)[i] = valA8;
                    int16_t objC2 = (&v_18)[i];
                    (&v_8)[i] = *((ctxB1 << 1) + &g_543930);
                    *v_1c = objC2;
                    i += 1;
                    v_1c = &v_1c[2];
                } while (i < *flagP);
            }

            result = a3 - 1;
            cond_1_1 = a3 != 1;
            a3 = result;
        } while (cond_1_1);
        srcS = v_10;
    }

    result = v_18;
    flagP[3] = srcS;
    flagP[1] = result;
    flagP[2] = tmpD;
    flagP[4] = objC1;
    return result;
}

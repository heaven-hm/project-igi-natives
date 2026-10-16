#include "gi_platform.h"
#include "0049BD30-Display_SetDisplayMode_19.h"
int32_t Display_SetDisplayMode_19()

{
    int32_t i = g_72350c;
    int32_t i_1 = 0;

    if (i > 0)
    {
        int32_t* flagP1 = &g_7ac0a0;

        do
        {
            int32_t* valA = *flagP1;
            ((int(*)())(uintptr_t)((*(int32_t*)(uintptr_t)(*valA + 8))))(valA);
            int32_t* valA1 = g_5ca110;
            *flagP1 = 0;
            ((int(*)())(uintptr_t)(*(*valA1 + 0x14)))(valA1, &flagP1[1], flagP1, 0);
            int32_t* ctxB1 = flagP1[6];
            int32_t* srcS1 = *ctxB1;
            int32_t* v_c_1 = srcS1;

            if (srcS1)
            {
                while (true)
                {
                    int32_t* valA2 = *ctxB1[4];
                    int32_t v_4;

                    if (!((int(*)())(uintptr_t)(*(*valA2 + 0xc)))(valA2, 0x20, &v_4, 0))
                    {
                        int32_t valA4 = flagP1[5];
                        int32_t dstD1 = 0;
                        dstD1 = ctxB1[3];
                        int32_t objC4 = 0;
                        objC4 = *(ctxB1 + 0xe);
                        int32_t objC5 = objC4 * valA4;
                        int32_t srcS3;
                        int32_t dstD4;
                        dstD4 =
                            memcpy(dstD1 * valA4 + v_4, ctxB1[5], objC5 & 0xfffffffc);
                        memcpy(dstD4, srcS3, objC5 & 3);
                        int32_t* valA7 = *ctxB1[4];
                        ((int(*)())(uintptr_t)(*(*valA7 + 0x10)))(valA7);
                        srcS1 = v_c_1;
                    }

                    ctxB1 = srcS1;
                    int32_t* srcS4 = *srcS1;
                    v_c_1 = srcS4;

                    if (!srcS4)
                        break;

                    srcS1 = v_c_1;
                }
            }

            i = i_1 + 1;
            flagP1 = &flagP1[9];
            i_1 = i;
        } while (i < g_72350c);
    }

    return i;
}

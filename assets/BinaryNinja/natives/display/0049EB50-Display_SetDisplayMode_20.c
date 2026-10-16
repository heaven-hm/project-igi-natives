#include "Display_SetDisplayMode_20.h"
int32_t Display_SetDisplayMode_20(void* a1, int32_t* a2)

{
    void* flagP = a1;
    int32_t result = *(flagP + 0x28);

    if (!result)
    {
        int32_t* valA = *(flagP + 0x30);
        a1 = nullptr;
        int32_t* valA1 = *valA;
        result = (*(*valA1 + 0xc))(valA1, 0x20, &a1, 0);

        if (!result)
        {
            result = *(flagP + 0x2c);
            int32_t srcS1 = *(flagP + 0x14);
            void* dstD1 = a1 + result * 0x28;
            int32_t valA3 = *(flagP + 0x10);
            a1 = dstD1;
            int32_t objC4 = valA3 * 0x28;
            int32_t srcS2;
            int32_t dstD2;
            dstD2 = memcpy(dstD1, srcS1, objC4 & 0xfffffffc);
            memcpy(dstD2, srcS2, objC4 & 3);
            int32_t* srcS3 = a2;

            if (srcS3 && *srcS3)
            {
                void* tmpD2 = *(flagP + 0x1c);
                int32_t* ctxB1 = a2;

                while (true)
                {
                    int32_t valA4 = 0;
                    valA4 = *(tmpD2 + 0x14);
                    void* valA6 = valA4 * 0x28;
                    void* dstD4 = valA6 + *(flagP + 0x14);
                    int16_t objC9 = *(tmpD2 + 0x12);

                    if (objC9 != 0xffff)
                        ctxB1 = *srcS3 + objC9 * 0x2c + 0x3c;

                    int32_t srcS5 = 0;

                    if (*(tmpD2 + 0x16) > 0)
                    {
                        valA6 = valA6 + a1 + 0x24;
                        void* objC13 = dstD4 + 0x24;
                        int32_t dstD5;

                        do
                        {
                            long double x87_r7_2 = *(objC13 - 4) * ctxB1[4];
                            dstD5 = 0;
                            srcS5 += 1;
                            valA6 += 0x28;
                            objC13 += 0x28;
                            *(valA6 - 0x2c) = x87_r7_2;
                            *(valA6 - 0x28) = *(objC13 - 0x28) * ctxB1[5];
                            dstD5 = *(tmpD2 + 0x16);
                        } while (srcS5 < dstD5);
                    }

                    int16_t valA7 = *(tmpD2 + 0xe);

                    if (valA7 == 0xffff)
                        break;

                    srcS3 = a2;
                    tmpD2 = tmpD2 + valA7 + 0x20;
                }
            }

            int32_t* valA9 = **(flagP + 0x30);
            result = (*(*valA9 + 0x10))(valA9);
            *(flagP + 0x28) = 1;
        }
    }

    return result;
}

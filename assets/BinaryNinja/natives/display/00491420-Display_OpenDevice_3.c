#include "Display_OpenDevice_3.h"
char* Display_OpenDevice_3(char* a1, int32_t* a2)

{
    int32_t* dstD = a2;
    int32_t* flagP = nullptr;
    a2 = nullptr;
    char objC = dstD[0x1e];
    char* srcS = dstD[0xd];
    char* ctxB = srcS;
    char* v_18 = srcS;
    long double fpu7;

    if (!objC)
        fpu7 = dstD[1];
    else
    {
        int32_t valA3;
        char* tmpD;
        tmpD = HIGHD(*(*(a1 + 0x154) + 4));
        valA3 = LOWD(*(*(a1 + 0x154) + 4));
        fpu7 = (valA3 - tmpD) >> 1;
    }

    float v_10 = dstD[2];
    char* valA6;
    long double x87_r7_2;

    if (!objC)
    {
        valA6 = dstD[1];
        x87_r7_2 = *(*(a1 + 0x154) + 4) - valA6;
    }
    else
    {
        valA6 = a1;
        x87_r7_2 = *(*(valA6 + 0x154) + 4);
    }

    char tmpD2 = *srcS;

    if (tmpD2)
    {
        valA6 = &srcS[1];
        int32_t* flagP1 = &dstD[0xe];
        char* v_14_1 = valA6;

        while (a2 < 7)
        {
            if (tmpD2 != 0xd)
            {
                if (tmpD2 == 0x20)
                {
                    *srcS = 0;
                    long double x87_r7_3 = Sys_PopStack_18(*(a1 + (*dstD << 2) + 0x1b8), ctxB);
                    long double f1_1 = x87_r7_2;
                    x87_r7_3 - f1_1;

                    if (*(&((x87_r7_3 < f1_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_3, f1_1) ? 1 : 0) << 0xa
                            | (x87_r7_3 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        v_18 = srcS;
                    else
                    {
                        *flagP1 = ctxB;
                        flagP1 = &flagP1[1];
                        a2 += 1;
                        *v_18 = 0;
                        ctxB = &v_18[1];
                        v_18 = ctxB;
                    }

                    valA6 = v_14_1;
                    *srcS = 0x20;
                }

                if (*srcS == 0xa)
                {
                    *flagP1 = ctxB;
                    flagP1 = &flagP1[1];
                    a2 += 1;
                    *srcS = 0;
                    ctxB = valA6;
                    v_18 = valA6;
                }
            }

            tmpD2 = srcS[1];
            srcS = &srcS[1];
            valA6 = &valA6[1];
            v_14_1 = valA6;

            if (!tmpD2)
                break;
        }

        flagP = a2;
    }

    dstD[flagP + 0xe] = ctxB;
    int32_t* i_1 = flagP + 1;
    a2 = i_1;

    if (i_1 <= 0)
    {
        dstD[9] = i_1;
        return valA6;
    }

    int32_t*** srcS1 = &dstD[0x16];
    int32_t valA16;
    int32_t* i;

    do
    {
        int32_t** valA13 = Sys_OpenFileStream_18(*(a1 + (*dstD << 2) + 0x1b8), fpu7, v_10, srcS1[-8]);
        *srcS1 = valA13;

        if (dstD[0x1e])
        {
            int32_t objC8 = valA13[9];
            objC8 |= 0x80;
            valA13[9] = objC8;
        }

        int32_t** valA14 = *srcS1;
        valA14[9] |= 8;
        (*srcS1)[5] = dstD[0xa] * 128f;
        (*srcS1)[6] = dstD[0xb] * 128f;
        (*srcS1)[7] = dstD[0xc] * 128f;
        valA16 = Sys_AllocateMemory_22(*srcS1);
        srcS1 = &srcS1[1];
        i = i_1;
        i_1 -= 1;
        v_10 = valA16 + v_10;
    } while (i != 1);
    dstD[9] = a2;
    return valA16;
}

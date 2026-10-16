#include "gi_platform.h"
#include "00469450-AI_TakeCover_26.h"
int32_t AI_TakeCover_26(int32_t a1, int32_t a2, int32_t a3, int32_t a4, char* a5 , void* a6, int32_t a7)

{
    int32_t ctxB = a4;
    int32_t v_204 = 0;
    int32_t v_210 = a1;
    int32_t v_20c = a2;
    char v_100 = 0;
    Qhash_Init(1);
    void* srcS = a6;
    int32_t** valA1 = Sys_OpenFileStream_18(srcS, 0, 0, &g_567c74);
    Qhash_Reset();
    valA1[9] |= 0x40000;
    int32_t valA4 = a7 * 0xc;
    valA1[3] = a3;
    valA1[5] = *(valA4 + 0x53f7d0);
    valA1[6] = *(valA4 + 0x53f7d4);
    valA1[7] = *(valA4 + 0x53f7d8);

    while (true)
    {
        int32_t objC1 = 0;
        char v_200 = 0;

        while (true)
        {
            char valA5 = *a5;
            a5 = &a5[1];

            if (!valA5)
            {
                (&v_200)[objC1] = 0;
                v_204 = 1;
                break;
            }

            if (valA5 == 0x20)
            {
                (&v_200)[objC1] = 0x20;
                char v_1ff[0xff];
                v_1ff[objC1] = 0;
                break;
            }

            (&v_200)[objC1] = valA5;
            objC1 += 1;
        }

        int32_t valA6 = Sys_PopStack_18(srcS, &v_200);

        if (ctxB <= valA6)
        {
            char* v_224_2 = &v_100;
            v_210 = a1;
            char* dstD6 = &v_200;
            v_20c += Sys_ResolveSymbol_18(srcS);
            int32_t i = 0xffffffff;

            while (i)
            {
                bool cond_0_1 = 0 != *dstD6;
                dstD6 = &dstD6[1];
                i -= 1;

                if (!cond_0_1)
                    break;
            }

            int32_t objC9 = ~i;
            v_100 = 0;
            char* dstD8 = &v_100;
            int32_t i_1 = 0xffffffff;

            while (i_1)
            {
                bool cond_1_1 = 0 != *dstD8;
                dstD8 = &dstD8[1];
                i_1 -= 1;

                if (!cond_1_1)
                    break;
            }

            int32_t srcS4;
            int32_t dstD10;
            dstD10 = memcpy(dstD8 - 1, dstD6 - objC9, objC9 & 0xfffffffc);
            ctxB = a4;
            memcpy(dstD10, srcS4, objC9 & 3);
        }
        else
        {
            char* dstD1 = &v_200;
            int32_t i_2 = 0xffffffff;

            while (i_2)
            {
                bool cond_2_1 = 0 != *dstD1;
                dstD1 = &dstD1[1];
                i_2 -= 1;

                if (!cond_2_1)
                    break;
            }

            int32_t objC2 = ~i_2;
            char* dstD3 = &v_100;
            int32_t i_3 = 0xffffffff;

            while (i_3)
            {
                bool cond_3_1 = 0 != *dstD3;
                dstD3 = &dstD3[1];
                i_3 -= 1;

                if (!cond_3_1)
                    break;
            }

            int32_t srcS2;
            int32_t dstD5;
            dstD5 = memcpy(dstD3 - 1, dstD1 - objC2, objC2 & 0xfffffffc);
            memcpy(dstD5, srcS2, objC2 & 3);
        }

        ctxB -= valA6;
        Sys_FreeMemory_18(valA1, &v_200);
        valA1[8] = 0xffffffff;
        valA1[1] = v_210;
        valA1[2] = v_20c;
        Sys_CloseFileStream_18(valA1);
        v_210 += valA6;

        if (v_204)
            break;

        srcS = a6;
    }

    char* v_224_4 = &v_100;
    int32_t result = v_20c + Sys_ResolveSymbol_18(a6);
    Sys_ReadFileBlock_18(valA1);
    return result;
}

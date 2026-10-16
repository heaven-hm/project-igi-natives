#include "Sys_UnhandledOpcode_2.h"
char* Sys_UnhandledOpcode_2(int32_t* a1)

{
    int32_t* srcS = a1;
    char* valA1 = *srcS + srcS[5];
    int32_t objC1 = 0;
    objC1 = *valA1;
    uint32_t valA2;
    char* valA4;
    uint32_t ctxB1;
    int32_t flagP1;
    int32_t dstD1;

    if (objC1 - 8 <= 6)
        switch (objC1)
        {
            case 8:
            {
                dstD1 = 4;
                valA2 = *(valA1 + 1);
                goto label_4bea67;
            }
            case 9:
            {
                uint32_t tmpD1 = 0;
                dstD1 = 1;
                tmpD1 = valA1[1];
                valA2 = tmpD1;
            label_4bea67:
                valA4 = Sys_DispatchOpcode_30(&srcS[0xc], valA2);

                if (valA4)
                {
                    Sys_ReadFileBlock_28(srcS, valA4, 3);
                    int32_t valA6 = srcS[5] + dstD1 + 1;
                    srcS[5] = valA6;
                    return valA6;
                }

            label_4bebc8:
                int32_t objC12 = srcS[5];
                srcS[8] = 0xf;
                srcS[4] = objC12;
                return valA4;
                break;
            }
            case 0xa:
            {
                dstD1 = 2;
                a1 = *(valA1 + 1);
                valA2 = a1;
                goto label_4bea67;
            }
            case 0xc:
            {
                ctxB1 = *(valA1 + 1);
                flagP1 = 4;
                goto label_4beae7;
            }
            case 0xd:
            {
                ctxB1 = 0;
                flagP1 = 1;
                ctxB1 = valA1[1];
            label_4beae7:
                int32_t* valA13 = *(srcS[0x18] + (ctxB1 << 2));
                a1 = valA13;

                if (valA13)
                {
                label_4beb8c:
                    Sys_ExecuteBytecode_30(srcS, a1);
                    int32_t valA22 = srcS[5] + flagP1 + 1;
                    srcS[5] = valA22;
                    return valA22;
                }

                void* valA15 = *(srcS[0x19] + (ctxB1 << 2));
                void* tmpD4;
                char* dstD3;

                if (valA15)
                {
                    int32_t* valA16 = *(valA15 + 8);
                    a1 = valA16;

                    if (valA16)
                        goto label_4beb8c;

                    char* valA17 = Sys_DispatchOpcode_30(&srcS[0x12], ctxB1);

                    if (!valA17)
                        goto label_4beb8c;

                    int32_t tmpD3 = srcS[5];
                    srcS[8] = 7;
                    srcS[4] = tmpD3;
                    tmpD4 = &srcS[0x1a];
                    dstD3 = valA17;
                    goto label_4beb2e;
                }

                valA4 = Sys_DispatchOpcode_30(&srcS[0x12], ctxB1);
                dstD3 = valA4;

                if (!dstD3)
                    goto label_4bebc8;

                if (Sys_ReadFileBlock_25(dstD3, &a1))
                {
                    int32_t* valA20 = a1;

                    if (valA20[2])
                        *(srcS[0x19] + (ctxB1 << 2)) = Sys_ExecuteBytecode_25(dstD3);
                    else
                        *(srcS[0x18] + (ctxB1 << 2)) = valA20;

                    goto label_4beb8c;
                }

                int32_t valA24 = srcS[5];
                srcS[8] = 7;
                srcS[4] = valA24;
                tmpD4 = &srcS[0x1a];
            label_4beb2e:
                int32_t i = 0xffffffff;

                while (i)
                {
                    bool cond_2_1 = 0 != *dstD3;
                    dstD3 = &dstD3[1];
                    i -= 1;

                    if (!cond_2_1)
                        break;
                }

                int32_t objC5 = ~i;
                int32_t srcS2;
                int32_t dstD6;
                dstD6 = memcpy(tmpD4, dstD3 - objC5, objC5 & 0xfffffffc);
                memcpy(dstD6, srcS2, objC5 & 3);
                return objC5;
                break;
            }
            case 0xe:
            {
                a1 = *(valA1 + 1);
                ctxB1 = a1;
                flagP1 = 2;
                goto label_4beae7;
            }
        }
    Error_Show("Unhandled opcode.");

    while (true)
        /* nop */
}

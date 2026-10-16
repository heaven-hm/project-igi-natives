#include "Sys_ScriptInternalErrorI.h"
char* Sys_ScriptInternalErrorI(int32_t a1, int32_t* a2, int32_t a3, char* a4)

{
    int32_t objC = 0;

    if (a4)
    {
        int32_t dstD1 = *(a4 + 8);
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond_1_1 = 0 != *dstD1;
            dstD1 += 1;
            i -= 1;

            if (!cond_1_1)
                break;
        }

        int32_t* dstD2 = a2;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool cond_2_1 = 0 != *dstD2;
            dstD2 += 1;
            i_1 -= 1;

            if (!cond_2_1)
                break;
        }

        objC = ~i - 1 + ~i_1 - 1 + 1;
    }
    else if (a1 == 2 || a1 == 5)
    {
        int32_t* dstD3 = a2;
        int32_t i_2 = 0xffffffff;

        while (i_2)
        {
            bool cond_3_1 = 0 != *dstD3;
            dstD3 += 1;
            i_2 -= 1;

            if (!cond_3_1)
                break;
        }

        objC = ~i_2;
    }

    char* result = Mem_Alloc(objC + 0x28, 4);
    __builtin_memset(result, 0, 0x28);
    *result = a1;
    *(result + 0x24) = a3 + 1;

    if (a1 - 1 > 7)
    {
        Error_Show("Script: Internal Error: Illegal expression type.");

        while (true)
            /* nop */

        return;
    }

    void* tmpD3;

    switch (a1)
    {
        case 1:
        {
            *(result + 8) = *a2;
            return result;
            break;
        }
        case 2:
        {
            tmpD3 = &result[0x28];
            *(result + 8) = tmpD3;

            if (!a4)
                goto label_4baa31;

            int32_t dstD5 = *(a4 + 8);
            int32_t i_3 = 0xffffffff;

            while (i_3)
            {
                bool cond_7_1 = 0 != *dstD5;
                dstD5 += 1;
                i_3 -= 1;

                if (!cond_7_1)
                    break;
            }

            int32_t objC8 = ~i_3;
            int32_t srcS2;
            int32_t dstD8;
            dstD8 = memcpy(tmpD3, dstD5 - objC8, objC8 & 0xfffffffc);
            memcpy(dstD8, srcS2, objC8 & 3);
            int32_t* dstD9 = a2;
            int32_t i_4 = 0xffffffff;

            while (i_4)
            {
                bool cond_8_1 = 0 != *dstD9;
                dstD9 += 1;
                i_4 -= 1;

                if (!cond_8_1)
                    break;
            }

            int32_t objC12 = ~i_4;
            int32_t dstD11 = *(result + 8);
            int32_t i_5 = 0xffffffff;

            while (i_5)
            {
                bool cond_9_1 = 0 != *dstD11;
                dstD11 += 1;
                i_5 -= 1;

                if (!cond_9_1)
                    break;
            }

            int32_t srcS4;
            int32_t dstD13;
            dstD13 = memcpy(dstD11 - 1, dstD9 - objC12, objC12 & 0xfffffffc);
            memcpy(dstD13, srcS4, objC12 & 3);
            char* valA9 = *(a4 + 0x20);

            if (valA9)
            {
                if (*(valA9 + 0x18) == a4)
                {
                    *(valA9 + 0x18) = result;
                    *(result + 0x20) = *(a4 + 0x20);
                    Sys_PushStack_24(a4);
                    return result;
                }

                if (*(valA9 + 0x1c) == a4)
                {
                    *(valA9 + 0x1c) = result;
                    *(result + 0x20) = *(a4 + 0x20);
                    Sys_PushStack_24(a4);
                    return result;
                }

                if (*valA9 != 6)
                {
                    Error_Show("Internal error!!!");

                    while (true)
                        /* nop */
                }
                else
                {
                    *(valA9 + 8) = result;
                    *(result + 0x20) = *(a4 + 0x20);
                }
            }

            Sys_PushStack_24(a4);
            return result;
            break;
        }
        case 3:
        {
            *(result + 8) = *a2;
            *(result + 0xc) = a2[1];
            return result;
            break;
        }
        case 4:
        case 6:
        {
            *(result + 8) = a2;
            return result;
            break;
        }
        case 5:
        {
            tmpD3 = &result[0x28];
            *(result + 8) = 0;
            *(result + 0x10) = tmpD3;
            *(result + 0xc) = 0;
        label_4baa31:
            int32_t* dstD14 = a2;
            int32_t i_6 = 0xffffffff;

            while (i_6)
            {
                bool cond_6_1 = 0 != *dstD14;
                dstD14 += 1;
                i_6 -= 1;

                if (!cond_6_1)
                    break;
            }

            int32_t objC19 = ~i_6;
            int32_t srcS6;
            int32_t dstD17;
            dstD17 = memcpy(tmpD3, dstD14 - objC19, objC19 & 0xfffffffc);
            memcpy(dstD17, srcS6, objC19 & 3);
            return result;
            break;
        }
        case 7:
        {
            result[1] = 0x1d;
            result[2] = Sys_ScriptInternalErrorU(0x1d);
            *(result + 8) = a2;
            return result;
            break;
        }
        case 8:
        {
            char ctxB1 = *a2;
            result[1] = ctxB1;
            result[2] = Sys_ScriptInternalErrorU(ctxB1);
            return result;
            break;
        }
    }
}

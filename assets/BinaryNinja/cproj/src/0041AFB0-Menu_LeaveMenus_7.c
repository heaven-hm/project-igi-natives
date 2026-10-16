#include "gi_platform.h"
#include "0041AFB0-Menu_LeaveMenus_7.h"
int32_t Menu_LeaveMenus_7(int32_t a1, int32_t a2, int32_t a3 , char* a4 , void* a5, int32_t* a6, int32_t a7)

{
    int32_t v_20c = a1;
    int32_t v_208 = a2;
    int32_t ctxB = a3;
    int32_t objC2 = a6[9] | 0x80000;
    int32_t* i = nullptr;
    char v_100 = 0;
    a6[9] = objC2;
    a6[4] = a7;

    do
    {
        int32_t objC3 = 0;
        char v_200 = 0;

        while (true)
        {
            char valA2 = *a4;
            a4 = &a4[1];

            if (!valA2)
            {
                i = 1;
                (&v_200)[objC3] = 0;
                break;
            }

            if (valA2 == 0x20)
            {
                (&v_200)[objC3] = 0x20;
                char v_1ff[0xff];
                v_1ff[objC3] = 0;
                break;
            }

            (&v_200)[objC3] = valA2;
            objC3 += 1;
        }

        int32_t valA3 = Sys_PopStack_18(a5, &v_200);

        if (ctxB <= valA3)
        {
            char* v_220_2 = &v_100;
            v_20c = a1;
            int32_t j = 0xffffffff;
            v_208 += Sys_ResolveSymbol_18(a5);
            char* dstD8 = &v_200;

            while (j)
            {
                bool cond_0_1 = 0 != *dstD8;
                dstD8 = &dstD8[1];
                j -= 1;

                if (!cond_0_1)
                    break;
            }

            int32_t objC9 = ~j;
            int32_t srcS5;
            int32_t dstD10;
            dstD10 = memcpy(&v_100, dstD8 - objC9, objC9 & 0xfffffffc);
            ctxB = a3 - valA3;
            memcpy(dstD10, srcS5, objC9 & 3);
        }
        else
        {
            char* dstD1 = &v_200;
            int32_t j_1 = 0xffffffff;
            ctxB -= valA3;

            while (j_1)
            {
                bool cond_1_1 = 0 != *dstD1;
                dstD1 = &dstD1[1];
                j_1 -= 1;

                if (!cond_1_1)
                    break;
            }

            int32_t objC4 = ~j_1;
            char* dstD3 = &v_100;
            int32_t j_2 = 0xffffffff;

            while (j_2)
            {
                bool cond_2_1 = 0 != *dstD3;
                dstD3 = &dstD3[1];
                j_2 -= 1;

                if (!cond_2_1)
                    break;
            }

            int32_t srcS3;
            int32_t dstD5;
            dstD5 = memcpy(dstD3 - 1, dstD1 - objC4, objC4 & 0xfffffffc);
            memcpy(dstD5, srcS3, objC4 & 3);
        }

        Sys_FreeMemory_18(a6, &v_200);
        a6[1] = v_20c;
        a6[2] = v_208;
        Sys_CloseFileStream_18(a6);
        v_20c += valA3;
    } while (!i);

    char* v_220_4 = &v_100;
    return Sys_ResolveSymbol_18(a5) + v_208;
}

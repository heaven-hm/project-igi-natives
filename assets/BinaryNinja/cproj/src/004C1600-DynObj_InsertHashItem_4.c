#include "gi_platform.h"
#include "004C1600-DynObj_InsertHashItem_4.h"
void* DynObj_InsertHashItem_4(int32_t* a1, int32_t* a2)

{
    int16_t v_200;
    __builtin_memset(&v_200, 0x20202020, 0x200);
    v_200 = 0xa0d;
    int32_t valA3 = a1[1] + 2;
    char v_1fe = 0;
    char v_1fe_1 = 0x20;
    int32_t v_228 = 0x200;

    if (valA3 <= 0x200)
        v_228 = valA3;

    int32_t srcS = (*(int32_t*)(uintptr_t)(a1[2] + *a2 + 1));
    int32_t v_224 = srcS;
    Sys_CloseFileStream_4(*a1, &g_547a4c, 1);
    int32_t flagP = 0;
    int32_t v_22c = 0;

    if (srcS > 0)
    {
        do
        {
            int32_t v_240_1 = (*(int32_t*)(uintptr_t)(a1[2] + (flagP << 2) + *a2 + 5));
            char v_220;
            Game_DataSymbolLoad(&v_220, "@%08X");

            if (flagP >= srcS - 1)
                v_22c = 0;
            else
            {
                void* dstD1 = &g_547a44;
                int32_t i = 0xffffffff;

                while (i)
                {
                    bool cond_2_1 = 0 != *dstD1;
                    dstD1 += 1;
                    i -= 1;

                    if (!cond_2_1)
                        break;
                }

                int32_t objC4 = ~i;
                void* dstD3 = &v_220;
                int32_t i_1 = 0xffffffff;

                while (i_1)
                {
                    bool cond_3_1 = 0 != *dstD3;
                    dstD3 += 1;
                    i_1 -= 1;

                    if (!cond_3_1)
                        break;
                }

                int32_t srcS2;
                int32_t dstD5;
                dstD5 = memcpy(dstD3 - 1, dstD1 - objC4, objC4 & 0xfffffffc);
                memcpy(dstD5, srcS2, objC4 & 3);
                srcS = v_224;
            }

            void* dstD6 = &v_220;
            int32_t i_2 = 0xffffffff;

            while (i_2)
            {
                bool cond_5_1 = 0 != *dstD6;
                dstD6 += 1;
                i_2 -= 1;

                if (!cond_5_1)
                    break;
            }

            Sys_CloseFileStream_4(*a1, &v_220, ~i_2 - 1);

            if (v_22c >= 4)
            {
                v_22c = 0xffffffff;
                Sys_CloseFileStream_4(*a1, &v_200, v_228);
            }

            flagP += 1;
            v_22c += 1;
        } while (flagP < srcS);
    }

    Sys_CloseFileStream_4(*a1, &g_547ee8, 3);
    a1[2] += (srcS << 2) + 5;
    return (srcS << 2) + 5;
}

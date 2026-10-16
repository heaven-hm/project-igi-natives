#include "Level_LocalCommonSprites.h"
int32_t Level_LocalCommonSprites()

{
    int32_t result = g_57bab8;
    int32_t flagP = 0;

    if (result > 0)
    {
        void* ctxB1 = &g_57b1a8;

        do
        {
            void v_100;
            int16_t* srcS1;
            int16_t* dstD1;
            dstD1 = memcpy(&v_100, "LOCAL:common/sprites/", 0x14);
            *dstD1 = *srcS1;
            void v_ea;
            *__builtin_memset(&v_ea, 0, 0xe8) = 0;
            void* dstD5 = ctxB1;
            int32_t i = 0xffffffff;

            while (i)
            {
                bool cond_0_1 = 0 != *dstD5;
                dstD5 += 1;
                i -= 1;

                if (!cond_0_1)
                    break;
            }

            int32_t objC1 = ~i;
            void* dstD7 = &v_100;
            int32_t i_1 = 0xffffffff;

            while (i_1)
            {
                bool cond_1_1 = 0 != *dstD7;
                dstD7 += 1;
                i_1 -= 1;

                if (!cond_1_1)
                    break;
            }

            int32_t srcS4;
            int32_t dstD9;
            dstD9 = memcpy(dstD7 - 1, dstD5 - objC1, objC1 & 0xfffffffc);
            int32_t* v_114 = &v_100;
            memcpy(dstD9, srcS4, objC1 & 3);
            Sys_IlfFileCorruptS(ctxB1 + 0x18, v_114);
            result = g_57bab8;
            flagP += 1;
            ctxB1 += 0x30;
        } while (flagP < result);
    }

    return result;
}

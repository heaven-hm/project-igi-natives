#include "Level_LocalCommonTextures.h"
int32_t Level_LocalCommonTextures()

{
    int32_t result = g_57bab4;
    int32_t flagP = 0;

    if (result > 0)
    {
        void* ctxB1 = &g_57b5e8;

        do
        {
            void v_100;
            int16_t* srcS1;
            int16_t* dstD1;
            dstD1 = memcpy(&v_100, "LOCAL:common/textures/", 0x14);
            *dstD1 = *srcS1;
            dstD1[1] = srcS1[1];
            void v_e9;
            *__builtin_memset(&v_e9, 0, 0xe8) = 0;
            void* dstD6 = ctxB1;
            int32_t i = 0xffffffff;

            while (i)
            {
                bool cond_0_1 = 0 != *dstD6;
                dstD6 += 1;
                i -= 1;

                if (!cond_0_1)
                    break;
            }

            int32_t objC1 = ~i;
            void* dstD8 = &v_100;
            int32_t i_1 = 0xffffffff;

            while (i_1)
            {
                bool cond_1_1 = 0 != *dstD8;
                dstD8 += 1;
                i_1 -= 1;

                if (!cond_1_1)
                    break;
            }

            int32_t srcS5;
            int32_t dstD10;
            dstD10 = memcpy(dstD8 - 1, dstD6 - objC1, objC1 & 0xfffffffc);
            int32_t* v_114 = &v_100;
            memcpy(dstD10, srcS5, objC1 & 3);
            Sys_SIsNotAValidTextureF(ctxB1 + 0x18, 0, v_114);
            result = g_57bab4;
            flagP += 1;
            ctxB1 += 0x3c;
        } while (flagP < result);
    }

    return result;
}

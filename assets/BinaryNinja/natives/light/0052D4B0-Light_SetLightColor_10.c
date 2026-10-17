// Original IGI.EXE function: Light_SetLightColor_10 (VA 0x0052D4B0; static CFG gate FAIL, CFG score 0.809).
#include "Light_SetLightColor_10.h"
int32_t Light_SetLightColor_10(int32_t* a1, char* a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)

{
    char* ctxB = a2;
    int32_t result = 0;
    *ctxB = 0;
    int32_t srcS;

    srcS = a5 || a6 ? 1 : 0;

    if (a4)
    {
        int32_t v_14_1 = a3;
        int32_t flagP = Light_SampleLightmap_10(a1, ctxB);

        if (srcS)
        {
            void* dstD1 = &g_54f730;
            int32_t i = 0xffffffff;

            while (i)
            {
                bool cond_2_1 = 0 != *dstD1;
                dstD1 += 1;
                i -= 1;

                if (!cond_2_1)
                    break;
            }

            int32_t objC2 = ~i;
            char* dstD3 = ctxB;
            int32_t i_1 = 0xffffffff;

            while (i_1)
            {
                bool cond_3_1 = 0 != *dstD3;
                dstD3 = &dstD3[1];
                i_1 -= 1;

                if (!cond_3_1)
                    break;
            }

            int32_t srcS2;
            int32_t dstD5;
            dstD5 = memcpy(dstD3 - 1, dstD1 - objC2, objC2 & 0xfffffffc);
            flagP += 1;
            memcpy(dstD5, srcS2, objC2 & 3);
        }

        char* dstD6 = ctxB;
        int32_t i_2 = 0xffffffff;

        while (i_2)
        {
            bool cond_1_1 = 0 != *dstD6;
            dstD6 = &dstD6[1];
            i_2 -= 1;

            if (!cond_1_1)
                break;
        }

        int32_t v_14_2 = a3;
        char* ctxB1 = &ctxB[~i_2 - 1];
        result = flagP + Light_ComputeDirectionalLight_11(a1, ctxB1);

        if (a6)
        {
            void* dstD7 = &g_54f730;
            int32_t i_3 = 0xffffffff;

            while (i_3)
            {
                bool cond_5_1 = 0 != *dstD7;
                dstD7 += 1;
                i_3 -= 1;

                if (!cond_5_1)
                    break;
            }

            int32_t objC10 = ~i_3;
            char* dstD9 = ctxB1;
            int32_t i_4 = 0xffffffff;

            while (i_4)
            {
                bool cond_6_1 = 0 != *dstD9;
                dstD9 = &dstD9[1];
                i_4 -= 1;

                if (!cond_6_1)
                    break;
            }

            int32_t srcS4;
            int32_t dstD11;
            dstD11 = memcpy(dstD9 - 1, dstD7 - objC10, objC10 & 0xfffffffc);
            result += 1;
            memcpy(dstD11, srcS4, objC10 & 3);
        }

        char* dstD12 = ctxB1;
        int32_t i_5 = 0xffffffff;

        while (i_5)
        {
            bool cond_4_1 = 0 != *dstD12;
            dstD12 = &dstD12[1];
            i_5 -= 1;

            if (!cond_4_1)
                break;
        }

        ctxB = &ctxB1[~i_5 - 1];
    }

    if (!a6)
        return result;

    int32_t __saved_edi_1 = a3;
    return result + Light_RenderLensflare_11(a1, ctxB);
}

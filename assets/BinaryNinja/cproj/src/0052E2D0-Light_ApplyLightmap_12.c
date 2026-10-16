#include "gi_platform.h"
#include "0052E2D0-Light_ApplyLightmap_12.h"
int32_t Light_ApplyLightmap_12(int32_t a1 , float a2)

{
    int32_t valA = (*(int32_t*)(uintptr_t)(a2 + 0x4ab4));
    int32_t v_e8 = 0;

    if (valA > 0)
    {
        int32_t* srcS1 = a2 + 0x40;
        int32_t* v_ec_1 = srcS1;
        bool cond_0_1;

        do
        {
            int32_t i = 0;

            if (valA > 0)
            {
                do
                {
                    int32_t valA1 = srcS1[0xa];
                    srcS1[6] = 0;

                    if (!valA1)
                    {
                        Light_RenderLensflare_13(a2, srcS1);
                        int32_t v_104_1 = 0;
                        int32_t v_108_1 = 0;
                        int32_t v_10c_1 = 0;
                        char v_8;
                        Light_UpdateGlobalLight_12(a2, srcS1, v_8, a1, __return_addr);
                    }

                    i += 1;
                    srcS1 = &srcS1[0xc];
                } while (i < (*(int32_t*)(uintptr_t)(a2 + 0x4ab4)));
            }

            valA = (*(int32_t*)(uintptr_t)(a2 + 0x4ab4));
            srcS1 = &v_ec_1[0x60];
            cond_0_1 = v_e8 + 1 < valA;
            v_e8 += 1;
            v_ec_1 = srcS1;
        } while (cond_0_1);
    }

    int32_t v_ec_2 = 0;
    double v_c8;

    if ((*(int32_t*)(uintptr_t)(a2 + 0x4abc)) > 0)
    {
        int32_t* tmpD1 = a2 + 0xc48;
        bool cond_6_1;

        do
        {
            long double x87_r7_1 = *(tmpD1 - 8);
            int32_t v_d8_1 = *tmpD1;
            int32_t v_dc_1 = 0;
            long double x87_r6_1 = tmpD1[6];
            int32_t v_d4_1 = tmpD1[1];
            double* objC4 = &tmpD1[0xa];
            double* v_e8_1 = objC4;
            int32_t v_e4_1 = 4;
            bool cond_4_1;

            do
            {
                int32_t i_5 = 3;
                int32_t i_1;

                do
                {
                    long double f1_1 = *objC4;
                    x87_r7_1 - f1_1;

                    if (!(*(&((x87_r7_1 < f1_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_1, f1_1) ? 1 : 0) << 0xa
                            | (x87_r7_1 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                        x87_r7_1 = *objC4;

                    long double x87_r6_3 = objC4[1];
                    long double f3_1 = v_d8_1;
                    x87_r6_3 - f3_1;

                    if (*(&((x87_r6_3 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_3, f3_1) ? 1 : 0) << 0xa
                        | (x87_r6_3 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    {
                        v_d8_1 = objC4[1];
                        int32_t v_d4_2 = *(objC4 + 0xc);
                    }

                    objC4 = &objC4[6];
                    i_1 = i_5;
                    i_5 -= 1;
                } while (i_1 != 1);
                objC4 = &v_e8_1[0x18];
                cond_4_1 = v_e4_1 != 1;
                v_e8_1 = objC4;
                v_e4_1 -= 1;
            } while (cond_4_1);
            long double f7_1 = *(tmpD1 + 0x58);
            x87_r7_1 - f7_1;

            if (*(&((x87_r7_1 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f7_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == f7_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
                long double x87_r7_4 = x87_r6_1 + x87_r6_1 + v_d8_1;
                long double f8_1 = *(tmpD1 + 0x60);
                x87_r7_4 - f8_1;

                if (!(*(&((x87_r7_4 < f8_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_4, f8_1) ? 1 : 0) << 0xa
                    | (x87_r7_4 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    memcpy(&v_c8, &tmpD1[0x16], 0x30);
                    memcpy(&tmpD1[0x16], &tmpD1[0x5e], 0x30);
                    memcpy(&tmpD1[0x5e], &v_c8, 0x30);
                    char v_68;
                    memcpy(&v_68, &tmpD1[0x22], 0x30);
                    memcpy(&tmpD1[0x22], &tmpD1[0x6a], 0x30);
                    memcpy(&tmpD1[0x6a], &v_68, 0x30);
                    char v_98;
                    memcpy(&v_98, &tmpD1[0x46], 0x30);
                    memcpy(&tmpD1[0x46], &tmpD1[0x8e], 0x30);
                    memcpy(&tmpD1[0x8e], &v_98, 0x30);
                    char v_38;
                    memcpy(&v_38, &tmpD1[0x52], 0x30);
                    memcpy(&tmpD1[0x52], &tmpD1[0x9a], 0x30);
                    memcpy(&tmpD1[0x9a], &v_38, 0x30);
                }
            }

            tmpD1 = &tmpD1[0xc0];
            cond_6_1 = v_ec_2 + 1 < (*(int32_t*)(uintptr_t)(a2 + 0x4abc));
            v_ec_2 += 1;
        } while (cond_6_1);
    }

    int32_t v_ec_3 = 0;

    if ((*(int32_t*)(uintptr_t)(a2 + 0x4abc)) > 0)
    {
        int32_t* srcS11 = a2 + 0xc60;
        bool cond_3_1;

        do
        {
            int32_t v_e4_2 = 4;
            bool cond_2_1;

            do
            {
                int32_t i_6 = 4;
                int32_t i_2;

                do
                {
                    int32_t valA17 = *srcS11;
                    int32_t v_dc_2 = 0;
                    long double x87_r7_5 = (valA17 >> 1);
                    v_c8 = x87_r7_5 + *(srcS11 - 0x20);
                    double v_c0_1 = x87_r7_5 + *(srcS11 - 0x18);
                    double v_b8_1 = (*(int32_t*)(uintptr_t)(a2 + 0x4a94));
                    srcS11[-4] = Light_SampleLightmap_11(a2, &v_c8, valA17);
                    srcS11 = &srcS11[0xc];
                    i_2 = i_6;
                    i_6 -= 1;
                } while (i_2 != 1);
                cond_2_1 = v_e4_2 != 1;
                v_e4_2 -= 1;
            } while (cond_2_1);
            cond_3_1 = v_ec_3 + 1 < (*(int32_t*)(uintptr_t)(a2 + 0x4abc));
            v_ec_3 += 1;
        } while (cond_3_1);
    }

    int32_t result = (*(int32_t*)(uintptr_t)(a2 + 0x4abc));
    int32_t objC10 = 0;
    int32_t v_ec_4 = 0;

    if (result > 0)
    {
        int32_t* dstD10 = a2 + 0xc5c;
        int32_t* v_e4_3 = dstD10;

        do
        {
            int32_t v_dc_3 = 0;
            long double x87_r7_9 = dstD10[1];
            long double f0_1 = 8388608.0;
            x87_r7_9 - f0_1;

            if (*(&((x87_r7_9 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, f0_1) ? 1 : 0) << 0xa
                    | (x87_r7_9 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                (*(int32_t*)(uintptr_t)(a2 + 0x4ab8)) = *dstD10;

            int32_t i_3 = 0;
            int32_t* dstD11 = &dstD10[-1];
            int32_t i_4 = 0;

            do
            {
                for (int32_t j = 0; j < 4; )
                {
                    if (dstD11[4])
                        *dstD11 = 0;
                    else
                    {
                        Light_SampleLightmap_12(a2, objC10, i_3, j);
                        Light_UpdateGlobalLight_12(a2, &dstD11[-6], v_ec_4, i_4, j);
                        objC10 = v_ec_4;
                        i_3 = i_4;
                    }

                    j += 1;
                    dstD11 = &dstD11[0xc];
                }

                i_3 += 1;
                i_4 = i_3;
            } while (i_3 < 4);

            result = (*(int32_t*)(uintptr_t)(a2 + 0x4abc));
            objC10 += 1;
            dstD10 = &v_e4_3[0xc0];
            v_ec_4 = objC10;
            v_e4_3 = dstD10;
        } while (objC10 < result);
    }

    return result;
}

#include "ParticleSystemDynCubeObj_LoadParameters.h"
int32_t ParticleSystemDynCubeObj_LoadParameters(void* a1)

{
    if (*(a1 + 0xb4))
    {
        memcpy(a1 + 0x88, &g_bcab08, 0x18);
        *(a1 + 0xb4) = 0;
    }

    *(a1 + 0xa0) = g_bcab08 - *(a1 + 0x88);
    int32_t valA1 = *(a1 + 0xac);
    *(a1 + 0xa4) = g_bcab10 - *(a1 + 0x90);
    *(a1 + 0xa8) = g_bcab18 - *(a1 + 0x98);
    memcpy(a1 + 0x88, &g_bcab08, 0x18);

    if (valA1)
        valA1(a1);

    int32_t v_74 = 0;
    int32_t valA3 = ~*(a1 + 0x70);
    int32_t srcS1 = g_bcab10 & valA3;
    int32_t v_40 = srcS1;
    int32_t objC1 = g_bcab18 & valA3;
    int32_t result = *(a1 + 0x78);
    int32_t objC2 = *(a1 + 0x6c);
    int32_t result_1 = result;

    if (objC2 * 2 - 1 > 0)
    {
        int32_t objC3 = objC2 * result;
        int32_t v_7c_1 = objC3;
        int32_t dstD5 = -(result);
        int32_t v_80_1 = (g_bcab08 & valA3) + objC3;
        int32_t result_2 = objC2 * 2 - 1;

        while (true)
        {
            int32_t v_84_1 = objC3 + srcS1;
            int32_t dstD7 = -(result);
            int32_t v_64_1 = objC2 * 2 - 1;

            while (true)
            {
                int32_t valA4;
                int32_t tmpD6;
                tmpD6 = HIGHD(result);
                valA4 = LOWD(result);
                double v_58_1 = v_80_1;
                double v_50_3 = v_84_1;
                int32_t srcS5 = ((valA4 - tmpD6) >> 1) + objC3 + objC1;
                int32_t v_70_1 = srcS5;
                int32_t v_68_1 = objC2 * 2 - 1;
                bool cond_2_1;

                do
                {
                    int32_t v_1c_1 = *(&v_58_1 + 4);
                    long double x87_r7_11 = v_70_1;
                    float tmpD8 = *(a1 + 0x84);
                    int32_t v_18_1 = v_50_3;
                    int32_t v_20 = v_58_1;
                    v_70_1 = x87_r7_11;
                    double v_10_1 = x87_r7_11;
                    int32_t v_14_1 = *(&v_50_3 + 4);

                    if (Particle_FadeParticles_3(&v_20, tmpD8))
                    {
                        int32_t v_38 = v_58_1;
                        int32_t v_34_1 = *(&v_58_1 + 4);
                        int32_t v_2c_1 = *(&v_50_3 + 4);
                        int32_t v_30_1 = v_50_3;
                        int32_t v_28_1 = v_70_1;
                        int32_t v_6c;
                        int32_t v_24_1 = v_6c;
                        (*(a1 + 0xb0))(a1, &v_38);
                        v_74 += 1;
                    }

                    srcS5 += dstD7;
                    cond_2_1 = v_68_1 != 1;
                    v_70_1 = srcS5;
                    v_68_1 -= 1;
                } while (cond_2_1);
                bool cond_3_1 = v_64_1 != 1;
                v_84_1 += dstD7;
                v_64_1 -= 1;

                if (!cond_3_1)
                    break;

                objC3 = v_7c_1;
                result = result_1;
            }

            result = result_2 - 1;
            bool cond_4_1 = result_2 != 1;
            v_80_1 += dstD5;
            result_2 = result;

            if (!cond_4_1)
                break;

            srcS1 = v_40;
            objC3 = v_7c_1;
            result = result_1;
        }
    }

    return result;
}

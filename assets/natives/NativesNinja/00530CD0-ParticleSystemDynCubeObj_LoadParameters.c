#include "00530CD0-ParticleSystemDynCubeObj_LoadParameters.h"
/* 0x00530cd0 ParticleSystemDynCubeObj_LoadParameters full linked: callers=0 callees=3 */
int32_t sub_530cd0(void* a1)

{
    if (*(a1 + 0xb4))
    {
        memcpy(a1 + 0x88, &g_bcab08, 0x18);
        *(a1 + 0xb4) = 0;
    }

    *(a1 + 0xa0) = g_bcab08 - *(a1 + 0x88);
    int32_t eax_1 = *(a1 + 0xac);
    *(a1 + 0xa4) = g_bcab10 - *(a1 + 0x90);
    *(a1 + 0xa8) = g_bcab18 - *(a1 + 0x98);
    memcpy(a1 + 0x88, &g_bcab08, 0x18);

    if (eax_1)
        eax_1(a1);

    int32_t var_74 = 0;
    int32_t eax_3 = ~*(a1 + 0x70);
    int32_t esi_1 = g_bcab10 & eax_3;
    int32_t var_40 = esi_1;
    int32_t ecx_1 = g_bcab18 & eax_3;
    int32_t result = *(a1 + 0x78);
    int32_t ecx_2 = *(a1 + 0x6c);
    int32_t result_1 = result;

    if (ecx_2 * 2 - 1 > 0)
    {
        int32_t ecx_3 = ecx_2 * result;
        int32_t var_7c_1 = ecx_3;
        int32_t edi_5 = -(result);
        int32_t var_80_1 = (g_bcab08 & eax_3) + ecx_3;
        int32_t result_2 = ecx_2 * 2 - 1;

        while (true)
        {
            int32_t var_84_1 = ecx_3 + esi_1;
            int32_t edi_7 = -(result);
            int32_t var_64_1 = ecx_2 * 2 - 1;

            while (true)
            {
                int32_t eax_4;
                int32_t edx_6;
                edx_6 = HIGHD(result);
                eax_4 = LOWD(result);
                double var_58_1 = var_80_1;
                double var_50_3 = var_84_1;
                int32_t esi_5 = ((eax_4 - edx_6) >> 1) + ecx_3 + ecx_1;
                int32_t var_70_1 = esi_5;
                int32_t var_68_1 = ecx_2 * 2 - 1;
                bool cond:2_1;

                do
                {
                    int32_t var_1c_1 = *(&var_58_1 + 4);
                    long double x87_r7_11 = var_70_1;
                    float edx_8 = *(a1 + 0x84);
                    int32_t var_18_1 = var_50_3;
                    int32_t var_20 = var_58_1;
                    var_70_1 = x87_r7_11;
                    double var_10_1 = x87_r7_11;
                    int32_t var_14_1 = *(&var_50_3 + 4);

                    if (sub_530f20(&var_20, edx_8))
                    {
                        int32_t var_38 = var_58_1;
                        int32_t var_34_1 = *(&var_58_1 + 4);
                        int32_t var_2c_1 = *(&var_50_3 + 4);
                        int32_t var_30_1 = var_50_3;
                        int32_t var_28_1 = var_70_1;
                        int32_t var_6c;
                        int32_t var_24_1 = var_6c;
                        (*(a1 + 0xb0))(a1, &var_38);
                        var_74 += 1;
                    }

                    esi_5 += edi_7;
                    cond:2_1 = var_68_1 != 1;
                    var_70_1 = esi_5;
                    var_68_1 -= 1;
                } while (cond:2_1);
                bool cond:3_1 = var_64_1 != 1;
                var_84_1 += edi_7;
                var_64_1 -= 1;

                if (!cond:3_1)
                    break;

                ecx_3 = var_7c_1;
                result = result_1;
            }

            result = result_2 - 1;
            bool cond:4_1 = result_2 != 1;
            var_80_1 += edi_5;
            result_2 = result;

            if (!cond:4_1)
                break;

            esi_1 = var_40;
            ecx_3 = var_7c_1;
            result = result_1;
        }
    }

    return result;
}

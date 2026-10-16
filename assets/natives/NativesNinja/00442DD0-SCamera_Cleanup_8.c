#include "00442DD0-SCamera_Cleanup_8.h"
/* 0x00442dd0 SCamera_Cleanup_8 full linked: callers=0 callees=15 */
void* sub_442dd0(double* a1, float a2)

{
    void* result = a1[0x4ba];

    if (!*(result + 0x170))
    {
        double var_264;
        WeaponType_UpdateAnim(&var_264, a1, 1);
        long double x87_r7_2 = var_264 + a1[4];
        float var_24c;
        memcpy(&var_24c, &a1[0xe], 0x28);
        var_264 = x87_r7_2;
        double var_25c;
        double var_25c_1 = var_25c + a1[5];
        double var_254;
        double var_254_1 = var_254 + a1[6];
        float var_2c4;
        float var_2a0;
        float var_298;
        sub_4b3c50(&var_24c, &var_2a0, &var_298, &var_2c4);
        double* var_1b4_1 = a1;
        var_2a0 = 0f;
        float var_2c8 = *(result + 0x156);
        var_298 = 0f;
        long double x87_r7_7 = var_2c8;
        void var_128;
        void* ebx_1 = &var_128;
        var_2c8 = 1.68155816e-44f;
        long double x87_r7_8 = x87_r7_7 * 0.0174532924f;
        var_2c4 = x87_r7_8 * 0.5f + var_2c4;
        float var_2c0 = x87_r7_8 * 0.0833333358f;
        int32_t var_294;

        while (true)
        {
            float edx_2 = var_2c4;
            float eax_1 = var_298;
            double var_27c;
            memcpy(&var_27c, &var_264, 0x18);
            int32_t var_2b8 = 0;
            int32_t var_2b4_1 = 0;
            int32_t var_2a8_1 = 0;
            int32_t var_2a4_1 = 0;
            double var_2b0_1 = *(result + 0x158) * 4096f;
            sub_4b38e0(&var_24c, var_2a0, eax_1, edx_2);
            float var_248;
            float var_244;
            long double x87_r7_15 = var_244 * var_2a8_1 + var_248 * var_2b0_1 + var_24c * var_2b8;
            double var_1b0 = x87_r7_15;
            float var_240;
            float var_23c;
            float var_238;
            double var_1a8 = var_238 * var_2a8_1 + var_23c * var_2b0_1 + var_240 * var_2b8;
            float var_234;
            float var_230;
            float var_22c;
            double var_1a0_1 = var_22c * var_2a8_1 + var_230 * var_2b0_1 + var_234 * var_2b8;
            long double x87_r6_17 = var_27c + x87_r7_15;
            memcpy(&var_2b8, &var_1b0, 0x18);
            var_2b8 = x87_r6_17;
            double var_274;
            double var_2b0_2 = var_274 + var_2b0_1;
            double var_26c;
            var_2a8_1 = var_26c + var_2a8_1;

            while (true)
            {
                char eax_2 = Level_LoadObjects_4();
                void var_1b8;
                void var_198;
                sub_4cc2a0(Level_StartMission_4(), &var_198, &var_27c, &var_2b8, 1, eax_2,
                    &var_1b8, 0xffffffff);
                int32_t var_140;

                if (!var_140)
                    break;

                double var_190;
                float* var_14c;
                int32_t var_144;

                if (var_144 && var_14c)
                {
                    long double x87_r7_21 = *var_14c;
                    long double temp1_1 = 0f;
                    x87_r7_21 - temp1_1;

                    if (!(*(&((x87_r7_21 < temp1_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_21, temp1_1) ? 1 : 0) << 0xa
                        | (x87_r7_21 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    {
                        var_294 = var_190 - var_27c;
                        int32_t var_28c;
                        double var_188;
                        var_28c = var_188 - var_274;
                        int32_t var_284;
                        double var_180;
                        var_284 = var_180 - var_26c;
                        sub_4b3100(&var_294);
                        var_28c = var_28c * 20.48;
                        var_284 = var_284 * 20.48;
                        var_27c = var_294 * 20.48 + var_190;
                        var_274 = var_28c + var_188;
                        var_26c = var_284 + var_180;
                        continue;
                    }
                }

                memcpy(&var_2b8, &var_190, 0x18);
                break;
            }

            float eax_8 = var_2c8;
            void* edi_1 = ebx_1;
            ebx_1 += 0x18;
            var_2c4 = var_2c4 - var_2c0;
            memcpy(edi_1, &var_2b8, 0x18);
            var_2c8 = eax_8 - 1;

            if (eax_8 == 1)
                break;
        }

        g_a84a50 = 0;
        g_a84a58 = 0;
        var_294 = 0;
        float var_224;
        int32_t* var_284_1 = &var_224;
        int32_t var_290_1 = 0x400c0000;
        int32_t var_28c_1 = 0xffffffff;
        int32_t var_288_1 = 3;
        sub_467620(&var_2c0, &var_2c8, &var_264, a2);
        var_224 = var_2c0;
        int32_t var_2bc;
        int32_t var_220_1 = var_2bc;
        int32_t var_21c_1 = 0x44051eb8;
        int32_t var_20c_1 = 0x3f800000;
        int32_t var_208_1 = 0;
        int32_t var_204_1 = 0;
        int32_t var_210_1 = 0x3eb33333;
        int32_t var_218_1 = 0;
        int32_t var_214_1 = 0;
        void var_110;
        void* esi_2 = &var_110;
        int32_t i_1 = 0xb;
        int32_t i;

        do
        {
            sub_467620(&var_2c0, &var_2c8, esi_2 - 0x18, a2);
            float var_200_1 = var_2c0;
            int32_t var_1fc_1 = var_2bc;
            int32_t var_1f8_1 = 0x44051eb8;
            int32_t var_1e8_1 = 0x3f800000;
            int32_t var_1e4_1 = 0;
            int32_t var_1e0_1 = 0;
            int32_t var_1ec_1 = 0x3eb33333;
            int32_t var_1f4_1 = 0;
            int32_t var_1f0_1 = 0;
            sub_467620(&var_2c0, &var_2c8, esi_2, a2);
            float var_1dc_1 = var_2c0;
            int32_t eax_13 = g_a84a54;
            int32_t var_1d8_1 = var_2bc;
            int32_t var_1d4_1 = 0x44051eb8;
            int32_t var_1c4_1 = 0x3f800000;
            int32_t var_1c0_1 = 0;
            int32_t var_1bc_1 = 0;
            int32_t var_1c8 = 0x3eb33333;
            int32_t var_1d0_1 = 0;
            int32_t var_1cc_1 = 0;
            result = (*((eax_13 << 2) + &g_a94e84))(&var_294);
            esi_2 += 0x18;
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    return result;
}

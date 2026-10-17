// Original IGI.EXE function: SCamera_Cleanup_8 (VA 0x00442DD0; static CFG gate PASS, CFG score 0.911).
#include "SCamera_Cleanup_8.h"
void* SCamera_Cleanup_8(double* a1, float a2)

{
    void* result = a1[0x4ba];

    if (!*(result + 0x170))
    {
        double v_264;
        WeaponType_UpdateAnim(&v_264, a1, 1);
        long double x87_r7_2 = v_264 + a1[4];
        float v_24c;
        memcpy(&v_24c, &a1[0xe], 0x28);
        v_264 = x87_r7_2;
        double v_25c;
        double v_25c_1 = v_25c + a1[5];
        double v_254;
        double v_254_1 = v_254 + a1[6];
        float v_2c4;
        float v_2a0;
        float v_298;
        Sys_Atan2UndefinedInOrig(&v_24c, &v_2a0, &v_298, &v_2c4);
        double* v_1b4_1 = a1;
        v_2a0 = 0f;
        float v_2c8 = *(result + 0x156);
        v_298 = 0f;
        long double x87_r7_7 = v_2c8;
        void v_128;
        void* ctxB1 = &v_128;
        v_2c8 = 1.68155816e-44f;
        long double x87_r7_8 = x87_r7_7 * 0.0174532924f;
        v_2c4 = x87_r7_8 * 0.5f + v_2c4;
        float v_2c0 = x87_r7_8 * 0.0833333358f;
        int32_t v_294;

        while (true)
        {
            float tmpD2 = v_2c4;
            float valA1 = v_298;
            double v_27c;
            memcpy(&v_27c, &v_264, 0x18);
            int32_t v_2b8 = 0;
            int32_t v_2b4_1 = 0;
            int32_t v_2a8_1 = 0;
            int32_t v_2a4_1 = 0;
            double v_2b0_1 = *(result + 0x158) * 4096f;
            Sys_ReadFileBlock_12(&v_24c, v_2a0, valA1, tmpD2);
            float v_248;
            float v_244;
            long double x87_r7_15 = v_244 * v_2a8_1 + v_248 * v_2b0_1 + v_24c * v_2b8;
            double v_1b0 = x87_r7_15;
            float v_240;
            float v_23c;
            float v_238;
            double v_1a8 = v_238 * v_2a8_1 + v_23c * v_2b0_1 + v_240 * v_2b8;
            float v_234;
            float v_230;
            float v_22c;
            double v_1a0_1 = v_22c * v_2a8_1 + v_230 * v_2b0_1 + v_234 * v_2b8;
            long double x87_r6_17 = v_27c + x87_r7_15;
            memcpy(&v_2b8, &v_1b0, 0x18);
            v_2b8 = x87_r6_17;
            double v_274;
            double v_2b0_2 = v_274 + v_2b0_1;
            double v_26c;
            v_2a8_1 = v_26c + v_2a8_1;

            while (true)
            {
                char valA2 = Level_LoadObjects_4();
                void v_1b8;
                void v_198;
                DynObj_FindSymbol_11(Level_StartMission_4(), &v_198, &v_27c, &v_2b8, 1, valA2,
                    &v_1b8, 0xffffffff);
                int32_t v_140;

                if (!v_140)
                    break;

                double v_190;
                float* v_14c;
                int32_t v_144;

                if (v_144 && v_14c)
                {
                    long double x87_r7_21 = *v_14c;
                    long double f1_1 = 0f;
                    x87_r7_21 - f1_1;

                    if (!(*(&((x87_r7_21 < f1_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_21, f1_1) ? 1 : 0) << 0xa
                        | (x87_r7_21 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    {
                        v_294 = v_190 - v_27c;
                        int32_t v_28c;
                        double v_188;
                        v_28c = v_188 - v_274;
                        int32_t v_284;
                        double v_180;
                        v_284 = v_180 - v_26c;
                        Sys_FreeMemory_11(&v_294);
                        v_28c = v_28c * 20.48;
                        v_284 = v_284 * 20.48;
                        v_27c = v_294 * 20.48 + v_190;
                        v_274 = v_28c + v_188;
                        v_26c = v_284 + v_180;
                        continue;
                    }
                }

                memcpy(&v_2b8, &v_190, 0x18);
                break;
            }

            float valA8 = v_2c8;
            void* dstD1 = ctxB1;
            ctxB1 += 0x18;
            v_2c4 = v_2c4 - v_2c0;
            memcpy(dstD1, &v_2b8, 0x18);
            v_2c8 = valA8 - 1;

            if (valA8 == 1)
                break;
        }

        g_a84a50 = 0;
        g_a84a58 = 0;
        v_294 = 0;
        float v_224;
        int32_t* v_284_1 = &v_224;
        int32_t v_290_1 = 0x400c0000;
        int32_t v_28c_1 = 0xffffffff;
        int32_t v_288_1 = 3;
        AI_CheckSector_24(&v_2c0, &v_2c8, &v_264, a2);
        v_224 = v_2c0;
        int32_t v_2bc;
        int32_t v_220_1 = v_2bc;
        int32_t v_21c_1 = 0x44051eb8;
        int32_t v_20c_1 = 0x3f800000;
        int32_t v_208_1 = 0;
        int32_t v_204_1 = 0;
        int32_t v_210_1 = 0x3eb33333;
        int32_t v_218_1 = 0;
        int32_t v_214_1 = 0;
        void v_110;
        void* srcS2 = &v_110;
        int32_t i_1 = 0xb;
        int32_t i;

        do
        {
            AI_CheckSector_24(&v_2c0, &v_2c8, srcS2 - 0x18, a2);
            float v_200_1 = v_2c0;
            int32_t v_1fc_1 = v_2bc;
            int32_t v_1f8_1 = 0x44051eb8;
            int32_t v_1e8_1 = 0x3f800000;
            int32_t v_1e4_1 = 0;
            int32_t v_1e0_1 = 0;
            int32_t v_1ec_1 = 0x3eb33333;
            int32_t v_1f4_1 = 0;
            int32_t v_1f0_1 = 0;
            AI_CheckSector_24(&v_2c0, &v_2c8, srcS2, a2);
            float v_1dc_1 = v_2c0;
            int32_t valA13 = g_a84a54;
            int32_t v_1d8_1 = v_2bc;
            int32_t v_1d4_1 = 0x44051eb8;
            int32_t v_1c4_1 = 0x3f800000;
            int32_t v_1c0_1 = 0;
            int32_t v_1bc_1 = 0;
            int32_t v_1c8 = 0x3eb33333;
            int32_t v_1d0_1 = 0;
            int32_t v_1cc_1 = 0;
            result = (*((valA13 << 2) + &g_a94e84))(&v_294);
            srcS2 += 0x18;
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    return result;
}

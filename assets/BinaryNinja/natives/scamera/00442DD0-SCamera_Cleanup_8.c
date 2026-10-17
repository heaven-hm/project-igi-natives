// IGI native provenance: SCamera_Cleanup_8 - 0x00442DD0 - CFG score 91.1% (PASS; structural only); runtime behavior not verified.
// Evidence: 00442DD0-SCamera_Cleanup_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SCamera_Cleanup_8.h"
void* SCamera_Cleanup_8(double* context, float param_2)

{
    void* result = context[0x4ba];

    if (!*(result + 0x170))
    {
        double item_264;
        WeaponType_UpdateAnim(&item_264, context, 1);
        long double fpu_val_7_2 = item_264 + context[4];
        float item_24c;
        memcpy(&item_24c, &context[0xe], 0x28);
        item_264 = fpu_val_7_2;
        double item_25c;
        double item_25c_1 = item_25c + context[5];
        double item_254;
        double item_254_1 = item_254 + context[6];
        float item_2c4;
        float item_2a0;
        float item_298;
        Sys_Atan2UndefinedInOrig(&item_24c, &item_2a0, &item_298, &item_2c4);
        double* item_1b4_1 = context;
        item_2a0 = 0.0f;
        float item_2c8 = *(result + 0x156);
        item_298 = 0.0f;
        long double fpu_val_7_7 = item_2c8;
        void item_128;
        void* context_1 = &item_128;
        item_2c8 = 1.68155816e-44.0f;
        long double fpu_val_7_8 = fpu_val_7_7 * 0.0174532924f;
        item_2c4 = fpu_val_7_8 * 0.5f + item_2c4;
        float item_2c0 = fpu_val_7_8 * 0.0833333358f;
        int32_t item_294;

        while (true)
        {
            float temp_2 = item_2c4;
            float data_1 = item_298;
            double item_27c;
            memcpy(&item_27c, &item_264, 0x18);
            int32_t item_2b8 = 0;
            int32_t item_2b4_1 = 0;
            int32_t item_2a8_1 = 0;
            int32_t item_2a4_1 = 0;
            double item_2b0_1 = *(result + 0x158) * 4096.0f;
            Sys_ReadFileBlock_12(&item_24c, item_2a0, data_1, temp_2);
            float item_248;
            float item_244;
            long double fpu_val_7_15 = item_244 * item_2a8_1 + item_248 * item_2b0_1 + item_24c * item_2b8;
            double item_1b0 = fpu_val_7_15;
            float item_240;
            float item_23c;
            float item_238;
            double item_1a8 = item_238 * item_2a8_1 + item_23c * item_2b0_1 + item_240 * item_2b8;
            float item_234;
            float item_230;
            float item_22c;
            double item_1a0_1 = item_22c * item_2a8_1 + item_230 * item_2b0_1 + item_234 * item_2b8;
            long double fpu_val_6_17 = item_27c + fpu_val_7_15;
            memcpy(&item_2b8, &item_1b0, 0x18);
            item_2b8 = fpu_val_6_17;
            double item_274;
            double item_2b0_2 = item_274 + item_2b0_1;
            double item_26c;
            item_2a8_1 = item_26c + item_2a8_1;

            while (true)
            {
                char data_2 = Level_LoadObjects_4();
                void item_1b8;
                void item_198;
                DynObj_FindSymbol_11(Level_StartMission_4(), &item_198, &item_27c, &item_2b8, 1, data_2,
                    &item_1b8, 0xffffffff);
                int32_t item_140;

                if (!item_140)
                    break;

                double item_190;
                float* item_14c;
                int32_t item_144;

                if (item_144 && item_14c)
                {
                    long double fpu_val_7_21 = *item_14c;
                    long double f1_1 = 0.0f;
                    fpu_val_7_21 - f1_1;

                    if (!(*(&((fpu_val_7_21 < f1_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_21, f1_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_21 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    {
                        item_294 = item_190 - item_27c;
                        int32_t item_28c;
                        double item_188;
                        item_28c = item_188 - item_274;
                        int32_t item_284;
                        double item_180;
                        item_284 = item_180 - item_26c;
                        Sys_FreeMemory_11(&item_294);
                        item_28c = item_28c * 20.48;
                        item_284 = item_284 * 20.48;
                        item_27c = item_294 * 20.48 + item_190;
                        item_274 = item_28c + item_188;
                        item_26c = item_284 + item_180;
                        continue;
                    }
                }

                memcpy(&item_2b8, &item_190, 0x18);
                break;
            }

            float data_8 = item_2c8;
            void* dest_1 = context_1;
            context_1 += 0x18;
            item_2c4 = item_2c4 - item_2c0;
            memcpy(dest_1, &item_2b8, 0x18);
            item_2c8 = data_8 - 1;

            if (data_8 == 1)
                break;
        }

        g_a84a50 = 0;
        g_a84a58 = 0;
        item_294 = 0;
        float item_224;
        int32_t* item_284_1 = &item_224;
        int32_t item_290_1 = 0x400c0000;
        int32_t item_28c_1 = 0xffffffff;
        int32_t item_288_1 = 3;
        AI_CheckSector_24(&item_2c0, &item_2c8, &item_264, param_2);
        item_224 = item_2c0;
        int32_t item_2bc;
        int32_t item_220_1 = item_2bc;
        int32_t item_21c_1 = 0x44051eb8;
        int32_t item_20c_1 = 0x3f800000;
        int32_t item_208_1 = 0;
        int32_t item_204_1 = 0;
        int32_t item_210_1 = 0x3eb33333;
        int32_t item_218_1 = 0;
        int32_t item_214_1 = 0;
        void item_110;
        void* source_2 = &item_110;
        int32_t i_1 = 0xb;
        int32_t i;

        do
        {
            AI_CheckSector_24(&item_2c0, &item_2c8, source_2 - 0x18, param_2);
            float item_200_1 = item_2c0;
            int32_t item_1fc_1 = item_2bc;
            int32_t item_1f8_1 = 0x44051eb8;
            int32_t item_1e8_1 = 0x3f800000;
            int32_t item_1e4_1 = 0;
            int32_t item_1e0_1 = 0;
            int32_t item_1ec_1 = 0x3eb33333;
            int32_t item_1f4_1 = 0;
            int32_t item_1f0_1 = 0;
            AI_CheckSector_24(&item_2c0, &item_2c8, source_2, param_2);
            float item_1dc_1 = item_2c0;
            int32_t data_13 = g_a84a54;
            int32_t item_1d8_1 = item_2bc;
            int32_t item_1d4_1 = 0x44051eb8;
            int32_t item_1c4_1 = 0x3f800000;
            int32_t item_1c0_1 = 0;
            int32_t item_1bc_1 = 0;
            int32_t item_1c8 = 0x3eb33333;
            int32_t item_1d0_1 = 0;
            int32_t item_1cc_1 = 0;
            result = (*((data_13 << 2) + &g_a94e84))(&item_294);
            source_2 += 0x18;
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    return result;
}

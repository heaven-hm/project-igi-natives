// Original IGI.EXE function: Soldier_DeathFallSolver (VA 0x0045D5B0; static CFG gate PASS, CFG score 0.882).
#include "Soldier_DeathFallSolver.h"
double* Soldier_DeathFallSolver(double* context, void* param_2, int32_t* param_3, int32_t* param_4)

{
    int32_t item_68c = 0;
    int32_t* item_690 = param_4;
    int32_t i_1 = 0xffffffff;
    float item_624;
    Render_DrawLightmapMesh_11(&item_624, nullptr, param_2 + 0x68, item_690, item_68c);
    float item_61c = 0.0f;
    float item_66c;
    Render_DrawLightmapMesh_11(&item_66c, nullptr, param_2 + 0x68, param_4, Render_SkinBones_11(param_3, param_4) - 1);
    long double fpu_val_7_1 = item_66c - item_624;
    float item_668;
    float item_620;
    float item_668_1 = item_668 - item_620;
    long double fpu_val_6_3 = -(item_61c);
    long double fpu5 = item_668_1;
    long double fpu_val_2_4 = sqrtl(fpu_val_6_3 * fpu_val_6_3 + fpu_val_7_1 * fpu_val_7_1 + fpu5 * fpu5);
    long double f0 = 0.0f;
    fpu_val_2_4 - f0;

    if (!(*(&((fpu_val_2_4 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_2_4, f0) ? 1 : 0) << 0xa
        | (fpu_val_2_4 == f0 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41))
    {
        long double fpu_val_4_3 = fpu_val_2_4 + 4096.0f;
        float data_5 = *(param_2 + 0x50c);
        float item_5d8;
        item_690 = &item_5d8;
        long double fpu_val_5_3 = fpu_val_4_3 / fpu_val_4_3;
        item_66c = fpu_val_5_3 * fpu_val_7_1;
        float item_668_2 = fpu_val_5_3 * item_668_1;
        long double fpu_val_5_4 = fpu_val_5_3 * fpu_val_6_3;
        float item_664_1 = fpu_val_5_4;
        long double fpu_val_6_6 = item_668_2;
        long double fpu_val_5_5 = item_66c;
        float item_644_1 = sqrtl(fpu_val_5_4 * fpu_val_5_4 + fpu_val_5_5 * fpu_val_5_5 + fpu_val_6_6 * fpu_val_6_6);
        double item_65c = item_66c;
        double item_654_1 = item_668_2;
        double item_64c_1 = fpu_val_5_4;
        Sys_DispatchOpcode_12(item_690, data_5);
        float item_670_1 = -3276.80005f;
        int32_t data_6 = 0;
        float item_5d4;
        float item_5d0;
        double item_640 = item_5d0 * item_64c_1 + item_5d4 * item_654_1 + item_5d8 * item_65c;
        float item_5cc;
        float item_5c8;
        float item_5c4;
        double item_638_1 = item_5c4 * item_64c_1 + item_5c8 * item_654_1 + item_5cc * item_65c;
        float item_5c0;
        float item_5bc;
        float item_5b8;
        double item_630_1 = item_5b8 * item_64c_1 + item_5bc * item_654_1 + item_5c0 * item_65c;
        int32_t entity_1 = memcpy(&item_65c, &item_640, 0x18);
        int32_t item_678_1 = 3;
        double item_608_1;
        void item_5b0;

        while (true)
        {
            int32_t context_1 = data_6;
            int32_t item_660_1 = 0xffffffff;
            bool flag_0_1;

            do
            {
                int32_t item_68c_2 = entity_1;
                float item_68c_3 = item_660_1 * 22.0f * 0.0174532924f;
                float item_600;
                item_690 = &item_600;
                Sys_DispatchOpcode_12(item_690, item_68c_3);
                double* data_8 = &item_690 + context_1 + 0xe8;
                long double fpu_val_6_25 = item_600 * item_640;
                memcpy(&item_690 + context_1 + 0x1c0, param_2 + 0x20, 0x18);
                context_1 += 0x18;
                float item_5f4;
                float item_5f0;
                float item_5ec;
                double item_610_1 = item_5ec * item_630_1 + item_5f0 * item_638_1 + item_5f4 * item_640;
                entity_1 = memcpy(data_8, param_2 + 0x20, 0x18);
                float item_5e8;
                float item_5e4;
                float item_5e0;
                item_608_1 = item_5e0 * item_630_1 + item_5e4 * item_638_1 + item_5e8 * item_640;
                void item_4d8;
                *(&item_4d8 + context_1) = item_670_1 + *(&item_4d8 + context_1);
                float item_5fc;
                float item_5f8;
                *data_8 = item_5f8 * item_630_1 + item_5fc * item_638_1 + fpu_val_6_25 + *data_8;
                flag_0_1 = item_660_1 + 1 < 2;
                item_660_1 += 1;
                *(&item_5b8 + context_1) = item_610_1 + *(&item_5b8 + context_1);
                *(&item_5b0 + context_1) = item_670_1 + *(&item_5b0 + context_1) + item_608_1;
            } while (flag_0_1);
            int32_t f1_1 = item_678_1;
            item_678_1 -= 1;
            item_670_1 = item_670_1 + 1638.40002f;

            if (f1_1 == 1)
                break;

            data_6 += 0x48;
        }

        int32_t item_68c_4 = 0xffffffff;
        item_690 = &item_5b0;
        void* item_5ac_1 = param_2;
        char data_12 = Level_LoadObjects_4();
        double item_5a8[0x1a];
        double item_4d0;
        void item_3f8;
        DynObj_FindSymbol_11(Level_StartMission_4(), &item_3f8, &item_4d0, &item_5a8, 9, data_12, item_690,
            item_68c_4);
        int32_t i = 0;
        item_398;
        double* temp_2 = &item_398;

        do
        {
            if (temp_2[-1])
            {
                int32_t i_2 = i_1;
                long double fpu_val_7_31;
                long double f2_1;

                if (i_2 != 0xffffffff)
                {
                    fpu_val_7_31 = *temp_2;
                    f2_1 = *(&item_398 + i_2 * 0x70);
                    fpu_val_7_31 - f2_1;
                }

                if (i_2 == 0xffffffff || *(&((fpu_val_7_31 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_31, f2_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_31 == f2_1 ? 1 : 0) << 0xe) + 1) & 1)
                    i_1 = i;
            }

            i += 1;
            temp_2 = &temp_2[0xe];
        } while (i < 9);

        int32_t i_3 = i_1;

        if (i_3 >= 0)
        {
            item_608_1 = 0;
            *(&item_608_1 + 4) = 0;
            int64_t item_3f0[0x7d];
            double item_618 = (&item_4d0)[i_3 * 3] - item_3f0[i_3 * 0xe];
            int64_t item_4c8[0x1a];
            item_3e8;
            long double fpu_val_7_35 = item_4c8[i_3 * 3] - *(&item_3e8 + i_3 * 0x70);
            item_690 = param_3;
            double item_610_2 = fpu_val_7_35;
            float item_678_2 = Render_SetupLighting_11(item_690, param_4) * 30.0f;

            if (Sys_PopStack_11(&item_618))
            {
                long double fpu_val_7_39 = 1.0 / item_678_2;
                memcpy(context, &item_640, 0x18);
                *context = -((fpu_val_7_39 * *context));
                context[1] = -((fpu_val_7_39 * context[1]));
                context[2] = -((fpu_val_7_39 * context[2]));
                return context;
            }

            long double fp0_2 = Sys_OpenFileStream_11(&item_618);
            long double fpu_val_6_42 = item_644_1;
            fp0_2 - fpu_val_6_42;

            if (*(&((fp0_2 < fpu_val_6_42 ? 1 : 0) << 8 | (FCMP_UO(fp0_2, fpu_val_6_42) ? 1 : 0) << 0xa
                | (fp0_2 == fpu_val_6_42 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                long double fpu_val_7_45 = 1.0 - fp0_2 / item_644_1;
                item_65c = fpu_val_7_45 * item_640;
                double item_654_2 = fpu_val_7_45 * item_654_1;
                double item_64c_2 = fpu_val_7_45 * item_64c_1;
                long double fpu_val_7_48 = 1.0 / item_678_2;
                memcpy(context, &item_65c, 0x18);
                *context = -((fpu_val_7_48 * *context));
                context[1] = -((fpu_val_7_48 * context[1]));
                context[2] = -((fpu_val_7_48 * context[2]));
                return context;
            }
        }
    }

    memset(context, 0, 0x18);
    return context;
}

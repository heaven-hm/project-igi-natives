#include "gi_platform.h"
#include "0045D5B0-Soldier_DeathFallSolver.h"
double* Soldier_DeathFallSolver(double* a1, void* a2, int32_t* a3, int32_t* a4)

{
    int32_t v_68c = 0;
    int32_t* v_690 = a4;
    int32_t i_1 = 0xffffffff;
    float v_624;
    Render_DrawLightmapMesh_11(&v_624, nullptr, a2 + 0x68, v_690, v_68c);
    float v_61c = 0.0f;
    float v_66c;
    Render_DrawLightmapMesh_11(&v_66c, nullptr, a2 + 0x68, a4, Render_SkinBones_11(a3, a4) - 1);
    long double x87_r7_1 = v_66c - v_624;
    float v_668;
    float v_620;
    float v_668_1 = v_668 - v_620;
    long double x87_r6_3 = -(v_61c);
    long double fpu5 = v_668_1;
    long double x87_r2_4 = sqrtl(x87_r6_3 * x87_r6_3 + x87_r7_1 * x87_r7_1 + fpu5 * fpu5);
    long double f0 = 0.0f;
    x87_r2_4 - f0;

    if (!(*(&((x87_r2_4 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r2_4, f0) ? 1 : 0) << 0xa
        | (x87_r2_4 == f0 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41))
    {
        long double x87_r4_3 = x87_r2_4 + 4096.0f;
        float valA5 = (*(int32_t*)(uintptr_t)(a2 + 0x50c));
        float v_5d8;
        v_690 = &v_5d8;
        long double x87_r5_3 = x87_r4_3 / x87_r4_3;
        v_66c = x87_r5_3 * x87_r7_1;
        float v_668_2 = x87_r5_3 * v_668_1;
        long double x87_r5_4 = x87_r5_3 * x87_r6_3;
        float v_664_1 = x87_r5_4;
        long double x87_r6_6 = v_668_2;
        long double x87_r5_5 = v_66c;
        float v_644_1 = sqrtl(x87_r5_4 * x87_r5_4 + x87_r5_5 * x87_r5_5 + x87_r6_6 * x87_r6_6);
        double v_65c = v_66c;
        double v_654_1 = v_668_2;
        double v_64c_1 = x87_r5_4;
        Sys_DispatchOpcode_12(v_690, valA5);
        float v_670_1 = -3276.80005.0f;
        int32_t valA6 = 0;
        float v_5d4;
        float v_5d0;
        double v_640 = v_5d0 * v_64c_1 + v_5d4 * v_654_1 + v_5d8 * v_65c;
        float v_5cc;
        float v_5c8;
        float v_5c4;
        double v_638_1 = v_5c4 * v_64c_1 + v_5c8 * v_654_1 + v_5cc * v_65c;
        float v_5c0;
        float v_5bc;
        float v_5b8;
        double v_630_1 = v_5b8 * v_64c_1 + v_5bc * v_654_1 + v_5c0 * v_65c;
        int32_t objC1 = memcpy(&v_65c, &v_640, 0x18);
        int32_t v_678_1 = 3;
        double v_608_1;
        char v_5b0;

        while (true)
        {
            int32_t ctxB1 = valA6;
            int32_t v_660_1 = 0xffffffff;
            bool cond_0_1;

            do
            {
                int32_t v_68c_2 = objC1;
                float v_68c_3 = v_660_1 * 22.0f * 0.0174532924.0f;
                float v_600;
                v_690 = &v_600;
                Sys_DispatchOpcode_12(v_690, v_68c_3);
                double* valA8 = &v_690 + ctxB1 + 0xe8;
                long double x87_r6_25 = v_600 * v_640;
                memcpy(&v_690 + ctxB1 + 0x1c0, a2 + 0x20, 0x18);
                ctxB1 += 0x18;
                float v_5f4;
                float v_5f0;
                float v_5ec;
                double v_610_1 = v_5ec * v_630_1 + v_5f0 * v_638_1 + v_5f4 * v_640;
                objC1 = memcpy(valA8, a2 + 0x20, 0x18);
                float v_5e8;
                float v_5e4;
                float v_5e0;
                v_608_1 = v_5e0 * v_630_1 + v_5e4 * v_638_1 + v_5e8 * v_640;
                char v_4d8;
                *(&v_4d8 + ctxB1) = v_670_1 + *(&v_4d8 + ctxB1);
                float v_5fc;
                float v_5f8;
                *valA8 = v_5f8 * v_630_1 + v_5fc * v_638_1 + x87_r6_25 + *valA8;
                cond_0_1 = v_660_1 + 1 < 2;
                v_660_1 += 1;
                *(&v_5b8 + ctxB1) = v_610_1 + *(&v_5b8 + ctxB1);
                *(&v_5b0 + ctxB1) = v_670_1 + *(&v_5b0 + ctxB1) + v_608_1;
            } while (cond_0_1);
            int32_t f1_1 = v_678_1;
            v_678_1 -= 1;
            v_670_1 = v_670_1 + 1638.40002.0f;

            if (f1_1 == 1)
                break;

            valA6 += 0x48;
        }

        int32_t v_68c_4 = 0xffffffff;
        v_690 = &v_5b0;
        void* v_5ac_1 = a2;
        char valA12 = Level_LoadObjects_4();
        double v_5a8[0x1a];
        double v_4d0;
        char v_3f8;
        DynObj_FindSymbol_11(Level_StartMission_4(), &v_3f8, &v_4d0, &v_5a8, 9, valA12, v_690,
            v_68c_4);
        int32_t i = 0;
char v_398;
        double* tmpD2 = &v_398;

        do
        {
            if (tmpD2[-1])
            {
                int32_t i_2 = i_1;
                long double x87_r7_31;
                long double f2_1;

                if (i_2 != 0xffffffff)
                {
                    x87_r7_31 = *tmpD2;
                    f2_1 = *(&v_398 + i_2 * 0x70);
                    x87_r7_31 - f2_1;
                }

                if (i_2 == 0xffffffff || *(&((x87_r7_31 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_31, f2_1) ? 1 : 0) << 0xa
                        | (x87_r7_31 == f2_1 ? 1 : 0) << 0xe) + 1) & 1)
                    i_1 = i;
            }

            i += 1;
            tmpD2 = &tmpD2[0xe];
        } while (i < 9);

        int32_t i_3 = i_1;

        if (i_3 >= 0)
        {
            v_608_1 = 0;
            *(&v_608_1 + 4) = 0;
            int64_t v_3f0[0x7d];
            double v_618 = (&v_4d0)[i_3 * 3] - v_3f0[i_3 * 0xe];
            int64_t v_4c8[0x1a];
char v_3e8;
            long double x87_r7_35 = v_4c8[i_3 * 3] - *(&v_3e8 + i_3 * 0x70);
            v_690 = a3;
            double v_610_2 = x87_r7_35;
            float v_678_2 = Render_SetupLighting_11(v_690, a4) * 30.0f;

            if (Sys_PopStack_11(&v_618))
            {
                long double x87_r7_39 = 1.0 / v_678_2;
                memcpy(a1, &v_640, 0x18);
                *a1 = -((x87_r7_39 * *a1));
                a1[1] = -((x87_r7_39 * a1[1]));
                a1[2] = -((x87_r7_39 * a1[2]));
                return a1;
            }

            long double fp0_2 = Sys_OpenFileStream_11(&v_618);
            long double x87_r6_42 = v_644_1;
            fp0_2 - x87_r6_42;

            if (*(&((fp0_2 < x87_r6_42 ? 1 : 0) << 8 | (FCMP_UO(fp0_2, x87_r6_42) ? 1 : 0) << 0xa
                | (fp0_2 == x87_r6_42 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                long double x87_r7_45 = 1.0 - fp0_2 / v_644_1;
                v_65c = x87_r7_45 * v_640;
                double v_654_2 = x87_r7_45 * v_654_1;
                double v_64c_2 = x87_r7_45 * v_64c_1;
                long double x87_r7_48 = 1.0 / v_678_2;
                memcpy(a1, &v_65c, 0x18);
                *a1 = -((x87_r7_48 * *a1));
                a1[1] = -((x87_r7_48 * a1[1]));
                a1[2] = -((x87_r7_48 * a1[2]));
                return a1;
            }
        }
    }

    __builtin_memset(a1, 0, 0x18);
    return a1;
}

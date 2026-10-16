#include "gi_platform.h"
#include "0042E5A0-Car_ExplosionTick.h"
int32_t* Car_ExplosionTick(double* a1)

{
    int32_t* valA;
    valA = (*(int32_t*)(uintptr_t)(a1 + 0x91c));

    if (valA)
    {
        long double x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
        long double x87_r6_1 = a1[0x14];
        x87_r6_1 - x87_r7_1;
        long double x87_r7_2;

        if (!(*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_2 = a1[0x14];
        else
            x87_r7_2 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));

        long double x87_r6_2 = a1[0x13];
        x87_r6_2 - x87_r7_2;
        long double x87_r7_4;

        if (*(&((x87_r6_2 < x87_r7_2 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_5 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
            long double x87_r6_3 = a1[0x14];
            x87_r6_3 - x87_r7_5;

            if (!(*(&((x87_r6_3 < x87_r7_5 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_3, x87_r7_5) ? 1 : 0) << 0xa
                    | (x87_r6_3 == x87_r7_5 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_4 = a1[0x14];
            else
                x87_r7_4 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
        }
        else
            x87_r7_4 = a1[0x13];

        int32_t* valA2 = (*(int32_t*)(uintptr_t)(a1 + 0x6c));
        float i_1 = x87_r7_4;
        long double fp0_1 = Render_ComputeNormals(valA2);
        void* tmpD1 = (*(int32_t*)(uintptr_t)(*(a1 + 0x1b4) + 0x2d4));
        void* objC2 = a1[0x124];
        float i_2 = *(tmpD1 + 0x2ac);
        i_1 = fp0_1 * i_1;
        int32_t v_20;

        if (objC2 == 0xffffffff)
        {
            if (!i_2)
            {
                void* v_68_1 = objC2;
                void* v_6c = objC2;
                void* v_70 = objC2;
                struct status_msg* valA5 = FX_SmokeEmit(&a1[4], 1, 0, 0x3f800000, i_1 * 0.25.0f,
                    i_1 * 0.0500000007.0f, i_1 * 0.00499999989.0f, 3, 1, nullptr, "1009_01_1",
                    "explo_03_l", 0x15, 2, 0x47c80000, 0);
                a1[0x124] = 0xa;
                return valA5;
            }

            if (i_2 > 0)
            {
                int32_t* ctxB1 = tmpD1 + 0x284;
                i_1 = i_2;
                float i;

                do
                {
                    uint32_t valA4 = Sys_FreeMemory_14(Level_SetMission_5(), 0x1e);
                    WeaponType_UpdateAnim(&v_20, a1, *ctxB1);
                    v_20 = v_20 + a1[4];
                    int32_t v_18;
                    v_18 = v_18 + a1[5];
                    double v_10 = v_10 + a1[6];
                    FX_SmokeEmit(&v_20, 1, valA4, 0x3f800000, 0x46400000, 0x45400000, 0x45400000,
                        3, 2, nullptr, "1009_01_1", "explo_03_l", 0x15, 2, 0x47c80000, 0);
                    i = i_1;
                    ctxB1 = &ctxB1[1];
                    i_2 = i - 1;
                    i_1 = i_2;
                } while (i != 1);
            }

            a1[0x124] = 0x1e;
            return i_2;
        }

        valA = objC2 - 1;
        a1[0x124] = valA;

        if (!valA)
        {
            int32_t* v_2c = valA;
            int32_t* v_28_1 = valA;
            int32_t* v_24_1 = valA;
            v_20 = 0x3f800000;
            int32_t v_1c_1 = 0x3f800000;
            int32_t v_18_1 = 0x3f800000;
            Script_EvaluateCondition_13(Script_FormatString(), tmpD1 + 0x2b0, &a1[4], &a1[0xe], &v_20, &v_2c);
            i_1 = Level_StartMission_4();
            QTask_CleanupTypes(a1);
            a1[0xe9] = 0;
            Script_ParseEnumInt32_17(a1);
            valA = Car_Cleanup(a1, &i_1);
            (*(int32_t*)(uintptr_t)(a1 + 0x2ed5)) = 1;
        }
    }

    return valA;
}

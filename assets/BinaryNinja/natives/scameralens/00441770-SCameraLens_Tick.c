// Original IGI.EXE function: SCameraLens_Tick (VA 0x00441770; static CFG gate PASS, CFG score 0.956).
#include "SCameraLens_Tick.h"
int32_t SCameraLens_Tick(double* a1)

{
    int32_t valA = *(a1 + 0x25d4);
    void* ctxB = a1[0x4ba];

    if (!valA)
    {
        int32_t valA2 = a1[0x4bb];
        *(a1 + 0x25d4) = 7;
        a1[0x4bb] = valA2 ^ 1;
    }
    else
        *(a1 + 0x25d4) = valA - 1;

    int32_t valA4 = *(a1 + 0x25dc);
    int32_t objC;

    if (!valA4)
    {
        objC = a1[0x4bc] + 1;
        int32_t tmpD1 = 0;
        *(a1 + 0x25dc) = 7;
        a1[0x4bc] = objC;
        tmpD1 = g_5be25c;

        if (objC > tmpD1 - 1)
            a1[0x4bc] = 0;
    }
    else
        *(a1 + 0x25dc) = valA4 - 1;

    int16_t valA6;
    valA6 = *(ctxB + 0x169);
    *(ctxB + 0x16a) = valA6;
    valA6 = *(ctxB + 0x168);
    double* v_30;

    if (valA6)
    {
        long double x87_r7_5 = a1[0x1e];
        long double f0_1 = *(ctxB + 0x120);
        x87_r7_5 - f0_1;
        long double x87_r7_6 = a1[0x1e];

        if (!(*(&((x87_r7_5 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_5 == f0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            long double f2_1 = *(ctxB + 0x120);
            x87_r7_6 - f2_1;

            if (!(*(&((x87_r7_6 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_6, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_6 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double x87_r7_9 = a1[0x1e] - 0.0436332338f;
                a1[0x1e] = x87_r7_9;
                long double f6_1 = *(ctxB + 0x120);
                x87_r7_9 - f6_1;

                if (*(&((x87_r7_9 < f6_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_9, f6_1) ? 1 : 0) << 0xa
                        | (x87_r7_9 == f6_1 ? 1 : 0) << 0xe) + 1) & 1)
                    a1[0x1e] = *(ctxB + 0x120);
            }
        }
        else
        {
            long double x87_r7_7 = x87_r7_6 + 0.0436332338f;
            a1[0x1e] = x87_r7_7;
            long double f3_1 = *(ctxB + 0x120);
            x87_r7_7 - f3_1;

            if (!(*(&((x87_r7_7 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_7, f3_1) ? 1 : 0) << 0xa
                    | (x87_r7_7 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                a1[0x1e] = *(ctxB + 0x120);
        }

        int32_t v_2c_5 = 1;
        v_30 = a1;
        double v_18;
        WeaponType_UpdateAnim(&v_18, v_30, v_2c_5);
        v_18 = v_18 + a1[4];
        double v_10;
        double v_10_1 = v_10 + a1[5];
        double v_8;
        double v_8_1 = v_8 + a1[6];
        memcpy(&a1[0x22], &v_18, 0x18);
        memcpy(&a1[0x25], &a1[0xe], 0x28);
        a1[0x30] = 0;
        Car_DetectionSweep(&a1[0x31], &a1[0x22], a1[0x4ba], 1);
        long double fpu0;
        camera_move(fpu0, a1);
        objC = Env_CameraBeepS(a1);
    }
    else
    {
        long double fpu7 = a1[0x1e];
        long double f1_1 = -1.30899692f;
        fpu7 - f1_1;
        long double x87_r7_1 = a1[0x1e];

        if (!(*(&((fpu7 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1_1) ? 1 : 0) << 0xa
            | (fpu7 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            long double f4_1 = -1.30899692f;
            x87_r7_1 - f4_1;

            if (!(*(&((x87_r7_1 < f4_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_1, f4_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double x87_r7_4 = a1[0x1e] - 0.0436332338f;
                a1[0x1e] = x87_r7_4;
                long double f7_1 = -1.30899692f;
                x87_r7_4 - f7_1;

                if (*(&((x87_r7_4 < f7_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_4, f7_1) ? 1 : 0) << 0xa
                        | (x87_r7_4 == f7_1 ? 1 : 0) << 0xe) + 1) & 1)
                    a1[0x1e] = 0xbfa78d36;
            }
        }
        else
        {
            long double x87_r7_2 = x87_r7_1 + 0.0436332338f;
            a1[0x1e] = x87_r7_2;
            long double f5_1 = -1.30899692f;
            x87_r7_2 - f5_1;

            if (!(*(&((x87_r7_2 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_2, f5_1) ? 1 : 0) << 0xa
                    | (x87_r7_2 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                a1[0x1e] = 0xbfa78d36;
        }

        *(ctxB + 0x169) = 0;
        void* valA7 = a1[0x4b8];

        if (valA7)
        {
            objC = SoundSys_SetFrequency_7(valA7);
            a1[0x4b8] = 0;
        }

        int32_t* valA8 = *(a1 + 0x25c4);

        if (valA8)
        {
            void* valA9 = *valA8;

            if (valA9)
                SoundSys_SetFrequency_7(valA9);

            objC = Qtask_UpdateList(*(a1 + 0x25c4));
            *(a1 + 0x25c4) = 0;
        }

        struct status_msg* valA10 = a1[0x4b9];

        if (valA10)
        {
            objC = SoundSys_SetFrequency_7(valA10);
            a1[0x4b9] = 0;
        }
    }

    if (*(a1 + 0x25cc))
    {
        *(a1 + 0x25cc) = 0;
        *(ctxB + 0x170) = 1;
        v_30 = DynObj_Missing(ctxB + 0x138);
        DynObj_CreateMagicObject_5(a1, v_30);
        *(a1 + 0xdc) = 0;
        objC = FX_SmokeEmit(&a1[4], 1, 0, 0x3e800000, 0x45000000, 0, 0, 7, 3, nullptr, "1009_01_1",
            "explo_camera", 0x15, 2, 0x47c80000, 0);
    }

🚫🚫    /* unimplemented  {fld fp0, dword [flagP+0xf4]} */
🚫🚫    /* unimplemented  {fadd dword [ctxB+0x108]} */
    float valA16 = a1[0x1e];
    int32_t v_2c_7 = objC;
🚫🚫    /* unimplemented  {fadd dword [ctxB+0x124]} */
🚫🚫🚫    float v_2c_8 = /* float v_2c_8 = unimplemented  {fstp dword [esp], fp0} */;
    /* unimplemented  {fstp dword [esp], fp0} */
    v_30 = nullptr;
    int32_t result = Sys_ReadFileBlock_12(&a1[0xe], valA16, v_30, v_2c_8);
    int32_t* i_1 = a1[1];

    if (*i_1)
    {
        int32_t* i = i_1;

        if (i)
        {
            int32_t tmpD6 = g_afa7e0;

            do
            {
                int32_t* srcS2 = *i;
                void* valA20;

                if (!srcS2)
                    valA20 = nullptr;
                else
                {
                    int32_t valA17 = *srcS2;
                    int32_t valA18 = -(valA17);
                    valA20 = (valA18 - valA18) & srcS2;
                }

                *((tmpD6 << 2) + &g_afa6e0) = valA20;
                int32_t tmpD7 = tmpD6 + 1;
                int32_t valA21 = 0;
                g_afa7e0 = tmpD7;
                valA21 = i[7];
                result = *((valA21 << 2) + &g_a970e0);

                if (result)
                {
                    result = result(i);
                    tmpD7 = g_afa7e0;
                }

                i = *((tmpD7 << 2) + &g_afa6dc);
                tmpD6 = tmpD7 - 1;
                g_afa7e0 = tmpD6;
            } while (i);
        }
    }

    return result;
}

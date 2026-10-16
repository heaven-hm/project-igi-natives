#include "gi_platform.h"
#include "004301C0-Wheel_Tick.h"
int32_t Wheel_Tick(float a1)

{
    int32_t* srcS = a1;
    int32_t result_1 = srcS[0x4c];
    int16_t valA = Script_ExecuteLevelScript_16();
    int32_t objC;
    objC = (*(int32_t*)(uintptr_t)(srcS[0x4c] + 0x1c));
    int32_t result = TaskType_IsDerivedFrom(objC, valA);

    if (result)
    {
        if (srcS[0x54])
            return QTask_FindType(srcS);

        float flagP1 = srcS[0x4c];
        int16_t valA4 = Menu_LeaveMenus_23();

        if (*(flagP1 + 0x1c) != valA4)
            srcS[0x4e] = *(result_1 + 0x720);
        else
        {
            a1 = 0.0f;
            void* objC1 = (*(int32_t*)(uintptr_t)(srcS[0x53] + 0x2d4));
            void* ctxB1 = *(*(flagP1 + 0x1b4) + 0x2d4);
            int32_t valA7 = srcS[0x52] * 5;
            int32_t dstD = *(ctxB1 + (valA7 << 2) + 0x124);

            if (dstD < 0)
                dstD = 0xfffffff6 - dstD;

            int32_t objC4 = dstD * 7;
            int16_t valA10;

            if (*(flagP1 + (objC4 << 3) + 0x1d6))
            {
                float v_c;
                SoundSys_SetMasterVolume_17(&v_c, flagP1 + 0xf0, flagP1 + (objC4 << 3) + 0x1c8);
                float v_4;
                long double x87_r7_1 = v_4;
                float v_8;
                long double x87_r6_1 = v_8;
                long double x87_r5_1 = v_c;
                long double x87_r4_5 =
                    sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_1 * x87_r6_1 + x87_r7_1 * x87_r7_1);
                a1 = x87_r4_5;
                long double f0_1 = 40.9599991.0f;
                x87_r4_5 - f0_1;
                valA10 = (x87_r4_5 < f0_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r4_5, f0_1) ? 1 : 0) << 0xa
                    | (x87_r4_5 == f0_1 ? 1 : 0) << 0xe;

                if (*(&valA10 + 1) & 1)
                    a1 = 0.0f;
            }
            else if (*(ctxB1 + (valA7 << 2) + 0x11d))
                a1 = *(result_1 + 0x720) * 44.6008873.0f * *(*(*(result_1 + 0x1b4) + 0x2d4) + 0x1c)
                    / *(flagP1 + 0x758) * 0.600000024.0f;

            valA10 = *(ctxB1 + 0x261);

            if (valA10)
                a1 = Vehicle_InitPlane(flagP1, dstD) * a1;

            void* ctxB2 = ctxB1 + srcS[0x52] * 0x14;
            srcS[0x4e] =
                a1 / (*(objC1 + 0x2e8) * 6.2831853071795889) * 6.2831853071795889 * 0.300000012.0f
                + srcS[0x4e] * 0.699999988.0f;
            int16_t valA15;
            valA15 = *(ctxB2 + 0x11c);

            if (valA15)
                srcS[0x51] = -((*(ctxB2 + 0x120) * *(result_1 + 0x72c) * 0.0174532924.0f));

            long double x87_r7_19 = srcS[0x4f];
            long double f2_1 = 0.0f;
            x87_r7_19 - f2_1;

            if (!(*(&((x87_r7_19 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_19, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_19 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
                int32_t ctxB3 = *(ctxB2 + 0x124);

                if (ctxB3 >= 0)
                {
                    void* valA16 = (*(int32_t*)(uintptr_t)(srcS[0x53] + 0x2d4));
                    float objC10 = *(valA16 + 0x2ec);
                    float v_2c_3 = objC10;
                    Vehicle_UpdateRudder(flagP1, ctxB3, srcS[0x4f] * *(valA16 + 0x2ec), objC10);
                }
            }
        }

        result = result_1;

        if (*(result + 0x744))
            srcS[0x4e] = 0;

        long double x87_r7_22 = srcS[0x4f];
        long double f1_1 = 0.0f;
        x87_r7_22 - f1_1;
        result = (x87_r7_22 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_22, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_22 == f1_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
        {
            srcS[0x4e] = 0;
            srcS[0x50] = 0;
        }

        srcS[0x50] = srcS[0x50] - srcS[0x4e];
        int32_t* i_1 = srcS[2];

        if (*i_1)
        {
            int32_t* i = i_1;

            if (i)
            {
                int32_t tmpD6 = g_afa7e0;

                do
                {
                    int32_t* srcS1 = *i;
                    void* valA20;

                    if (!srcS1)
                        valA20 = nullptr;
                    else
                    {
                        int32_t valA17 = *srcS1;
                        int32_t valA18 = -(valA17);
                        valA20 = (valA18 - valA18) & srcS1;
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
    }

    return result;
}

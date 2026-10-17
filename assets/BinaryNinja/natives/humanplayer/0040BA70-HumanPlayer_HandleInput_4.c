// Original IGI.EXE function: HumanPlayer_HandleInput_4 (VA 0x0040BA70; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_HandleInput_4.h"
int32_t* HumanPlayer_HandleInput_4(void* a1, void* a2)

{
    int32_t* valA = *(a2 + 0x768);

    if (valA)
    {
        void* dstD1 = *valA;

        if (dstD1)
        {
            int16_t valA1 = Vehicle_DeployGear_9();

            if (*(dstD1 + 0x1c) == valA1)
            {
                int32_t* tmpD = *(a1 + 4);
                *(a1 + 0xc) = *(a1 + 0x10);
                *(a1 + 0x10) = 0;
                int32_t objC1 = *tmpD;
                *(a1 + 0x14) = objC1;
                return objC1(a1, a2);
            }
        }
    }

    *(a2 + 0x33d) = 0;
    Human_StateAnimation(a2, *(a1 + 0x10), 0f);
    Render_SetupLighting_10(a2 + 0x68, 0, 0.400000006f);
    SoundSys_SetMasterVolume_7(*(a2 + 0x4ec), "jump_1");
    float v_c = *(a2 + 0x520);
    long double fpu7 = v_c;
    long double f1 = 0f;
    fpu7 - f1;
    long double x87_r7_1 = *(a2 + 0x524);
    int32_t v_4 = *(a2 + 0x528);
    long double f2_1;

    if (*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
        | (fpu7 == f1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
    {
        f2_1 = 0f;
        x87_r7_1 - f2_1;
    }

    if (!(*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
        | (fpu7 == f1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40) || !(*(&(
        (x87_r7_1 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f2_1) ? 1 : 0) << 0xa
        | (x87_r7_1 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
        long double x87_r5_1 = v_c;
        long double x87_r6_3 = 1.0 / sqrtl(x87_r5_1 * x87_r5_1 + x87_r7_1 * x87_r7_1);
        v_c = g_56e1ec * v_c * x87_r6_3;
        x87_r7_1 = x87_r7_1 * x87_r6_3 * g_56e1ec;
    }

    float v_8_1 = x87_r7_1 + *(a2 + 0x72c);
    long double x87_r7_6 = g_56e1f0 + *(a2 + 0x730);
    *(a2 + 0x664) = v_c + *(a2 + 0x728);
    *(a2 + 0x668) = v_8_1;
    *(a2 + 0x66c) = x87_r7_6;
    int32_t* result = AI_UpdateSensors_19(a2);
    *(a1 + 0x14) = HumanPlayer_ApplyPhysics_4;
    return result;
}

// Original IGI.EXE function: Human_MovementIntegrator (VA 0x004614B0; static CFG gate PASS, CFG score 0.978).
#include "Human_MovementIntegrator.h"
int32_t Human_MovementIntegrator(void* a1)

{
    int32_t valA = *(a1 + 0x2f4);
    char v_69 = 0;
    int32_t v_68 = valA;
    float v_5c = *(a1 + 0x664);
    float tmpD1 = *(a1 + 0x668);
    int32_t tmpD2 = *(a1 + 0x6f8);
    float objC1 = *(a1 + 0x66c);
    v_5c = v_5c + *(a1 + 0x520);
    float v_58_1 = tmpD1 + *(a1 + 0x524);
    float v_54_1 = objC1 + *(a1 + 0x528);
    float* valA5;

    if (!tmpD2 || !(valA & 4))
    {
        valA5 = a1 + 0x67c;
    label_461770:
        *valA5 = 0f;
        *(a1 + 0x680) = 0;
        *(a1 + 0x684) = 0;
    }
    else
    {
        float v_44_1 = *(a1 + 0x6d8);
        long double x87_r7_6 = v_44_1;
        long double f0_1 = 0f;
        x87_r7_6 - f0_1;
        float v_40_1 = *(a1 + 0x6dc);
        float srcS1 = *(a1 + 0x6e0);

        if (!(*(&((x87_r7_6 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_6 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_46157b:
            long double x87_r7_9 = srcS1;
            long double x87_r6_1 = v_40_1;
            long double x87_r5_1 = v_44_1;
            long double x87_r7_11 =
                1.0 / sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_1 * x87_r6_1 + x87_r7_9 * x87_r7_9);
            v_44_1 = v_44_1 * x87_r7_11;
            v_40_1 = v_40_1 * x87_r7_11;
            srcS1 = srcS1 * x87_r7_11;
        }
        else
        {
            long double x87_r7_7 = v_40_1;
            long double f1_1 = 0f;
            x87_r7_7 - f1_1;

            if (!(*(&((x87_r7_7 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_7, f1_1) ? 1 : 0) << 0xa
                    | (x87_r7_7 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_46157b;

            long double x87_r7_8 = srcS1;
            long double f3_1 = 0f;
            x87_r7_8 - f3_1;

            if (!(*(&((x87_r7_8 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_8, f3_1) ? 1 : 0) << 0xa
                    | (x87_r7_8 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_46157b;
        }

        float v_48_1 = srcS1;
        int32_t v_48_2 = 0;
        float v_64_1 = 90f - Sys_PushStack_9(srcS1) * 57.2957764f;
        long double x87_r0_4 = v_64_1;
        long double f2_1 = 80f;
        x87_r0_4 - f2_1;

        if (*(&((x87_r0_4 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r0_4, f2_1) ? 1 : 0) << 0xa
            | (x87_r0_4 == f2_1 ? 1 : 0) << 0xe | 0x800) + 1) & 0x41)
        {
            long double x87_r0_9 = v_64_1;
            long double f4_1 = 60f;
            x87_r0_9 - f4_1;

            if (*(&((x87_r0_9 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r0_9, f4_1) ? 1 : 0) << 0xa
                | (x87_r0_9 == f4_1 ? 1 : 0) << 0xe | 0x800) + 1) & 0x41)
            {
                long double x87_r0_14 = v_64_1;
                long double f5_1 = 50f;
                x87_r0_14 - f5_1;

                if (*(&((x87_r0_14 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r0_14, f5_1) ? 1 : 0) << 0xa
                    | (x87_r0_14 == f5_1 ? 1 : 0) << 0xe | 0x800) + 1) & 0x41)
                {
                    long double x87_r0_20 = v_64_1;
                    long double f6_1 = 45f;
                    x87_r0_20 - f6_1;

                    if (*(&((x87_r0_20 < f6_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r0_20, f6_1) ? 1 : 0) << 0xa
                        | (x87_r0_20 == f6_1 ? 1 : 0) << 0xe | 0x800) + 1) & 0x41)
                    {
                        valA5 = a1 + 0x67c;
                        goto label_461770;
                    }

                    valA5 = a1 + 0x67c;
                    *(a1 + 0x684) = *(a1 + 0x684);
                    v_69 = 1;
                    float v_4c_5 = v_40_1 * 18.9629631f;
                    *valA5 = v_44_1 * 18.9629631f + *valA5;
                    *(a1 + 0x680) = v_4c_5 + *(a1 + 0x680);
                }
                else
                {
                    valA5 = a1 + 0x67c;
                    *(a1 + 0x684) = *(a1 + 0x684);
                    v_69 = 1;
                    float v_4c_4 = v_40_1 * 56.8888893f;
                    *valA5 = v_44_1 * 56.8888893f + *valA5;
                    *(a1 + 0x680) = v_4c_4 + *(a1 + 0x680);
                }
            }
            else
            {
                valA5 = a1 + 0x67c;
                int32_t v_48_4 = 0;
                int32_t* objC4 = valA5;
                v_69 = 1;
                *objC4 = v_44_1 * 948f;
                objC4[1] = v_40_1 * 948f;
                objC4[2] = v_48_4;
            }
        }
        else
        {
            valA5 = a1 + 0x67c;
            int32_t v_48_3 = 0;
            v_69 = 1;
            *valA5 = v_44_1 * 1137f;
            valA5[1] = v_40_1 * 1137f;
            valA5[2] = v_48_3;
        }
    }

🚫🚫    /* unimplemented  {fld fp0, dword [valA]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_5335a8]} */  /* "fff?" */
    double v_20;
    memcpy(&v_20, a1 + 0x20, 0x18);
🚫🚫    *valA5 =
🚫🚫    /* unimplemented  {fld fp0, dword [ctxB+0x680]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_5335a8]} */  /* "fff?" */
🚫🚫    float v_64_2 = /* float v_64_2 = unimplemented  {fst dword [esp+0x14], fp0} */;
🚫🚫🚫    *(a1 + 0x680) =
    /* unimplemented  {fstp dword [ctxB+0x680], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [ctxB+0x684]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_5335a8]} */  /* "fff?" */
    int32_t objC6 = v_68;
    char valA6 = *(a1 + 0x694);
🚫🚫    float v_60 = /* float v_60 = unimplemented  {fst dword [esp+0x18], fp0} */;
🚫🚫🚫    *(a1 + 0x684) =
    /* unimplemented  {fstp dword [ctxB+0x684], fp0} */
🚫🚫    /* unimplemented  {fadd dword [esp+0x1c]} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x14]} */
🚫🚫    /* unimplemented  {fadd dword [esp+0x20]} */
    v_68 = objC6 & 0xffffffef;
🚫🚫🚫    float v_58_2 = /* float v_58_2 = unimplemented  {fstp dword [esp+0x20], fp0} */;
    /* unimplemented  {fstp dword [esp+0x20], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x18]} */
🚫🚫    /* unimplemented  {fadd dword [esp+0x24]} */
🚫🚫🚫    float v_54_2 = /* float v_54_2 = unimplemented  {fstp dword [esp+0x24], fp0} */;
    /* unimplemented  {fstp dword [esp+0x24], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [ctxB+0x670]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_5335a8]} */  /* "fff?" */
🚫🚫    *(a1 + 0x670) =
🚫🚫    /* unimplemented  {fld fp0, dword [ctxB+0x674]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_5335a8]} */  /* "fff?" */
🚫🚫    float v_60_1 = /* float v_60_1 = unimplemented  {fst dword [esp+0x18], fp0} */;
🚫🚫🚫    *(a1 + 0x674) =
    /* unimplemented  {fstp dword [ctxB+0x674], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [ctxB+0x678]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_5335a8]} */  /* "fff?" */
🚫🚫    float v_64_3 = /* float v_64_3 = unimplemented  {fst dword [esp+0x14], fp0} */;
🚫🚫🚫    *(a1 + 0x678) =
    /* unimplemented  {fstp dword [ctxB+0x678], fp0} */
🚫🚫    /* unimplemented  {fadd fp0, fp1} */
🚫🚫🚫    v_5c = /* v_5c = unimplemented  {fstp dword [esp+0x1c], fp0} */;
    /* unimplemented  {fstp dword [esp+0x1c], fp0} */
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x18]} */
🚫🚫    /* unimplemented  {fadd dword [esp+0x20]} */
🚫🚫🚫    float v_58_3 = /* float v_58_3 = unimplemented  {fstp dword [esp+0x20], fp0} */;
    /* unimplemented  {fstp dword [esp+0x20], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x14]} */
🚫🚫    /* unimplemented  {fadd dword [esp+0x24]} */
🚫🚫🚫    float v_54_3 = /* float v_54_3 = unimplemented  {fstp dword [esp+0x24], fp0} */;
    /* unimplemented  {fstp dword [esp+0x24], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [ctxB+0x728]} */
🚫🚫    /* unimplemented  {fadd qword [esp+0x58]} */
🚫🚫    v_20 = /* v_20 = unimplemented  {fst qword [esp+0x58], fp0} */;
🚫🚫    /* unimplemented  {fld fp0, dword [ctxB+0x72c]} */
🚫🚫    /* unimplemented  {fadd qword [esp+0x60]} */
🚫🚫🚫    double v_18 = /* double v_18 = unimplemented  {fstp qword [esp+0x60], fp0} */;
    /* unimplemented  {fstp qword [esp+0x60], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [ctxB+0x730]} */
🚫🚫    /* unimplemented  {fadd qword [esp+0x68]} */
🚫🚫🚫    double v_10 = /* double v_10 = unimplemented  {fstp qword [esp+0x68], fp0} */;
    /* unimplemented  {fstp qword [esp+0x68], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x1c]} */
🚫🚫    /* unimplemented  {fadd fp0, fp1} */
🚫🚫🚫    double v_38 = /* double v_38 = unimplemented  {fstp qword [esp+0x40], fp0} */;
    /* unimplemented  {fstp qword [esp+0x40], fp0} */
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x20]} */
🚫🚫    /* unimplemented  {fadd qword [esp+0x60]} */
🚫🚫🚫    double v_30 = /* double v_30 = unimplemented  {fstp qword [esp+0x48], fp0} */;
    /* unimplemented  {fstp qword [esp+0x48], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x24]} */
🚫🚫    /* unimplemented  {fadd qword [esp+0x68]} */
🚫🚫🚫    double v_28 = /* double v_28 = unimplemented  {fstp qword [esp+0x50], fp0} */;
    /* unimplemented  {fstp qword [esp+0x50], fp0} */

    if (!valA6)
    {
        if (*(a1 + 0x696))
            Human_WallSweep(a1, &v_20, &v_38, &v_5c, &v_68);

        if (*(a1 + 0x695))
        {
            float v_64_4 = 0f;

            if (v_68 & 4)
                v_64_4 = 2048f;

            if (v_69)
                v_64_4 = 8192f;

            float* v_84_2 = &v_5c;
            Human_GroundQuery(a1, &v_20, &v_38, &v_68, v_64_4);
        }

        if (*(a1 + 0x698))
        {
            void* v_88_3 = a1;
            Human_Separation(&v_20, &v_38, &v_5c);
        }
    }

    if (v_68 & 0x10)
    {
        void* v_80_4 = a1;
        AI_CheckHearing_18(v_80_4, "Roof!\n");
🚫🚫        /* unimplemented  {fld fp0, qword [ctxB+0x720]} */
🚫🚫        /* unimplemented  {fmul fp0, qword [&g_5334b0]} */
🚫🚫🚫        v_80_4 = /* v_80_4.q = unimplemented  {fstp qword [esp], fp0} */;
        /* unimplemented  {fstp qword [esp], fp0} */
        AI_CheckHearing_18(a1, "Distance to roof from feet: %.2f\n");
    }

    float objC9 = *(a1 + 0xa0);
    double* v_80_5 = &v_38;
    *(a1 + 0x2f4) = v_68;
    WorldObject_CommitTransform(Level_StartMission_4(), a1, v_80_5, objC9);
    int32_t v_8c_3 = *(&v_38 + 4);
    int32_t v_90_2 = v_38;
    AI_CheckHearing_18(a1, "PosX: %.2f\n");
    int32_t v_9c = *(&v_30 + 4);
    int32_t v_a0 = v_30;
    AI_CheckHearing_18(a1, "PosY: %.2f\n");
    int32_t v_ac = *(&v_28 + 4);
    int32_t v_b0 = v_28;
    AI_CheckHearing_18(a1, "PosZ: %.2f\n");
🚫🚫    /* unimplemented  {fld fp0, dword [ctxB+0x728]} */
    *(a1 + 0x688) = v_5c;
    *(a1 + 0x68c) = v_58_3;
    *(a1 + 0x690) = v_54_3;
🚫🚫    /* unimplemented  {fadd dword [valA]} */
🚫🚫🚫    *(a1 + 0x688) =
    /* unimplemented  {fstp dword [valA], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [ctxB+0x72c]} */
🚫🚫    /* unimplemented  {fadd dword [ctxB+0x68c]} */
🚫🚫🚫    *(a1 + 0x68c) =
    /* unimplemented  {fstp dword [ctxB+0x68c], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [ctxB+0x730]} */
🚫🚫    /* unimplemented  {fadd dword [ctxB+0x690]} */
🚫🚫🚫    *(a1 + 0x690) =
    /* unimplemented  {fstp dword [ctxB+0x690], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x24]} */
🚫🚫🚫    v_80_5 = /* v_80_5.q = unimplemented  {fstp qword [esp], fp0} */;
    /* unimplemented  {fstp qword [esp], fp0} */
    AI_CheckHearing_18(a1, "SpeedX: %.2f\n");
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x30]} */
🚫🚫🚫    v_80_5 = /* v_80_5.q = unimplemented  {fstp qword [esp], fp0} */;
    /* unimplemented  {fstp qword [esp], fp0} */
    AI_CheckHearing_18(a1, "SpeedY: %.2f\n");
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x34]} */
🚫🚫🚫    v_80_5 = /* v_80_5.q = unimplemented  {fstp qword [esp], fp0} */;
    /* unimplemented  {fstp qword [esp], fp0} */
    return AI_CheckHearing_18(a1, "SpeedZ: %.2f\n");
}

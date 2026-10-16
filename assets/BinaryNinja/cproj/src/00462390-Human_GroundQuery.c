#include "gi_platform.h"
#include "00462390-Human_GroundQuery.h"
int32_t* Human_GroundQuery(void* a1, double* a2, int32_t* a3, int32_t* a4 , float a5)

{
    int32_t v_23c = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x710)) = 0;
    float v_1d0;
    float* v_244 = &v_1d0;
    char v_225 = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x714)) = 0x41d00000;
    float* valA = FX_ExplosionSpawn_16(v_244, a1, v_23c);
    float v_210 = *valA;
    int32_t v_20c = valA[1];
    float v_208 = valA[2];
    long double fpu7;

    if (!(*(int32_t*)(uintptr_t)(a1 + 0x33d)))
        fpu7 = 1638.4000000000001;
    else
        fpu7 = 819.20000000000005;

    int32_t* srcS = a3;
    long double x87_r7_2 = fpu7 - v_208 + (*(int32_t*)(uintptr_t)(srcS + 0x10));
    int32_t valA3 = srcS[2];
    int32_t v_a4 = srcS[1];
    void* tmpD2 = (*(int32_t*)(uintptr_t)(a1 + 0x800));
    int32_t v_a8 = *srcS;
    int32_t v_a0 = valA3;
    double v_98 = x87_r7_2;
    int16_t idx = 0;
    int32_t v_9c = srcS[3];
    double v_1f8;
    int32_t v_1e8;
    int32_t* v_188;
    double v_180;
    double v_170;
    float v_150;
    int32_t v_14c;
    int32_t v_148;
    int32_t* v_130;
    int32_t* valA4;
    float v_220[0x4];

    if (!tmpD2)
    {
        int32_t v_23c_14 = 1;
        int32_t v_240_10 = 0xffffffff;
        char v_1b4;
        double* v_244_2 = &v_1b4;
        char v_90;
        memcpy(&v_90, srcS, 0x18);
        int32_t v_1e0 = 0;
        int32_t v_1dc_1 = 0xc14f4000;
        void* v_1b0_1 = a1;
        int32_t v_1d8_1 = 0;
        int32_t v_1d4_1 = 0x40c00000;
        char valA25 = Level_CheckQTaskID_3();
        DynObj_RemoveSymbol_10(Level_StartMission_4(), &v_188, &v_a8, 2, &v_1e0, valA25, v_244_2,
            v_240_10, v_23c_14);
        int32_t v_c0;

        if (v_c0)
        {
            float v_d8;
            long double x87_r7_22 = v_d8;
            long double f1_1 = 0.0f;
            x87_r7_22 - f1_1;
            idx = 0;

            if (*(&((x87_r7_22 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_22, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_22 == f1_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
                float* valA29 = FX_ExplosionSpawn_16(&v_220, a1, 0);
                v_1d0 = *valA29;
                int32_t v_1cc_1 = valA29[1];
                double v_b8;
                long double x87_r7_24 = valA29[2] + v_b8;
                (*(int32_t*)(uintptr_t)(a1 + 0x720)) = x87_r7_24;
                long double f2_1 = 7372.8000000000002;
                x87_r7_24 - f2_1;
                idx = 0;

                if (*(&((x87_r7_24 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_24, f2_1) ? 1 : 0) << 0xa
                        | (x87_r7_24 == f2_1 ? 1 : 0) << 0xe) + 1) & 1)
                    *a4 |= 0x10;
            }
        }

        if (v_130)
        {
            srcS = a3;

            if ((*(int32_t*)(uintptr_t)(a1 + 0x800)))
                goto label_462984;

            goto label_462866;
        }

        int32_t v_23c_16 = 1;
        int32_t v_240_12 = 0xffffffff;
        double* v_244_4 = &v_1b4;
        v_1e0 = 0;
        int32_t v_1dc_2 = 0x414f4000;
        char valA32 = Level_CheckQTaskID_3();
        DynObj_RemoveSymbol_10(Level_StartMission_4(), &v_188, &v_a8, 1, &v_1e0, valA32, v_244_4,
            v_240_12, v_23c_16);
    label_462841: ;
        srcS = a3;
    }
    else
    {
        v_225 = 0;
        __builtin_memset(&v_188, 0, 0xe0);
        (*(int32_t*)(uintptr_t)(a1 + 0x710)) = 0;
        (*(int32_t*)(uintptr_t)(a1 + 0x714)) = 0;
        valA4 = *(tmpD2 + 0x3b6c);

        if (valA4)
        {
            void* valA5 = Script_ExecuteLevelScript_23(valA4, *(tmpD2 + 0x3e2c));
            memcpy(&v_180, srcS, 0x18);
            v_170 = v_170 - v_208;
            idx = 0;

            if (valA5)
            {
                v_130 = 1;
                int32_t v_13c_1 = *(valA5 + 0x138);
                v_150 = 0.0f;
                v_14c = 0;
                v_148 = 0x3f800000;
            }

            void* srcS1 = tmpD2;

            if (Camera_ApplyPostProcess_33(srcS1 + 0xe0) <= 0)
            {
                void* valA22 = Script_ExecuteLevelScript_23(*(srcS1 + 0x3b6c), *(srcS1 + 0x3e2c));

                if (valA22)
                {
                    Script_CallNativeHandler_23(&v_1f8, valA22);
                    v_170 = v_1e8;
                    int32_t v_1e4;
                    *(&v_170 + 4) = v_1e4;
                }
            }
            else
            {
                int32_t* dstD2 = *(srcS1 + 0xe0);
                v_220[0] = dstD2;

                if (*dstD2)
                {
                    if (Sys_PopStack_11(a1 + 0x820))
                    {
                        memcpy(a1 + 0x808, &v_180, 0x18);
                        memcpy(a1 + 0x820, &v_180, 0x18);
                        dstD2 = v_220[0];
                    }

                    long double fp0_1 = Sys_DispatchOpcode_11(AI_CombatTarget_4(dstD2), a1 + 0x820);
                    long double f5_1 = 100.0;
                    fp0_1 - f5_1;

                    if (!(*(&((fp0_1 < f5_1 ? 1 : 0) << 8
                        | (FCMP_UO(fp0_1, f5_1) ? 1 : 0) << 0xa
                        | (fp0_1 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    {
                        memcpy(a1 + 0x808, a1 + 0x820, 0x18);
                        memcpy(a1 + 0x820, AI_CombatTarget_4(v_220[0]), 0x18);
                    }

                    double* v_23c_6 = &v_1f8;
                    v_1f8 = (*(int32_t*)(uintptr_t)(a1 + 0x820)) - v_180;
                    double v_178;
                    double v_1f0_1 = (*(int32_t*)(uintptr_t)(a1 + 0x828)) - v_178;
                    v_1e8 = (*(int32_t*)(uintptr_t)(a1 + 0x830)) - v_170;
                    idx = 0;

                    if (!Sys_PopStack_11(v_23c_6))
                    {
                        v_220[0] = Sys_OpenFileStream_11(&v_1f8);
                        v_1d0 = (*(int32_t*)(uintptr_t)(a1 + 0x830)) - (*(int32_t*)(uintptr_t)(a1 + 0x818));
                        long double fp0_3 = Sys_DispatchOpcode_11(a1 + 0x820, a1 + 0x808);
                        long double x87_r7_16 = v_220[0] / fp0_3;
                        long double f6_1 = 0.0;
                        x87_r7_16 - f6_1;
                        long double x87_r7_17;

                        if (!(*(&((x87_r7_16 < f6_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_16, f6_1) ? 1 : 0) << 0xa
                            | (x87_r7_16 == f6_1 ? 1 : 0) << 0xe) + 1) & 1))
                        {
                            long double fp0_4 = Sys_DispatchOpcode_11(a1 + 0x820, a1 + 0x808);
                            long double x87_r7_19 = v_220[0] / fp0_4;
                            long double f8_1 = 1.0;
                            x87_r7_19 - f8_1;

                            if (*(&((x87_r7_19 < f8_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_19, f8_1) ? 1 : 0) << 0xa
                                | (x87_r7_19 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                            {
                                long double fp0_5 = Sys_DispatchOpcode_11(a1 + 0x820, a1 + 0x808);
                                x87_r7_17 = v_220[0] / fp0_5;
                            }
                            else
                                x87_r7_17 = 1.0;
                        }
                        else
                            x87_r7_17 = 0.0;

                        srcS1 = tmpD2;
                        v_170 = (1.0 - x87_r7_17) * v_1d0 + (*(int32_t*)(uintptr_t)(a1 + 0x818));
                        idx = 0;
                    }
                    else
                    {
                        srcS1 = tmpD2;
                        v_170 = (*(int32_t*)(uintptr_t)(a1 + 0x830));
                        *(&v_170 + 4) = (*(int32_t*)(uintptr_t)(a1 + 0x834));
                    }
                }
            }

            void* srcS5 = *(srcS1 + 0x3b6c);

            if (!*(srcS5 + 0x64))
            {
                AI_CheckSector_19(a1);
                v_225 = 1;
            }
            else if ((*(int32_t*)(uintptr_t)(a1 + 0x76c)))
                v_225 = 1;
            else
            {
                Human_SetParent(a1, *(srcS5 + 0x14));
                v_225 = 1;
            }

            goto label_462841;
        }
    }
    int32_t* tmpD7;

    if (v_130 && !(*(int32_t*)(uintptr_t)(a1 + 0x800)))
    {
    label_462866: ;
        tmpD7 = v_188;

        if (tmpD7)
        {
            memcpy(&v_1f8, &v_180, 0x18);
            v_1e8 = v_170 + 204.80000000000001;
            long double x87_r7_28 = v_1e8 - 2048.0;
            double* v_1ac = &v_1f8;
            float* v_1a8_1 = &v_1d0;
            memcpy(&v_1d0, &v_1f8, 0x18);
            double v_1c0_1 = x87_r7_28;
            int32_t v_78;
            int32_t* v_18c_1 = &v_78;
            int32_t valA34 = 0;
            int32_t* v_20_1 = nullptr;
            v_78 = 0;
            char v_1a0_1 = 0xff;
            int32_t v_19c_1 = 0;
            int32_t v_1a4_1 = 1;
            int32_t v_198 = 0;
            int32_t v_194_1 = 0;
            int32_t v_190;
            __builtin_strncpy(&v_190, "DCBA", 4);
            valA34 = tmpD7[7];
            valA4 = *((valA34 << 2) + &g_a9a6e0);

            if (valA4)
            {
                valA4(tmpD7, &v_1ac);
                int32_t v_2c;

                if (v_20_1)
                    int32_t v_13c_2 = v_2c;
                tmpD7 = v_188;
            }

            srcS = a3;
        }

        long double x87_r7_31 = (*(int32_t*)(uintptr_t)(srcS + 0x10)) - v_170 - v_208;
        (*(int32_t*)(uintptr_t)(a1 + 0x710)) = x87_r7_31;
        long double x87_r6_5 = a5;
        x87_r7_31 - x87_r6_5;
        idx = 0;

        if (*(&((x87_r7_31 < x87_r6_5 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_31, x87_r6_5) ? 1 : 0) << 0xa
                | (x87_r7_31 == x87_r6_5 ? 1 : 0) << 0xe) + 1) & 0x41 || v_225)
            goto label_4629ac;

        goto label_462a6b;
    }
    label_462984: ;
    tmpD7 = v_188;

    if (!v_225)
    {
    label_462a6b: ;
        int32_t* v_23c_21 = nullptr;
        *a4 &= 0xfffffffb;
        AI_UpdateSensors_20(a1, v_23c_21);
        (*(int32_t*)(uintptr_t)(a1 + 0x728)) = 0;
        (*(int32_t*)(uintptr_t)(a1 + 0x72c)) = 0;
        (*(int32_t*)(uintptr_t)(a1 + 0x730)) = 0;
    }
    else
    {
    label_4629ac: ;
        *a4 |= 4;
        (*(int32_t*)(uintptr_t)(srcS + 0x10)) = v_208 + v_170;
        int32_t objC10;

        if (!tmpD7)
        {
            objC10 = AI_UpdateSensors_20(a1, nullptr);
            (*(int32_t*)(uintptr_t)(a1 + 0x728)) = 0;
            (*(int32_t*)(uintptr_t)(a1 + 0x72c)) = 0;
            (*(int32_t*)(uintptr_t)(a1 + 0x730)) = 0;
        }
        else
            objC10 = AI_UpdateSensors_20(a1, tmpD7);

        int32_t v_200_1 = 0;
        long double x87_r7_36 = *srcS - *a2;
        int32_t v_1fc_1 = 0;
        v_210 = x87_r7_36;
        v_208 = (*(int32_t*)(uintptr_t)(srcS + 8)) - a2[1];
        long double f3_1 = 0.0;
        x87_r7_36 - f3_1;
        long double x87_r7_37;
        long double f4_1;

        if (*(&((x87_r7_36 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_36, f3_1) ? 1 : 0) << 0xa
            | (x87_r7_36 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            x87_r7_37 = v_208;
            f4_1 = 0.0;
            x87_r7_37 - f4_1;
        }

        int16_t top_1;

        if (!(*(&((x87_r7_36 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_36, f3_1) ? 1 : 0) << 0xa
            | (x87_r7_36 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40) || !(*(&(
            (x87_r7_37 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_37, f4_1) ? 1 : 0) << 0xa
            | (x87_r7_37 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
            long double fp0_6 = Sys_OpenFileStream_11(&v_210);
            long double x87_r6_10 = (*(int32_t*)(uintptr_t)(srcS + 0x10)) - a2[2];
            int32_t v_240_16 = objC10;
            v_240_16 = x87_r6_10 / sqrtl(x87_r6_10 * x87_r6_10 + fp0_6 * fp0_6);
            top_1 = 0;
            Sys_PopStack_9(v_240_16);
        }
        else
            top_1 = 0xffff;

🚫🚫        (*(int32_t*)(uintptr_t)(a1 + 0x718)) =
🚫🚫        /* unimplemented  {fmul fp0, dword [&g_533988]} */
🚫🚫🚫        (*(int32_t*)(uintptr_t)(a1 + 0x71c)) =
        /* unimplemented  {fstp dword [ctxB+0x71c], fp0} */
        idx = top_1 + 1;
    }

    memcpy(a1 + 0x6a0, &v_188, 0x70);

    if (!v_130)
    {
        (*(int32_t*)(uintptr_t)(a1 + 0x7ec)) = 0;
        return v_130;
    }

    memcpy(a1 + 0x7d0, &v_180, 0x18);
🚫🚫    /* unimplemented  {fld fp0, qword [ctxB+0x710]} */
🚫🚫🚫    (*(int32_t*)(uintptr_t)(a1 + 0x7f0)) =
    /* unimplemented  {fstp dword [ctxB+0x7f0], fp0} */
    (*(int32_t*)(uintptr_t)(a1 + 0x7f4)) = v_150;
    (*(int32_t*)(uintptr_t)(a1 + 0x7f8)) = v_14c;
    int32_t valA44 = v_148;
    (*(int32_t*)(uintptr_t)(a1 + 0x7fc)) = valA44;
🚫🚫    /* unimplemented  {fld fp0, dword [objC]} */
⋯    long double f7 = 0.0f;
    /* unimplemented  {fcomp fp0, dword [&g_5333ec]} f- f7 */ - f7;
    bool c0_9 = /* bool c0_9 = unimplemented  {fcomp fp0, dword [&g_5333ec]} f< f7 */ < f7;
    bool c2_9 = FCMP_UO(/* bool c2_9 =
        is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5333ec]}, f7) */, f7);
    bool c3_9 = /* bool c3_9 =
        unimplemented  {fcomp fp0, dword [&g_5333ec]} f== f7 */ == f7;
    /* unimplemented  {fcomp fp0, dword [&g_5333ec]} */
    valA44 = (c0_9 ? 1 : 0) << 8 | (c2_9 ? 1 : 0) << 0xa | (c3_9 ? 1 : 0) << 0xe | (idx & 7) << 0xb;

    if (!(*(&valA44 + 1) & 0x40))
    {
🚫🚫    label_462b27:
        /* unimplemented  {fld fp0, dword [ctxB+0x7fc]} */
🚫🚫        /* unimplemented  {fld fp0, dword [ctxB+0x7f8]} */
🚫🚫        /* unimplemented  {fld fp0, dword [objC]} */
🚫🚫        /* unimplemented  {fld fp0, fp0} */
🚫🚫        /* unimplemented  {fmul fp0, fp1} */
🚫🚫        /* unimplemented  {fld fp0, fp2} */
🚫🚫        /* unimplemented  {fmul fp0, fp3} */
🚫🚫🚫        /* unimplemented  {faddp fp1, fp0} */
        /* unimplemented  {faddp fp1, fp0} */
🚫🚫        /* unimplemented  {fld fp0, fp3} */
🚫🚫        /* unimplemented  {fmul fp0, fp4} */
🚫🚫🚫        /* unimplemented  {faddp fp1, fp0} */
        /* unimplemented  {faddp fp1, fp0} */
🚫🚫        /* unimplemented  {fsqrt } */
🚫🚫🚫        /* unimplemented  {fstp fp3, fp0} */
        /* unimplemented  {fstp fp3, fp0} */
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫        /* unimplemented  {fdivr fp0, qword [&g_5333f8]} */
🚫🚫        /* unimplemented  {fld fp0, dword [objC]} */
🚫🚫        /* unimplemented  {fmul fp0, fp1} */
🚫🚫🚫        (*(int32_t*)(uintptr_t)(a1 + 0x7f4)) =
        /* unimplemented  {fstp dword [objC], fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [ctxB+0x7f8]} */
🚫🚫        /* unimplemented  {fmul fp0, fp1} */
🚫🚫🚫        (*(int32_t*)(uintptr_t)(a1 + 0x7f8)) =
        /* unimplemented  {fstp dword [ctxB+0x7f8], fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [ctxB+0x7fc]} */
🚫🚫        /* unimplemented  {fmul fp0, fp1} */
🚫🚫🚫        (*(int32_t*)(uintptr_t)(a1 + 0x7fc)) =
        /* unimplemented  {fstp dword [ctxB+0x7fc], fp0} */
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
    }
    else
    {
🚫🚫        /* unimplemented  {fld fp0, dword [ctxB+0x7f8]} */
⋯        long double f9_1 = 0.0f;
        /* unimplemented  {fcomp fp0, dword [&g_5333ec]} f- f9_1 */ - f9_1;
        bool c0_10 = /* bool c0_10 =
            unimplemented  {fcomp fp0, dword [&g_5333ec]} f< f9_1 */ < f9_1;
        bool c2_10 = FCMP_UO(/* bool c2_10 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5333ec]}, f9_1) */, f9_1);
        bool c3_10 = /* bool c3_10 =
            unimplemented  {fcomp fp0, dword [&g_5333ec]} f== f9_1 */ == f9_1;
        /* unimplemented  {fcomp fp0, dword [&g_5333ec]} */
        valA44 = (c0_10 ? 1 : 0) << 8 | (c2_10 ? 1 : 0) << 0xa | (c3_10 ? 1 : 0) << 0xe
            | (idx & 7) << 0xb;

        if (!(*(&valA44 + 1) & 0x40))
            goto label_462b27;

🚫🚫        /* unimplemented  {fld fp0, dword [ctxB+0x7fc]} */
⋯        long double f10_1 = 0.0f;
        /* unimplemented  {fcomp fp0, dword [&g_5333ec]} f- f10_1 */ - f10_1;
        bool c0_11 = /* bool c0_11 =
            unimplemented  {fcomp fp0, dword [&g_5333ec]} f< f10_1 */ < f10_1;
        bool c2_11 = FCMP_UO(/* bool c2_11 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5333ec]}, f10_1) */,
            f10_1);
        bool c3_11 = /* bool c3_11 =
            unimplemented  {fcomp fp0, dword [&g_5333ec]} f== f10_1 */ == f10_1;
        /* unimplemented  {fcomp fp0, dword [&g_5333ec]} */
        valA44 = (c0_11 ? 1 : 0) << 8 | (c2_11 ? 1 : 0) << 0xa | (c3_11 ? 1 : 0) << 0xe
            | (idx & 7) << 0xb;

        if (!(*(&valA44 + 1) & 0x40))
            goto label_462b27;
    }

    (*(int32_t*)(uintptr_t)(a1 + 0x7ec)) = 1;
    return valA44;
}

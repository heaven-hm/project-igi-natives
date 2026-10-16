#include "gi_platform.h"
#include "004FB9A0-Body_ResolveCollision.h"
  int32_t* Body_ResolveCollision(float a1 , float a2)
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    Camera_UpdateTransform_5(0x1058);
    float arg_4;
    float srcS = arg_4;
    int32_t i = 0;
    int32_t arg_1c = 0;
    double* arg_18 = nullptr;
    float arg_20 = 0.0f;

    if (!(*(int32_t*)(uintptr_t)(srcS + 0x68c)))
        return 0;

    char arg_708;
    __return_addr = &arg_708;
    char* objC = srcS + 0x1d4;
    int32_t* __saved_ebp_2 = nullptr;
    int32_t i_1 = 0;
    int32_t arg_130[0x16];
    int32_t (* v_8)[0x16] = &arg_130;
    char* arg_10 = objC;
    int32_t (* saved_frame)[0x16] = nullptr;
    int32_t dstD = 0;
    double* v_1c;
    float* v_18;
    double arg_188;
    char arg_39c;
    char arg_3a0;
    double arg_4a0;

    do
    {
        *__return_addr = 0;

        if (objC[1] && *objC)
        {
            objC[2] = 0;
            long double x87_r7_1 = (*(int32_t*)(uintptr_t)(srcS + 0x78));
            float ctxB = *(objC - 0xc);
            int32_t saved_dst;
            v_18 = &saved_dst + __saved_ebp_2 + 0x3c;
            *(&saved_dst + __saved_ebp_2 + 0x3c) = ctxB;
            *(&saved_dst + __saved_ebp_2 + 0x40) = *(objC - 8);
            *(&saved_dst + __saved_ebp_2 + 0x44) = *(objC - 4);
            char arg_2c;
            char arg_30;
            long double x87_r7_4 = x87_r7_1 * *(&arg_30 + saved_frame)
                + (*(int32_t*)(uintptr_t)(srcS + 0x74)) * *(&arg_2c + saved_frame)
                + (*(int32_t*)(uintptr_t)(srcS + 0x70)) * *(&saved_dst + __saved_ebp_2 + 0x3c);
            arg_4 = x87_r7_4;
            long double x87_r7_8 = (*(int32_t*)(uintptr_t)(srcS + 0x84)) * *(&arg_30 + saved_frame)
                + (*(int32_t*)(uintptr_t)(srcS + 0x80)) * *(&arg_2c + saved_frame)
                + (*(int32_t*)(uintptr_t)(srcS + 0x7c)) * *(&saved_dst + __saved_ebp_2 + 0x3c);
            a1 = x87_r7_8;
            long double x87_r7_11 =
                (*(int32_t*)(uintptr_t)(srcS + 0x90)) * *(&arg_30 + saved_frame) + (*(int32_t*)(uintptr_t)(srcS + 0x8c)) * *(&arg_2c + saved_frame);
            long double x87_r6_12 = (*(int32_t*)(uintptr_t)(srcS + 0x88)) * *(&saved_dst + __saved_ebp_2 + 0x3c);
            *(&saved_dst + __saved_ebp_2 + 0x3c) = arg_4;
            *(&saved_dst + __saved_ebp_2 + 0x40) = a1;
            a2 = x87_r7_11 + x87_r6_12;
            *(&saved_dst + __saved_ebp_2 + 0x44) = a2;
            (*(int32_t*)(uintptr_t)(&arg_188 + dstD)) = *(&saved_dst + __saved_ebp_2 + 0x3c);
            long double x87_r7_14 = *(&arg_2c + saved_frame);
            v_1c = srcS + 0xf0;
            char arg_190;
            (*(int32_t*)(uintptr_t)(&arg_190 + dstD)) = x87_r7_14;
            char arg_198;
            (*(int32_t*)(uintptr_t)(&arg_198 + dstD)) = *(&arg_30 + saved_frame);
            (*(int32_t*)(uintptr_t)(&arg_188 + dstD)) = (*(int32_t*)(uintptr_t)(srcS + 0x20)) + (*(int32_t*)(uintptr_t)(&arg_188 + dstD));
            (*(int32_t*)(uintptr_t)(&arg_190 + dstD)) = (*(int32_t*)(uintptr_t)(srcS + 0x28)) + (*(int32_t*)(uintptr_t)(&arg_190 + dstD));
            (*(int32_t*)(uintptr_t)(&arg_198 + dstD)) = (*(int32_t*)(uintptr_t)(srcS + 0x30)) + (*(int32_t*)(uintptr_t)(&arg_198 + dstD));
            SoundSys_SetMasterVolume_17(&v_18 + saved_frame + 0x3b0, v_1c, v_18);
            long double x87_r7_23 = *(&v_18 + saved_frame + 0x3b0) + (*(int32_t*)(uintptr_t)(&arg_188 + dstD));
            i = i_1;
            *v_8 = i;
            (*(int32_t*)(uintptr_t)(&arg_4a0 + dstD)) = x87_r7_23;
            char arg_4a8;
            (*(int32_t*)(uintptr_t)(&arg_4a8 + dstD)) = *(&arg_39c + saved_frame) + (*(int32_t*)(uintptr_t)(&arg_190 + dstD));
            char arg_4b0;
            (*(int32_t*)(uintptr_t)(&arg_4b0 + dstD)) = *(&arg_3a0 + saved_frame) + (*(int32_t*)(uintptr_t)(&arg_198 + dstD));
            __saved_ebp_2 = &(*saved_frame)[3];
            dstD += 0x18;
            arg_18 += 1;
            objC = arg_10;
            saved_frame = __saved_ebp_2;
            v_8 = &(*v_8)[1];
        }

        i += 1;
        objC = &objC[0x38];
        i_1 = i;
        __return_addr += 0x70;
        arg_10 = objC;
    } while (i < 0x16);

    int32_t* valA10 = arg_18;

    if (!valA10)
        return valA10;

    v_18 = 0xffffffff;
    v_1c = arg_18;
    (*(int32_t*)(uintptr_t)(srcS + 0x1b8)) = 0;
    char arg_6b0;
    DynObj_FindSymbol_11(arg_10, &arg_6b0, &arg_188, &arg_4a0, valA10, i_1, v_1c, v_18);
    i_1 = 0;

    if (arg_18 > 0)
    {
        void* dstD1 = &arg_708;
        saved_frame = &arg_130;
        __return_addr = nullptr;
        float arg_24;

        while (true)
        {
            if (*dstD1)
            {
                void* valA14 = *(dstD1 - 8);
                int32_t v_8_1 = 0;

                if (valA14)
                {
                    long double x87_r7_28 = *(valA14 + 0xc);
                    long double f0_1 = 0.0f;
                    x87_r7_28 - f0_1;
                    v_8_1 = 1;

                    if (*(&((x87_r7_28 < f0_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_28, f0_1) ? 1 : 0) << 0xa
                            | (x87_r7_28 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                        v_8_1 = 0;
                }

                double* valA16 = *(dstD1 - 0x58);
                int32_t objC11;

                if (valA16)
                {
                    arg_4 = srcS;
                    a1 = dstD1 - 0x58;
                    a2 = 0.0f;
                    uint32_t valA18 = Script_CallNativeHandler_29();
                    int32_t valA19 = 0;
                    valA19 = *(valA16 + 0x1c);
                    int32_t valA20 = *(((valA18 * 0x180 + valA19) << 2) + &g_a96ae0);

                    if (valA20)
                    {
                        v_18 = &arg_4;
                        v_1c = valA16;
                        valA20(v_1c, v_18);
                    }

                    objC11 = 0;
                    objC11 = !a2;
                    arg_20 = a2;
                }

                long double x87_r7_31;
                long double f1_1;

                if ((!valA16 || objC11) && !v_8_1)
                {
                    long double x87_r7_29 = *(&arg_3a0 + __return_addr);
                    long double x87_r6_13 = *(&arg_39c + __return_addr);
                    char arg_398;
                    long double x87_r5_1 = *(&arg_398 + __return_addr);
                    x87_r7_31 =
                        sqrtl(x87_r5_1 * x87_r5_1 + x87_r7_29 * x87_r7_29 + x87_r6_13 * x87_r6_13)
                        + 40.9599991.0f;
                    f1_1 = *(dstD1 + 8);
                    x87_r7_31 - f1_1;
                }

                int32_t valA25;

                valA25 = (valA16 && !objC11) || (!v_8_1 && *(&((x87_r7_31 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_31, f1_1) ? 1 : 0) << 0xa
                    | (x87_r7_31 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41) ? 0 : 1;

                *dstD1 = valA25;

                if (valA25)
                {
                    int32_t tmpD7 = *saved_frame * 7;
                    (*(int32_t*)(uintptr_t)(srcS + (tmpD7 << 3) + 0x1ec)) = *(dstD1 + 8);
                    long double x87_r7_33 = *(dstD1 - 0x20);
                    long double f2_1 = 0.0f;
                    x87_r7_33 - f2_1;

                    if (!(*(&((x87_r7_33 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_33, f2_1) ? 1 : 0) << 0xa
                        | (x87_r7_33 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
    label_4fbd5a: ;
                        long double x87_r7_36 = *(dstD1 - 0x18);
                        long double x87_r6_15 = *(dstD1 - 0x1c);
                        long double x87_r5_3 = *(dstD1 - 0x20);
                        long double x87_r7_38 = 1.0 / sqrtl(x87_r5_3 * x87_r5_3
                            + x87_r6_15 * x87_r6_15 + x87_r7_36 * x87_r7_36);
                        *(dstD1 - 0x20) = *(dstD1 - 0x20) * x87_r7_38;
                        *(dstD1 - 0x1c) = *(dstD1 - 0x1c) * x87_r7_38;
                        *(dstD1 - 0x18) = *(dstD1 - 0x18) * x87_r7_38;
                    }
                    else
                    {
                        long double x87_r7_34 = *(dstD1 - 0x1c);
                        long double f3_1 = 0.0f;
                        x87_r7_34 - f3_1;

                        if (!(*(&((x87_r7_34 < f3_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_34, f3_1) ? 1 : 0) << 0xa
                                | (x87_r7_34 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4fbd5a;

                        long double x87_r7_35 = *(dstD1 - 0x18);
                        long double f4_1 = 0.0f;
                        x87_r7_35 - f4_1;

                        if (!(*(&((x87_r7_35 < f4_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_35, f4_1) ? 1 : 0) << 0xa
                                | (x87_r7_35 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4fbd5a;
                    }

                    (*(int32_t*)(uintptr_t)(srcS + (tmpD7 << 3) + 0x1e0)) = *(dstD1 - 0x20);
                    (*(int32_t*)(uintptr_t)(srcS + (tmpD7 << 3) + 0x1e4)) = *(dstD1 - 0x1c);
                    (*(int32_t*)(uintptr_t)(srcS + (tmpD7 << 3) + 0x1e8)) = *(dstD1 - 0x18);
                    v_18 = &arg_24;
                    v_1c = srcS + 0x70;

                    if (Script_EvaluateCondition_29(dstD1 - 0x20, srcS + 0xf0, &v_1c + __return_addr + 0x44, v_18)
                            == 2)
                        break;
                }
            }

            __return_addr += 0xc;
            dstD1 += 0x70;
            bool cond_3_1 = i_1 + 1 < arg_18;
            i_1 += 1;
            saved_frame = &(*saved_frame)[1];

            if (!cond_3_1)
                return arg_1c;
        }

        int32_t valA37 = (*(int32_t*)(uintptr_t)(srcS + 0x1b8));
        v_18 = 1;
        arg_1c = 2;
        (*(int32_t*)(uintptr_t)(srcS + 0x1b8)) = valA37 + 1;
        double* dstD2 = arg_130[i_1];
        v_1c = dstD2;
        (*(int32_t*)(uintptr_t)(srcS + dstD2 * 0x38 + 0x1d6)) = 1;
        Script_ExecuteLevelScript_28(srcS, dstD1 - 0x20, &(&v_1c)[i_1 * 3 + 0x11], &arg_24, a1, v_1c);
        float* v_38_1 = &(&v_1c)[i_1 * 3 + 0x11];
        char* v_48_1 = dstD1 - 0x20;
        Script_CallNativeHandler_28(srcS, dstD1 - 0x20, a1, dstD2, a2);

        if (arg_20)
        {
            v_18 = srcS + 0xf0;
            arg_4 = (*(int32_t*)(uintptr_t)(srcS + 0x108));
            float srcS2 = (*(int32_t*)(uintptr_t)(srcS + 0x10c));
            float tmpD14 = (*(int32_t*)(uintptr_t)(srcS + 0x110));
            arg_4 = arg_4 * 0.25.0f;
            (*(int32_t*)(uintptr_t)(srcS + 0x108)) = arg_4;
            (*(int32_t*)(uintptr_t)(srcS + 0x10c)) = srcS2 * 0.25.0f;
            (*(int32_t*)(uintptr_t)(srcS + 0x110)) = tmpD14 * 0.25.0f;
            SoundSys_InitSoundSys_17(v_18);
        }
    }

    return arg_1c;
}

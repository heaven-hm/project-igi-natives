// Original IGI.EXE function: Camera_UpdateViewCone_5 (VA 0x004A5782; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateViewCone_5.h"
long double __convention("regparm") Camera_UpdateViewCone_5(int32_t a1, int16_t a2 @ x87control, int16_t a3 @ x87tag, long double a4 @ fp0, int32_t a5 @ 0x8, int32_t a6 @ 0xc, int32_t a7 @ 0x10, char a8 @ 0x12, int32_t a9 @ 0x13)

{
    int32_t v_4 = a1;
    int16_t x87status;
    int16_t f0;
    f0 = __fnstcw_memmem16(a2);
    v_4 = f0;

    if (v_4 != 0x27f)
        a2 = __load_CW(v_4);

    int32_t objC = a1 & 0x7ff00000;
    long double result;
    int32_t arg_4;
    int32_t valA1;
    int32_t objC6;
    long double fpu7;

    if (objC != 0x7ff00000)
    {
        int32_t valA;
        long double fp0;
        fp0 = __fload_withFB(objC, &arg_4);
        fpu7 = fp0;

        if (objC == 0x7ff00000)
        {
            objC6 = 0;
            goto label_4a5870;
        }

        if (valA & 0x7ff00000 || (a5 & 0xfffff) | arg_4)
        {
            char objC2 = *(&a5 + 3) & 0x80;

            if (objC2)
            {
                objC2 = _test_whether_TOS_is_int(a4);
                fpu7 = -(fpu7);

                if (!objC2)
                {
                    result = g_5443b0;
                    valA1 = 1;
                    goto label_4a57fa;
                }
            }

            long double fp1_1;
            bool c1_1;
            fp1_1 = __fyl2x(fpu7, a4);
            result = __twoToTOS(fp1_1);

            if (objC2 == 1)
                result = -(result);

            if (!g_936058)
            {
                int864_t v_70;
                *(&v_70 + 0x64) = result;
                bool c1_2 = /* bool c1_2 = unknown  {fst qword [esp], fp0} */;
                int32_t valA14 = *(&v_70 + 0x68) & 0x7ff00000;
                int32_t valA16;

                if (!valA14)
                {
                    long double result_1;
                    bool c1_3;
                    result_1 = __fscale(result, 1536.0);
                    result = result_1;
                    long double x87_r7_7 = fabsl(result);
                    long double f1_1 = 2.2250738585072014e-308;
                    x87_r7_7 - f1_1;
                    valA16 = 4;

                    if (TEST_BITB(
                            *(&((x87_r7_7 < f1_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_7, f1_1) ? 1 : 0) << 0xa
                                | (x87_r7_7 == f1_1 ? 1 : 0) << 0xe) + 1),
                            0))
                        result = result * 0.0;
                }
                else if (valA14 == 0x7ff00000)
                {
                    long double result_2;
                    bool c1_4;
                    result_2 = __fscale(result, -1536.0);
                    result = result_2;
                    long double x87_r7_12 = fabsl(result);
                    long double f2_1 = 1.7976931348623157e+308;
                    x87_r7_12 - f2_1;
                    int16_t valA18 = (x87_r7_12 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_12, f2_1) ? 1 : 0) << 0xa
                        | (x87_r7_12 == f2_1 ? 1 : 0) << 0xe;
                    valA16 = 3;

                    if (!TEST_BITB(*(&valA18 + 1), 6) && !TEST_BITB(*(&valA18 + 1), 0))
                        result = result * inf.0;
                }
                else
                {
                    int16_t valA15 = v_4;

                    if (valA15 == 0x27f)
                        return result;

                    bool c0;
                    bool c2;
                    bool c3;

                    if (valA15 & 0x20 || !(((c0 ? 1 : 0) << 8 | (c1_2 ? 1 : 0) << 9
                        | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe) & 0x20))
                    {
                        int16_t x87control_3;
                        int16_t x87status_3;
                        x87control_3 = __fldcw_memmem16(v_4);
                        return result;
                    }

                    valA16 = 8;
                }

                return __startTwoArgErrorHandling(valA16, 0x1d, result, arg_4, a5, a6, a7);
            }
        }
        else if (a7 & 0x7ff00000)
        {
            int16_t objC7 = _test_whether_TOS_is_int(a4);
            *(&objC7 + 1) = *(&a5 + 3);
            *(&objC7 + 1) u>>= 7;

            if (a9 & 0x80)
            {
                result = g_544540;

                if (*(&objC7 + 1) & objC7)
                    result = -(result);

                valA1 = 2;
                goto label_4a57fa;
            }

            result = 0;

            if (*(&objC7 + 1) & objC7)
                result = -(result);
        }
        else if ((a7 & 0xfffff) | a6)
            result = 0;
        else
            result = 1;
    }
    else if ((a1 & 0xfffff) | a6)
    {
        int32_t objC5;
        long double fp0_3;
        fp0_3 = __fload_withFB(0, &arg_4);
        fpu7 = fp0_3;

        if (!(a8 & 8))
        {
            objC6 = objC5 + 1;
            goto label_4a5870;
        }

    label_4a582c:
        result = a4 + fpu7;
        valA1 = 1;
    label_4a57fa:

        if (!g_936058)
            return __startTwoArgErrorHandling(valA1, 0x1d, result, arg_4, a5, a6, a7);
    }
    else
    {
        long double fp0_4;
        fp0_4 = __fload_withFB(0, &arg_4);
        fpu7 = fp0_4;
    label_4a5870:

        if ((a5 & 0x7ff00000) == 0x7ff00000 && (a5 & 0xfffff) | arg_4)
        {
            if (*(&a5 + 2) & 8)
                goto label_4a582c;

            goto label_4a583c;
        }

        if (objC6)
        {
        label_4a583c:
            result = a4 + fpu7;
            valA1 = 7;
            goto label_4a57fa;
        }

        int16_t x87control;
        int16_t x87status_1;
        int16_t x87tag;
        int16_t f0_1;
        f0_1 = __fnsave_memmem108(a2, a3, x87status);
        uint864_t v_70_1 = f0_1;
        void v_78;
        int32_t valA6 = Camera_ResetMatrix_18(fpu7, a4, &v_78);
        __frstor_memmem108(v_70_1);
        result = v_78;

        if (valA6)
        {
            valA1 = 1;
            goto label_4a57fa;
        }
    }
    int16_t x87control_2;
    int16_t x87status_2;

    if (v_4 != 0x27f)
        x87control_2 = __fldcw_memmem16(v_4);
    return result;
}

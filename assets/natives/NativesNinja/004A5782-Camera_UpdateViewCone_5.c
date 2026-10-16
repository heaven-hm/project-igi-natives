#include "004A5782-Camera_UpdateViewCone_5.h"
/* 0x004a5782 Camera_UpdateViewCone_5 full linked: callers=1 callees=11 */
long double __convention("regparm") sub_4a5782(int32_t a1, int16_t a2 @ x87control, int16_t a3 @ x87tag, long double a4 @ st0, int32_t a5 @ 0x8, int32_t a6 @ 0xc, int32_t a7 @ 0x10, char a8 @ 0x12, int32_t a9 @ 0x13)

{
    int32_t var_4 = a1;
    int16_t x87status;
    int16_t temp0;
    temp0 = __fnstcw_memmem16(a2);
    var_4 = temp0;

    if (var_4 != 0x27f)
        a2 = __load_CW(var_4);

    int32_t ecx = a1 & 0x7ff00000;
    long double result;
    int32_t arg_4;
    int32_t eax_1;
    int32_t ecx_6;
    long double x87_r7;

    if (ecx != 0x7ff00000)
    {
        int32_t eax;
        long double st0;
        st0 = __fload_withFB(ecx, &arg_4);
        x87_r7 = st0;

        if (ecx == 0x7ff00000)
        {
            ecx_6 = 0;
            goto label_4a5870;
        }

        if (eax & 0x7ff00000 || (a5 & 0xfffff) | arg_4)
        {
            char ecx_2 = *(&a5 + 3) & 0x80;

            if (ecx_2)
            {
                ecx_2 = _test_whether_TOS_is_int(a4);
                x87_r7 = -(x87_r7);

                if (!ecx_2)
                {
                    result = g_5443b0;
                    eax_1 = 1;
                    goto label_4a57fa;
                }
            }

            long double st1_1;
            bool c1_1;
            st1_1 = __fyl2x(x87_r7, a4);
            result = __twoToTOS(st1_1);

            if (ecx_2 == 1)
                result = -(result);

            if (!g_936058)
            {
                int864_t var_70;
                *(&var_70 + 0x64) = result;
                bool c1_2 = /* bool c1_2 = unknown  {fst qword [esp], st0} */;
                int32_t eax_14 = *(&var_70 + 0x68) & 0x7ff00000;
                int32_t eax_16;

                if (!eax_14)
                {
                    long double result_1;
                    bool c1_3;
                    result_1 = __fscale(result, 1536.0);
                    result = result_1;
                    long double x87_r7_7 = fabsl(result);
                    long double temp1_1 = 2.2250738585072014e-308;
                    x87_r7_7 - temp1_1;
                    eax_16 = 4;

                    if (TEST_BITB(
                            *(&((x87_r7_7 < temp1_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_7, temp1_1) ? 1 : 0) << 0xa
                                | (x87_r7_7 == temp1_1 ? 1 : 0) << 0xe) + 1),
                            0))
                        result = result * 0.0;
                }
                else if (eax_14 == 0x7ff00000)
                {
                    long double result_2;
                    bool c1_4;
                    result_2 = __fscale(result, -1536.0);
                    result = result_2;
                    long double x87_r7_12 = fabsl(result);
                    long double temp2_1 = 1.7976931348623157e+308;
                    x87_r7_12 - temp2_1;
                    int16_t eax_18 = (x87_r7_12 < temp2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_12, temp2_1) ? 1 : 0) << 0xa
                        | (x87_r7_12 == temp2_1 ? 1 : 0) << 0xe;
                    eax_16 = 3;

                    if (!TEST_BITB(*(&eax_18 + 1), 6) && !TEST_BITB(*(&eax_18 + 1), 0))
                        result = result * inf.0;
                }
                else
                {
                    int16_t eax_15 = var_4;

                    if (eax_15 == 0x27f)
                        return result;

                    bool c0;
                    bool c2;
                    bool c3;

                    if (eax_15 & 0x20 || !(((c0 ? 1 : 0) << 8 | (c1_2 ? 1 : 0) << 9
                        | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe) & 0x20))
                    {
                        int16_t x87control_3;
                        int16_t x87status_3;
                        x87control_3 = __fldcw_memmem16(var_4);
                        return result;
                    }

                    eax_16 = 8;
                }

                return __startTwoArgErrorHandling(eax_16, 0x1d, result, arg_4, a5, a6, a7);
            }
        }
        else if (a7 & 0x7ff00000)
        {
            int16_t ecx_7 = _test_whether_TOS_is_int(a4);
            *(&ecx_7 + 1) = *(&a5 + 3);
            *(&ecx_7 + 1) u>>= 7;

            if (a9 & 0x80)
            {
                result = g_544540;

                if (*(&ecx_7 + 1) & ecx_7)
                    result = -(result);

                eax_1 = 2;
                goto label_4a57fa;
            }

            result = 0;

            if (*(&ecx_7 + 1) & ecx_7)
                result = -(result);
        }
        else if ((a7 & 0xfffff) | a6)
            result = 0;
        else
            result = 1;
    }
    else if ((a1 & 0xfffff) | a6)
    {
        int32_t ecx_5;
        long double st0_3;
        st0_3 = __fload_withFB(0, &arg_4);
        x87_r7 = st0_3;

        if (!(a8 & 8))
        {
            ecx_6 = ecx_5 + 1;
            goto label_4a5870;
        }

    label_4a582c:
        result = a4 + x87_r7;
        eax_1 = 1;
    label_4a57fa:

        if (!g_936058)
            return __startTwoArgErrorHandling(eax_1, 0x1d, result, arg_4, a5, a6, a7);
    }
    else
    {
        long double st0_4;
        st0_4 = __fload_withFB(0, &arg_4);
        x87_r7 = st0_4;
    label_4a5870:

        if ((a5 & 0x7ff00000) == 0x7ff00000 && (a5 & 0xfffff) | arg_4)
        {
            if (*(&a5 + 2) & 8)
                goto label_4a582c;

            goto label_4a583c;
        }

        if (ecx_6)
        {
        label_4a583c:
            result = a4 + x87_r7;
            eax_1 = 7;
            goto label_4a57fa;
        }

        int16_t x87control;
        int16_t x87status_1;
        int16_t x87tag;
        int16_t temp0_1;
        temp0_1 = __fnsave_memmem108(a2, a3, x87status);
        uint864_t var_70_1 = temp0_1;
        void var_78;
        int32_t eax_6 = sub_4a9e2c(x87_r7, a4, &var_78);
        __frstor_memmem108(var_70_1);
        result = var_78;

        if (eax_6)
        {
            eax_1 = 1;
            goto label_4a57fa;
        }
    }
    int16_t x87control_2;
    int16_t x87status_2;

    if (var_4 != 0x27f)
        x87control_2 = __fldcw_memmem16(var_4);
    return result;
}

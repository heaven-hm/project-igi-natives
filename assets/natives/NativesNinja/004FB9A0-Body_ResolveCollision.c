#include "004FB9A0-Body_ResolveCollision.h"
/* 0x004fb9a0 Body_ResolveCollision full linked: callers=1 callees=8 */
❓  int32_t* sub_4fb9a0(float a1 @ 0x8, float a2)
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    sub_4a54a0(0x1058);
    float arg_4;
    float esi = arg_4;
    int32_t i = 0;
    int32_t arg_1c = 0;
    double* arg_18 = nullptr;
    float arg_20 = 0f;

    if (!*(esi + 0x68c))
        return 0;

    void arg_708;
    __return_addr = &arg_708;
    char* ecx = esi + 0x1d4;
    int32_t* __saved_ebp_2 = nullptr;
    int32_t i_1 = 0;
    int32_t arg_130[0x16];
    int32_t (* var_8)[0x16] = &arg_130;
    char* arg_10 = ecx;
    int32_t (* __saved_ebp)[0x16] = nullptr;
    int32_t edi = 0;
    double* var_1c;
    float* var_18;
    double arg_188;
    void arg_39c;
    void arg_3a0;
    double arg_4a0;

    do
    {
        *__return_addr = 0;

        if (ecx[1] && *ecx)
        {
            ecx[2] = 0;
            long double x87_r7_1 = *(esi + 0x78);
            float ebx = *(ecx - 0xc);
            int32_t __saved_edi;
            var_18 = &__saved_edi + __saved_ebp_2 + 0x3c;
            *(&__saved_edi + __saved_ebp_2 + 0x3c) = ebx;
            *(&__saved_edi + __saved_ebp_2 + 0x40) = *(ecx - 8);
            *(&__saved_edi + __saved_ebp_2 + 0x44) = *(ecx - 4);
            void arg_2c;
            void arg_30;
            long double x87_r7_4 = x87_r7_1 * *(&arg_30 + __saved_ebp)
                + *(esi + 0x74) * *(&arg_2c + __saved_ebp)
                + *(esi + 0x70) * *(&__saved_edi + __saved_ebp_2 + 0x3c);
            arg_4 = x87_r7_4;
            long double x87_r7_8 = *(esi + 0x84) * *(&arg_30 + __saved_ebp)
                + *(esi + 0x80) * *(&arg_2c + __saved_ebp)
                + *(esi + 0x7c) * *(&__saved_edi + __saved_ebp_2 + 0x3c);
            a1 = x87_r7_8;
            long double x87_r7_11 =
                *(esi + 0x90) * *(&arg_30 + __saved_ebp) + *(esi + 0x8c) * *(&arg_2c + __saved_ebp);
            long double x87_r6_12 = *(esi + 0x88) * *(&__saved_edi + __saved_ebp_2 + 0x3c);
            *(&__saved_edi + __saved_ebp_2 + 0x3c) = arg_4;
            *(&__saved_edi + __saved_ebp_2 + 0x40) = a1;
            a2 = x87_r7_11 + x87_r6_12;
            *(&__saved_edi + __saved_ebp_2 + 0x44) = a2;
            *(&arg_188 + edi) = *(&__saved_edi + __saved_ebp_2 + 0x3c);
            long double x87_r7_14 = *(&arg_2c + __saved_ebp);
            var_1c = esi + 0xf0;
            void arg_190;
            *(&arg_190 + edi) = x87_r7_14;
            void arg_198;
            *(&arg_198 + edi) = *(&arg_30 + __saved_ebp);
            *(&arg_188 + edi) = *(esi + 0x20) + *(&arg_188 + edi);
            *(&arg_190 + edi) = *(esi + 0x28) + *(&arg_190 + edi);
            *(&arg_198 + edi) = *(esi + 0x30) + *(&arg_198 + edi);
            sub_4ecf80(&var_18 + __saved_ebp + 0x3b0, var_1c, var_18);
            long double x87_r7_23 = *(&var_18 + __saved_ebp + 0x3b0) + *(&arg_188 + edi);
            i = i_1;
            *var_8 = i;
            *(&arg_4a0 + edi) = x87_r7_23;
            void arg_4a8;
            *(&arg_4a8 + edi) = *(&arg_39c + __saved_ebp) + *(&arg_190 + edi);
            void arg_4b0;
            *(&arg_4b0 + edi) = *(&arg_3a0 + __saved_ebp) + *(&arg_198 + edi);
            __saved_ebp_2 = &(*__saved_ebp)[3];
            edi += 0x18;
            arg_18 += 1;
            ecx = arg_10;
            __saved_ebp = __saved_ebp_2;
            var_8 = &(*var_8)[1];
        }

        i += 1;
        ecx = &ecx[0x38];
        i_1 = i;
        __return_addr += 0x70;
        arg_10 = ecx;
    } while (i < 0x16);

    int32_t* eax_10 = arg_18;

    if (!eax_10)
        return eax_10;

    var_18 = 0xffffffff;
    var_1c = arg_18;
    *(esi + 0x1b8) = 0;
    void arg_6b0;
    sub_4cc2a0(arg_10, &arg_6b0, &arg_188, &arg_4a0, eax_10, i_1, var_1c, var_18);
    i_1 = 0;

    if (arg_18 > 0)
    {
        void* edi_1 = &arg_708;
        __saved_ebp = &arg_130;
        __return_addr = nullptr;
        float arg_24;

        while (true)
        {
            if (*edi_1)
            {
                void* eax_14 = *(edi_1 - 8);
                int32_t var_8_1 = 0;

                if (eax_14)
                {
                    long double x87_r7_28 = *(eax_14 + 0xc);
                    long double temp0_1 = 0f;
                    x87_r7_28 - temp0_1;
                    var_8_1 = 1;

                    if (*(&((x87_r7_28 < temp0_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_28, temp0_1) ? 1 : 0) << 0xa
                            | (x87_r7_28 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                        var_8_1 = 0;
                }

                double* eax_16 = *(edi_1 - 0x58);
                int32_t ecx_11;

                if (eax_16)
                {
                    arg_4 = esi;
                    a1 = edi_1 - 0x58;
                    a2 = 0f;
                    uint32_t eax_18 = sub_4fc860();
                    int32_t eax_19 = 0;
                    eax_19 = *(eax_16 + 0x1c);
                    int32_t eax_20 = *(((eax_18 * 0x180 + eax_19) << 2) + &g_a96ae0);

                    if (eax_20)
                    {
                        var_18 = &arg_4;
                        var_1c = eax_16;
                        eax_20(var_1c, var_18);
                    }

                    ecx_11 = 0;
                    ecx_11 = !a2;
                    arg_20 = a2;
                }

                long double x87_r7_31;
                long double temp1_1;

                if ((!eax_16 || ecx_11) && !var_8_1)
                {
                    long double x87_r7_29 = *(&arg_3a0 + __return_addr);
                    long double x87_r6_13 = *(&arg_39c + __return_addr);
                    void arg_398;
                    long double x87_r5_1 = *(&arg_398 + __return_addr);
                    x87_r7_31 =
                        sqrtl(x87_r5_1 * x87_r5_1 + x87_r7_29 * x87_r7_29 + x87_r6_13 * x87_r6_13)
                        + 40.9599991f;
                    temp1_1 = *(edi_1 + 8);
                    x87_r7_31 - temp1_1;
                }

                int32_t eax_25;

                eax_25 = (eax_16 && !ecx_11) || (!var_8_1 && *(&((x87_r7_31 < temp1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_31, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r7_31 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x41) ? 0 : 1;

                *edi_1 = eax_25;

                if (eax_25)
                {
                    int32_t edx_7 = *__saved_ebp * 7;
                    *(esi + (edx_7 << 3) + 0x1ec) = *(edi_1 + 8);
                    long double x87_r7_33 = *(edi_1 - 0x20);
                    long double temp2_1 = 0f;
                    x87_r7_33 - temp2_1;

                    if (!(*(&((x87_r7_33 < temp2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_33, temp2_1) ? 1 : 0) << 0xa
                        | (x87_r7_33 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_4fbd5a:
                        long double x87_r7_36 = *(edi_1 - 0x18);
                        long double x87_r6_15 = *(edi_1 - 0x1c);
                        long double x87_r5_3 = *(edi_1 - 0x20);
                        long double x87_r7_38 = 1.0 / sqrtl(x87_r5_3 * x87_r5_3
                            + x87_r6_15 * x87_r6_15 + x87_r7_36 * x87_r7_36);
                        *(edi_1 - 0x20) = *(edi_1 - 0x20) * x87_r7_38;
                        *(edi_1 - 0x1c) = *(edi_1 - 0x1c) * x87_r7_38;
                        *(edi_1 - 0x18) = *(edi_1 - 0x18) * x87_r7_38;
                    }
                    else
                    {
                        long double x87_r7_34 = *(edi_1 - 0x1c);
                        long double temp3_1 = 0f;
                        x87_r7_34 - temp3_1;

                        if (!(*(&((x87_r7_34 < temp3_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_34, temp3_1) ? 1 : 0) << 0xa
                                | (x87_r7_34 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4fbd5a;

                        long double x87_r7_35 = *(edi_1 - 0x18);
                        long double temp4_1 = 0f;
                        x87_r7_35 - temp4_1;

                        if (!(*(&((x87_r7_35 < temp4_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_35, temp4_1) ? 1 : 0) << 0xa
                                | (x87_r7_35 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4fbd5a;
                    }

                    *(esi + (edx_7 << 3) + 0x1e0) = *(edi_1 - 0x20);
                    *(esi + (edx_7 << 3) + 0x1e4) = *(edi_1 - 0x1c);
                    *(esi + (edx_7 << 3) + 0x1e8) = *(edi_1 - 0x18);
                    var_18 = &arg_24;
                    var_1c = esi + 0x70;

                    if (sub_4fc870(edi_1 - 0x20, esi + 0xf0, &var_1c + __return_addr + 0x44, var_18)
                            == 2)
                        break;
                }
            }

            __return_addr += 0xc;
            edi_1 += 0x70;
            bool cond:3_1 = i_1 + 1 < arg_18;
            i_1 += 1;
            __saved_ebp = &(*__saved_ebp)[1];

            if (!cond:3_1)
                return arg_1c;
        }

        int32_t eax_37 = *(esi + 0x1b8);
        var_18 = 1;
        arg_1c = 2;
        *(esi + 0x1b8) = eax_37 + 1;
        double* edi_2 = arg_130[i_1];
        var_1c = edi_2;
        *(esi + edi_2 * 0x38 + 0x1d6) = 1;
        sub_4fbf00(esi, edi_1 - 0x20, &(&var_1c)[i_1 * 3 + 0x11], &arg_24, a1, var_1c);
        float* var_38_1 = &(&var_1c)[i_1 * 3 + 0x11];
        char* var_48_1 = edi_1 - 0x20;
        sub_4fbf50(esi, edi_1 - 0x20, a1, edi_2, a2);

        if (arg_20)
        {
            var_18 = esi + 0xf0;
            arg_4 = *(esi + 0x108);
            float esi_2 = *(esi + 0x10c);
            float edx_14 = *(esi + 0x110);
            arg_4 = arg_4 * 0.25f;
            *(esi + 0x108) = arg_4;
            *(esi + 0x10c) = esi_2 * 0.25f;
            *(esi + 0x110) = edx_14 * 0.25f;
            sub_4ecdb0(var_18);
        }
    }

    return arg_1c;
}

#include "004614B0-Human_MovementIntegrator.h"
/* 0x004614b0 Human_MovementIntegrator full linked: callers=5 callees=15 */
int32_t sub_4614b0(void* a1)

{
    int32_t eax = *(a1 + 0x2f4);
    char var_69 = 0;
    int32_t var_68 = eax;
    float var_5c = *(a1 + 0x664);
    float edx_1 = *(a1 + 0x668);
    int32_t edx_2 = *(a1 + 0x6f8);
    float ecx_1 = *(a1 + 0x66c);
    var_5c = var_5c + *(a1 + 0x520);
    float var_58_1 = edx_1 + *(a1 + 0x524);
    float var_54_1 = ecx_1 + *(a1 + 0x528);
    float* eax_5;

    if (!edx_2 || !(eax & 4))
    {
        eax_5 = a1 + 0x67c;
    label_461770:
        *eax_5 = 0f;
        *(a1 + 0x680) = 0;
        *(a1 + 0x684) = 0;
    }
    else
    {
        float var_44_1 = *(a1 + 0x6d8);
        long double x87_r7_6 = var_44_1;
        long double temp0_1 = 0f;
        x87_r7_6 - temp0_1;
        float var_40_1 = *(a1 + 0x6dc);
        float esi_1 = *(a1 + 0x6e0);

        if (!(*(&((x87_r7_6 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_6 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_46157b:
            long double x87_r7_9 = esi_1;
            long double x87_r6_1 = var_40_1;
            long double x87_r5_1 = var_44_1;
            long double x87_r7_11 =
                1.0 / sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_1 * x87_r6_1 + x87_r7_9 * x87_r7_9);
            var_44_1 = var_44_1 * x87_r7_11;
            var_40_1 = var_40_1 * x87_r7_11;
            esi_1 = esi_1 * x87_r7_11;
        }
        else
        {
            long double x87_r7_7 = var_40_1;
            long double temp1_1 = 0f;
            x87_r7_7 - temp1_1;

            if (!(*(&((x87_r7_7 < temp1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_7, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r7_7 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_46157b;

            long double x87_r7_8 = esi_1;
            long double temp3_1 = 0f;
            x87_r7_8 - temp3_1;

            if (!(*(&((x87_r7_8 < temp3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_8, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r7_8 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_46157b;
        }

        float var_48_1 = esi_1;
        int32_t var_48_2 = 0;
        float var_64_1 = 90f - sub_4b27d0(esi_1) * 57.2957764f;
        long double x87_r0_4 = var_64_1;
        long double temp2_1 = 80f;
        x87_r0_4 - temp2_1;

        if (*(&((x87_r0_4 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r0_4, temp2_1) ? 1 : 0) << 0xa
            | (x87_r0_4 == temp2_1 ? 1 : 0) << 0xe | 0x800) + 1) & 0x41)
        {
            long double x87_r0_9 = var_64_1;
            long double temp4_1 = 60f;
            x87_r0_9 - temp4_1;

            if (*(&((x87_r0_9 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r0_9, temp4_1) ? 1 : 0) << 0xa
                | (x87_r0_9 == temp4_1 ? 1 : 0) << 0xe | 0x800) + 1) & 0x41)
            {
                long double x87_r0_14 = var_64_1;
                long double temp5_1 = 50f;
                x87_r0_14 - temp5_1;

                if (*(&((x87_r0_14 < temp5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r0_14, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r0_14 == temp5_1 ? 1 : 0) << 0xe | 0x800) + 1) & 0x41)
                {
                    long double x87_r0_20 = var_64_1;
                    long double temp6_1 = 45f;
                    x87_r0_20 - temp6_1;

                    if (*(&((x87_r0_20 < temp6_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r0_20, temp6_1) ? 1 : 0) << 0xa
                        | (x87_r0_20 == temp6_1 ? 1 : 0) << 0xe | 0x800) + 1) & 0x41)
                    {
                        eax_5 = a1 + 0x67c;
                        goto label_461770;
                    }

                    eax_5 = a1 + 0x67c;
                    *(a1 + 0x684) = *(a1 + 0x684);
                    var_69 = 1;
                    float var_4c_5 = var_40_1 * 18.9629631f;
                    *eax_5 = var_44_1 * 18.9629631f + *eax_5;
                    *(a1 + 0x680) = var_4c_5 + *(a1 + 0x680);
                }
                else
                {
                    eax_5 = a1 + 0x67c;
                    *(a1 + 0x684) = *(a1 + 0x684);
                    var_69 = 1;
                    float var_4c_4 = var_40_1 * 56.8888893f;
                    *eax_5 = var_44_1 * 56.8888893f + *eax_5;
                    *(a1 + 0x680) = var_4c_4 + *(a1 + 0x680);
                }
            }
            else
            {
                eax_5 = a1 + 0x67c;
                int32_t var_48_4 = 0;
                int32_t* ecx_4 = eax_5;
                var_69 = 1;
                *ecx_4 = var_44_1 * 948f;
                ecx_4[1] = var_40_1 * 948f;
                ecx_4[2] = var_48_4;
            }
        }
        else
        {
            eax_5 = a1 + 0x67c;
            int32_t var_48_3 = 0;
            var_69 = 1;
            *eax_5 = var_44_1 * 1137f;
            eax_5[1] = var_40_1 * 1137f;
            eax_5[2] = var_48_3;
        }
    }

🚫🚫    /* unimplemented  {fld st0, dword [eax]} */
🚫🚫    /* unimplemented  {fmul st0, dword [&g_5335a8]} */  /* "fff?" */
    double var_20;
    memcpy(&var_20, a1 + 0x20, 0x18);
🚫🚫    *eax_5 = /* *eax_5 = unimplemented  {fst dword [eax], st0} */;
🚫🚫    /* unimplemented  {fld st0, dword [ebx+0x680]} */
🚫🚫    /* unimplemented  {fmul st0, dword [&g_5335a8]} */  /* "fff?" */
🚫🚫    float var_64_2 = /* float var_64_2 = unimplemented  {fst dword [esp+0x14], st0} */;
🚫🚫🚫    *(a1 + 0x680) = /* *(a1 + 0x680) = unimplemented  {fstp dword [ebx+0x680], st0} */;
    /* unimplemented  {fstp dword [ebx+0x680], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [ebx+0x684]} */
🚫🚫    /* unimplemented  {fmul st0, dword [&g_5335a8]} */  /* "fff?" */
    int32_t ecx_6 = var_68;
    char eax_6 = *(a1 + 0x694);
🚫🚫    float var_60 = /* float var_60 = unimplemented  {fst dword [esp+0x18], st0} */;
🚫🚫🚫    *(a1 + 0x684) = /* *(a1 + 0x684) = unimplemented  {fstp dword [ebx+0x684], st0} */;
    /* unimplemented  {fstp dword [ebx+0x684], st0} */
🚫🚫    /* unimplemented  {fadd dword [esp+0x1c]} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x14]} */
🚫🚫    /* unimplemented  {fadd dword [esp+0x20]} */
    var_68 = ecx_6 & 0xffffffef;
🚫🚫🚫    float var_58_2 = /* float var_58_2 = unimplemented  {fstp dword [esp+0x20], st0} */;
    /* unimplemented  {fstp dword [esp+0x20], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x18]} */
🚫🚫    /* unimplemented  {fadd dword [esp+0x24]} */
🚫🚫🚫    float var_54_2 = /* float var_54_2 = unimplemented  {fstp dword [esp+0x24], st0} */;
    /* unimplemented  {fstp dword [esp+0x24], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [ebx+0x670]} */
🚫🚫    /* unimplemented  {fmul st0, dword [&g_5335a8]} */  /* "fff?" */
🚫🚫    *(a1 + 0x670) = /* *(a1 + 0x670) = unimplemented  {fst dword [ebx+0x670], st0} */;
🚫🚫    /* unimplemented  {fld st0, dword [ebx+0x674]} */
🚫🚫    /* unimplemented  {fmul st0, dword [&g_5335a8]} */  /* "fff?" */
🚫🚫    float var_60_1 = /* float var_60_1 = unimplemented  {fst dword [esp+0x18], st0} */;
🚫🚫🚫    *(a1 + 0x674) = /* *(a1 + 0x674) = unimplemented  {fstp dword [ebx+0x674], st0} */;
    /* unimplemented  {fstp dword [ebx+0x674], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [ebx+0x678]} */
🚫🚫    /* unimplemented  {fmul st0, dword [&g_5335a8]} */  /* "fff?" */
🚫🚫    float var_64_3 = /* float var_64_3 = unimplemented  {fst dword [esp+0x14], st0} */;
🚫🚫🚫    *(a1 + 0x678) = /* *(a1 + 0x678) = unimplemented  {fstp dword [ebx+0x678], st0} */;
    /* unimplemented  {fstp dword [ebx+0x678], st0} */
🚫🚫    /* unimplemented  {fadd st0, st1} */
🚫🚫🚫    var_5c = /* var_5c = unimplemented  {fstp dword [esp+0x1c], st0} */;
    /* unimplemented  {fstp dword [esp+0x1c], st0} */
🚫🚫🚫    /* unimplemented  {fstp st0, st0} */
    /* unimplemented  {fstp st0, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x18]} */
🚫🚫    /* unimplemented  {fadd dword [esp+0x20]} */
🚫🚫🚫    float var_58_3 = /* float var_58_3 = unimplemented  {fstp dword [esp+0x20], st0} */;
    /* unimplemented  {fstp dword [esp+0x20], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x14]} */
🚫🚫    /* unimplemented  {fadd dword [esp+0x24]} */
🚫🚫🚫    float var_54_3 = /* float var_54_3 = unimplemented  {fstp dword [esp+0x24], st0} */;
    /* unimplemented  {fstp dword [esp+0x24], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [ebx+0x728]} */
🚫🚫    /* unimplemented  {fadd qword [esp+0x58]} */
🚫🚫    var_20 = /* var_20 = unimplemented  {fst qword [esp+0x58], st0} */;
🚫🚫    /* unimplemented  {fld st0, dword [ebx+0x72c]} */
🚫🚫    /* unimplemented  {fadd qword [esp+0x60]} */
🚫🚫🚫    double var_18 = /* double var_18 = unimplemented  {fstp qword [esp+0x60], st0} */;
    /* unimplemented  {fstp qword [esp+0x60], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [ebx+0x730]} */
🚫🚫    /* unimplemented  {fadd qword [esp+0x68]} */
🚫🚫🚫    double var_10 = /* double var_10 = unimplemented  {fstp qword [esp+0x68], st0} */;
    /* unimplemented  {fstp qword [esp+0x68], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x1c]} */
🚫🚫    /* unimplemented  {fadd st0, st1} */
🚫🚫🚫    double var_38 = /* double var_38 = unimplemented  {fstp qword [esp+0x40], st0} */;
    /* unimplemented  {fstp qword [esp+0x40], st0} */
🚫🚫🚫    /* unimplemented  {fstp st0, st0} */
    /* unimplemented  {fstp st0, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x20]} */
🚫🚫    /* unimplemented  {fadd qword [esp+0x60]} */
🚫🚫🚫    double var_30 = /* double var_30 = unimplemented  {fstp qword [esp+0x48], st0} */;
    /* unimplemented  {fstp qword [esp+0x48], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x24]} */
🚫🚫    /* unimplemented  {fadd qword [esp+0x68]} */
🚫🚫🚫    double var_28 = /* double var_28 = unimplemented  {fstp qword [esp+0x50], st0} */;
    /* unimplemented  {fstp qword [esp+0x50], st0} */

    if (!eax_6)
    {
        if (*(a1 + 0x696))
            sub_461a70(a1, &var_20, &var_38, &var_5c, &var_68);

        if (*(a1 + 0x695))
        {
            float var_64_4 = 0f;

            if (var_68 & 4)
                var_64_4 = 2048f;

            if (var_69)
                var_64_4 = 8192f;

            float* var_84_2 = &var_5c;
            sub_462390(a1, &var_20, &var_38, &var_68, var_64_4);
        }

        if (*(a1 + 0x698))
        {
            void* var_88_3 = a1;
            sub_462ba0(&var_20, &var_38, &var_5c);
        }
    }

    if (var_68 & 0x10)
    {
        void* var_80_4 = a1;
        sub_460c80(var_80_4, "Roof!\n");
🚫🚫        /* unimplemented  {fld st0, qword [ebx+0x720]} */
🚫🚫        /* unimplemented  {fmul st0, qword [&g_5334b0]} */
🚫🚫🚫        var_80_4 = /* var_80_4.q = unimplemented  {fstp qword [esp], st0} */;
        /* unimplemented  {fstp qword [esp], st0} */
        sub_460c80(a1, "Distance to roof from feet: %.2f\n");
    }

    float ecx_9 = *(a1 + 0xa0);
    double* var_80_5 = &var_38;
    *(a1 + 0x2f4) = var_68;
    sub_4c6940(Level_StartMission_4(), a1, var_80_5, ecx_9);
    int32_t var_8c_3 = *(&var_38 + 4);
    int32_t var_90_2 = var_38;
    sub_460c80(a1, "PosX: %.2f\n");
    int32_t var_9c = *(&var_30 + 4);
    int32_t var_a0 = var_30;
    sub_460c80(a1, "PosY: %.2f\n");
    int32_t var_ac = *(&var_28 + 4);
    int32_t var_b0 = var_28;
    sub_460c80(a1, "PosZ: %.2f\n");
🚫🚫    /* unimplemented  {fld st0, dword [ebx+0x728]} */
    *(a1 + 0x688) = var_5c;
    *(a1 + 0x68c) = var_58_3;
    *(a1 + 0x690) = var_54_3;
🚫🚫    /* unimplemented  {fadd dword [eax]} */
🚫🚫🚫    *(a1 + 0x688) = /* *(a1 + 0x688) = unimplemented  {fstp dword [eax], st0} */;
    /* unimplemented  {fstp dword [eax], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [ebx+0x72c]} */
🚫🚫    /* unimplemented  {fadd dword [ebx+0x68c]} */
🚫🚫🚫    *(a1 + 0x68c) = /* *(a1 + 0x68c) = unimplemented  {fstp dword [ebx+0x68c], st0} */;
    /* unimplemented  {fstp dword [ebx+0x68c], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [ebx+0x730]} */
🚫🚫    /* unimplemented  {fadd dword [ebx+0x690]} */
🚫🚫🚫    *(a1 + 0x690) = /* *(a1 + 0x690) = unimplemented  {fstp dword [ebx+0x690], st0} */;
    /* unimplemented  {fstp dword [ebx+0x690], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x24]} */
🚫🚫🚫    var_80_5 = /* var_80_5.q = unimplemented  {fstp qword [esp], st0} */;
    /* unimplemented  {fstp qword [esp], st0} */
    sub_460c80(a1, "SpeedX: %.2f\n");
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x30]} */
🚫🚫🚫    var_80_5 = /* var_80_5.q = unimplemented  {fstp qword [esp], st0} */;
    /* unimplemented  {fstp qword [esp], st0} */
    sub_460c80(a1, "SpeedY: %.2f\n");
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x34]} */
🚫🚫🚫    var_80_5 = /* var_80_5.q = unimplemented  {fstp qword [esp], st0} */;
    /* unimplemented  {fstp qword [esp], st0} */
    return sub_460c80(a1, "SpeedZ: %.2f\n");
}

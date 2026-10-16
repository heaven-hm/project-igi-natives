#include "004255A0-Menu_LeaveMenus_16.h"
/* 0x004255a0 Menu_LeaveMenus_16 full linked: callers=1 callees=26 */
int32_t* Menu_LeaveMenus_16(long double a1 @ st0, double* a2)

{
    double* eax = Menu_DrawWidget_16(a2);
    void* eax_1 = sub_453720(&a2[6]);
    sub_453540(eax_1);
    double var_60;
    sub_4f9770(&var_60, a2[0xd]);
    long double x87_r7_1 = *eax - var_60;
    double var_78;
    double* var_a8 = &var_78;
    var_78 = x87_r7_1;
    double var_58;
    double var_70 = eax[1] - var_58;
    double var_50;
    double var_68 = eax[2] - var_50;
    long double st0 = sub_4b3160(var_a8);
    double var_80 = st0;
    long double temp0 = 1677721600.0;
    st0 - temp0;
    int32_t* result;
    double var_30;

    if (*(&((st0 < temp0 ? 1 : 0) << 8 | (FCMP_UO(st0, temp0) ? 1 : 0) << 0xa
        | (st0 == temp0 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        int32_t eax_7 = sub_485320(eax_1);
        void* eax_9 = sub_4f9720(*(a2 + 0x2c), eax_7);
        double var_18[0x3];
        sub_4f9770(&var_18, eax_9);
        double* var_c0;
        double var_48;
        double var_28;
        double var_20;

        if (eax_9 == a2[0xd])
        {
            result = sub_453730(&a2[6]);

            if (!result)
            {
                *(a2 + 0x6c);
                return result;
            }

            int32_t eax_16 = sub_453540(result);

            if (!Menu_UpdateLanguage_16(eax_16))
            {
                result = Menu_FormatScreen_16(eax_16);

                if (result)
                {
                    *(a2 + 0x6c);
                    return result;
                }

                *(a2 + 0x6c);
                return result;
            }

            int32_t eax_18 = sub_485320(result);
            int32_t* eax_20 = sub_4f9720(*(a2 + 0x2c), eax_18);
            sub_4f9770(&var_30, eax_20);
            int32_t edx_3 = *eax_20;
            void* ecx_2 = *(a2 + 0x2c);
            var_a8 = a2;
            Menu_CaraiErrorInGraphDNo(&var_30, ecx_2, &var_30, edx_3, var_a8);
            long double x87_r7_20 = var_30 - var_60;
            double* var_bc_2 = &var_48;
            var_c0 = &var_78;
            var_48 = x87_r7_20;
            double var_40_2 = var_28 - var_58;
            double var_38_2 = var_20 - var_50;
            int80_t st0_2;
            st0_2 = sub_4b31f0(var_c0, var_bc_2);
        }
        else
        {
            sub_5096f0(&var_80, *(a2 + 0x2c), &var_18);
            int32_t* eax_14 = Menu_CaraiErrorInGraphDNo_2(Menu_DrawWidget_16(a2), *(a2 + 0x2c),
                *var_80, a2);
            var_a8 = &var_30;
            sub_4f9770(var_a8, eax_14);
            Menu_CaraiErrorInGraphDNo(&var_30, *(a2 + 0x2c), &var_30, *eax_14, a2);
            long double x87_r7_11 = var_30 - var_60;
            var_c0 = &var_48;
            var_48 = x87_r7_11;
            double var_40_1 = var_28 - var_58;
            double var_38_1 = var_20 - var_50;
            int80_t st0_1;
            st0_1 = sub_4b31f0(&var_78, var_c0);
        }
        long double x87_r6_4 = *(a2 + 0x6c);
        long double temp1_1 = 5f;
        x87_r6_4 - temp1_1;
        result = (x87_r6_4 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_4, temp1_1) ? 1 : 0) << 0xa
            | (x87_r6_4 == temp1_1 ? 1 : 0) << 0xe | 0x3800;

        if (*(&result + 1) & 1)
        {
            *(a2 + 0x6c);
            return result;
        }
    }
    else
    {
        long double x87_r7_8 = -(var_78);
        var_78 = x87_r7_8;
        void* eax_5 = *(a2 + 0x4c);
        long double x87_r6_2 = -(var_70);
        double var_70_1 = x87_r6_2;
        long double x87_r5_2 = -(var_68);
        double var_68_1 = x87_r5_2;
        var_30 =
            *(eax_5 + 0x88) * x87_r5_2 + *(eax_5 + 0x7c) * x87_r6_2 + *(eax_5 + 0x70) * x87_r7_8;
        double var_28_1 =
            *(eax_5 + 0x8c) * x87_r5_2 + *(eax_5 + 0x80) * x87_r6_2 + *(eax_5 + 0x74) * x87_r7_8;
        double var_20_1 =
            *(eax_5 + 0x90) * x87_r5_2 + *(eax_5 + 0x84) * x87_r6_2 + *(eax_5 + 0x78) * x87_r7_8;
        memcpy(&var_78, &var_30, 0x18);
        memcpy(&var_a8, &var_30, 0x18);
        result = WeaponType_GetConfig();
        long double temp2_1 = 0.0;
        a1 - temp2_1;
        result = (a1 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(a1, temp2_1) ? 1 : 0) << 0xa
            | (a1 == temp2_1 ? 1 : 0) << 0xe;
    }
🚫🚫    /* unimplemented  {fld st0, dword [ebx+0x6c]} */
🚫🚫    /* unimplemented  {fsub st0, dword [&g_5335f8]} */
🚫🚫    /* unimplemented  {fld st0, qword [&g_533618]} */
🚫🚫    /* unimplemented  {fsub st0, st2} */
🚫🚫🚫    /* unimplemented  {fmulp st1, st0} */
    /* unimplemented  {fmulp st1, st0} */
🚫🚫    /* unimplemented  {fmul st0, qword [&g_533610]} */
🚫🚫    /* unimplemented  {fadd qword [&g_533608]} */
🚫🚫🚫    /* unimplemented  {fstp st1, st0} */
    /* unimplemented  {fstp st1, st0} */
    return result;
}

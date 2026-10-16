#include "Menu_LeaveMenus_16.h"
int32_t* Menu_LeaveMenus_16(long double a1 @ fp0, double* a2)

{
    double* valA = Menu_DrawWidget_16(a2);
    void* valA1 = PatrolPath_Action(&a2[6]);
    PatrolPathCommand_Process(valA1);
    double v_60;
    Script_CallNativeHandler_23(&v_60, a2[0xd]);
    long double x87_r7_1 = *valA - v_60;
    double v_78;
    double* v_a8 = &v_78;
    v_78 = x87_r7_1;
    double v_58;
    double v_70 = valA[1] - v_58;
    double v_50;
    double v_68 = valA[2] - v_50;
    long double fp0 = Sys_ReadFileBlock_11(v_a8);
    double v_80 = fp0;
    long double f0 = 1677721600.0;
    fp0 - f0;
    int32_t* result;
    double v_30;

    if (*(&((fp0 < f0 ? 1 : 0) << 8 | (FCMP_UO(fp0, f0) ? 1 : 0) << 0xa
        | (fp0 == f0 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        int32_t valA7 = GameScreen_Process(valA1);
        void* valA9 = Script_ExecuteLevelScript_23(*(a2 + 0x2c), valA7);
        double v_18[0x3];
        Script_CallNativeHandler_23(&v_18, valA9);
        double* v_c0;
        double v_48;
        double v_28;
        double v_20;

        if (valA9 == a2[0xd])
        {
            result = PatrolPath_OnTick(&a2[6]);

            if (!result)
            {
                *(a2 + 0x6c);
                return result;
            }

            int32_t valA16 = PatrolPathCommand_Process(result);

            if (!Menu_UpdateLanguage_16(valA16))
            {
                result = Menu_FormatScreen_16(valA16);

                if (result)
                {
                    *(a2 + 0x6c);
                    return result;
                }

                *(a2 + 0x6c);
                return result;
            }

            int32_t valA18 = GameScreen_Process(result);
            int32_t* valA20 = Script_ExecuteLevelScript_23(*(a2 + 0x2c), valA18);
            Script_CallNativeHandler_23(&v_30, valA20);
            int32_t tmpD3 = *valA20;
            void* objC2 = *(a2 + 0x2c);
            v_a8 = a2;
            Menu_CaraiErrorInGraphDNo(&v_30, objC2, &v_30, tmpD3, v_a8);
            long double x87_r7_20 = v_30 - v_60;
            double* v_bc_2 = &v_48;
            v_c0 = &v_78;
            v_48 = x87_r7_20;
            double v_40_2 = v_28 - v_58;
            double v_38_2 = v_20 - v_50;
            int80_t fp0_2;
            fp0_2 = Sys_ExecuteBytecode_11(v_c0, v_bc_2);
        }
        else
        {
            Physics_ApplyImpulse_8(&v_80, *(a2 + 0x2c), &v_18);
            int32_t* valA14 = Menu_CaraiErrorInGraphDNo_2(Menu_DrawWidget_16(a2), *(a2 + 0x2c),
                *v_80, a2);
            v_a8 = &v_30;
            Script_CallNativeHandler_23(v_a8, valA14);
            Menu_CaraiErrorInGraphDNo(&v_30, *(a2 + 0x2c), &v_30, *valA14, a2);
            long double x87_r7_11 = v_30 - v_60;
            v_c0 = &v_48;
            v_48 = x87_r7_11;
            double v_40_1 = v_28 - v_58;
            double v_38_1 = v_20 - v_50;
            int80_t fp0_1;
            fp0_1 = Sys_ExecuteBytecode_11(&v_78, v_c0);
        }
        long double x87_r6_4 = *(a2 + 0x6c);
        long double f1_1 = 5f;
        x87_r6_4 - f1_1;
        result = (x87_r6_4 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_4, f1_1) ? 1 : 0) << 0xa
            | (x87_r6_4 == f1_1 ? 1 : 0) << 0xe | 0x3800;

        if (*(&result + 1) & 1)
        {
            *(a2 + 0x6c);
            return result;
        }
    }
    else
    {
        long double x87_r7_8 = -(v_78);
        v_78 = x87_r7_8;
        void* valA5 = *(a2 + 0x4c);
        long double x87_r6_2 = -(v_70);
        double v_70_1 = x87_r6_2;
        long double x87_r5_2 = -(v_68);
        double v_68_1 = x87_r5_2;
        v_30 =
            *(valA5 + 0x88) * x87_r5_2 + *(valA5 + 0x7c) * x87_r6_2 + *(valA5 + 0x70) * x87_r7_8;
        double v_28_1 =
            *(valA5 + 0x8c) * x87_r5_2 + *(valA5 + 0x80) * x87_r6_2 + *(valA5 + 0x74) * x87_r7_8;
        double v_20_1 =
            *(valA5 + 0x90) * x87_r5_2 + *(valA5 + 0x84) * x87_r6_2 + *(valA5 + 0x78) * x87_r7_8;
        memcpy(&v_78, &v_30, 0x18);
        memcpy(&v_a8, &v_30, 0x18);
        result = WeaponType_GetConfig();
        long double f2_1 = 0.0;
        a1 - f2_1;
        result = (a1 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(a1, f2_1) ? 1 : 0) << 0xa
            | (a1 == f2_1 ? 1 : 0) << 0xe;
    }
🚫🚫    /* unimplemented  {fld fp0, dword [ctxB+0x6c]} */
🚫🚫    /* unimplemented  {fsub fp0, dword [&g_5335f8]} */
🚫🚫    /* unimplemented  {fld fp0, qword [&g_533618]} */
🚫🚫    /* unimplemented  {fsub fp0, fp2} */
🚫🚫🚫    /* unimplemented  {fmulp fp1, fp0} */
    /* unimplemented  {fmulp fp1, fp0} */
🚫🚫    /* unimplemented  {fmul fp0, qword [&g_533610]} */
🚫🚫    /* unimplemented  {fadd qword [&g_533608]} */
🚫🚫🚫    /* unimplemented  {fstp fp1, fp0} */
    /* unimplemented  {fstp fp1, fp0} */
    return result;
}

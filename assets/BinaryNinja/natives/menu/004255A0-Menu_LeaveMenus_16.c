// IGI native provenance: Menu_LeaveMenus_16 - 0x004255A0 - CFG score 97.4% (PASS; structural only); runtime behavior not verified.
// Evidence: 004255A0-Menu_LeaveMenus_16.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_LeaveMenus_16.h"
int32_t* Menu_LeaveMenus_16(long double context , double* param_2)

{
    double* data_val = Menu_DrawWidget_16(param_2);
    void* data_1 = PatrolPath_Action(&param_2[6]);
    PatrolPathCommand_Process(data_1);
    double item_60;
    Script_CallNativeHandler_23(&item_60, param_2[0xd]);
    long double fpu_val_7_1 = *data_val - item_60;
    double item_78;
    double* item_a8 = &item_78;
    item_78 = fpu_val_7_1;
    double item_58;
    double item_70 = data_val[1] - item_58;
    double item_50;
    double item_68 = data_val[2] - item_50;
    long double fp0 = Sys_ReadFileBlock_11(item_a8);
    double item_80 = fp0;
    long double f0 = 1677721600.0;
    fp0 - f0;
    int32_t* result;
    double item_30;

    if (*(&((fp0 < f0 ? 1 : 0) << 8 | (FCMP_UO(fp0, f0) ? 1 : 0) << 0xa
        | (fp0 == f0 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        int32_t data_7 = GameScreen_Process(data_1);
        void* data_9 = Script_ExecuteLevelScript_23(*(param_2 + 0x2c), data_7);
        double item_18[0x3];
        Script_CallNativeHandler_23(&item_18, data_9);
        double* item_c0;
        double item_48;
        double item_28;
        double item_20;

        if (data_9 == param_2[0xd])
        {
            result = PatrolPath_OnTick(&param_2[6]);

            if (!result)
            {
                *(param_2 + 0x6c);
                return result;
            }

            int32_t data_16 = PatrolPathCommand_Process(result);

            if (!Menu_UpdateLanguage_16(data_16))
            {
                result = Menu_FormatScreen_16(data_16);

                if (result)
                {
                    *(param_2 + 0x6c);
                    return result;
                }

                *(param_2 + 0x6c);
                return result;
            }

            int32_t data_18 = GameScreen_Process(result);
            int32_t* data_20 = Script_ExecuteLevelScript_23(*(param_2 + 0x2c), data_18);
            Script_CallNativeHandler_23(&item_30, data_20);
            int32_t temp_3 = *data_20;
            void* entity_2 = *(param_2 + 0x2c);
            item_a8 = param_2;
            Menu_CaraiErrorInGraphDNo(&item_30, entity_2, &item_30, temp_3, item_a8);
            long double fpu_val_7_20 = item_30 - item_60;
            double* item_bc_2 = &item_48;
            item_c0 = &item_78;
            item_48 = fpu_val_7_20;
            double item_40_2 = item_28 - item_58;
            double item_38_2 = item_20 - item_50;
            long double fp0_2;
            fp0_2 = Sys_ExecuteBytecode_11(item_c0, item_bc_2);
        }
        else
        {
            Physics_ApplyImpulse_8(&item_80, *(param_2 + 0x2c), &item_18);
            int32_t* data_14 = Menu_CaraiErrorInGraphDNo_2(Menu_DrawWidget_16(param_2), *(param_2 + 0x2c),
                *item_80, param_2);
            item_a8 = &item_30;
            Script_CallNativeHandler_23(item_a8, data_14);
            Menu_CaraiErrorInGraphDNo(&item_30, *(param_2 + 0x2c), &item_30, *data_14, param_2);
            long double fpu_val_7_11 = item_30 - item_60;
            item_c0 = &item_48;
            item_48 = fpu_val_7_11;
            double item_40_1 = item_28 - item_58;
            double item_38_1 = item_20 - item_50;
            long double fp0_1;
            fp0_1 = Sys_ExecuteBytecode_11(&item_78, item_c0);
        }
        long double fpu_val_6_4 = *(param_2 + 0x6c);
        long double f1_1 = 5.0f;
        fpu_val_6_4 - f1_1;
        result = (fpu_val_6_4 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_4, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_6_4 == f1_1 ? 1 : 0) << 0xe | 0x3800;

        if (*(&result + 1) & 1)
        {
            *(param_2 + 0x6c);
            return result;
        }
    }
    else
    {
        long double fpu_val_7_8 = -(item_78);
        item_78 = fpu_val_7_8;
        void* data_5 = *(param_2 + 0x4c);
        long double fpu_val_6_2 = -(item_70);
        double item_70_1 = fpu_val_6_2;
        long double fpu_val_5_2 = -(item_68);
        double item_68_1 = fpu_val_5_2;
        item_30 =
            *(data_5 + 0x88) * fpu_val_5_2 + *(data_5 + 0x7c) * fpu_val_6_2 + *(data_5 + 0x70) * fpu_val_7_8;
        double item_28_1 =
            *(data_5 + 0x8c) * fpu_val_5_2 + *(data_5 + 0x80) * fpu_val_6_2 + *(data_5 + 0x74) * fpu_val_7_8;
        double item_20_1 =
            *(data_5 + 0x90) * fpu_val_5_2 + *(data_5 + 0x84) * fpu_val_6_2 + *(data_5 + 0x78) * fpu_val_7_8;
        memcpy(&item_78, &item_30, 0x18);
        memcpy(&item_a8, &item_30, 0x18);
        result = WeaponType_GetConfig();
        long double f2_1 = 0.0;
        context - f2_1;
        result = (context < f2_1 ? 1 : 0) << 8 | (FCMP_UO(context, f2_1) ? 1 : 0) << 0xa
            | (context == f2_1 ? 1 : 0) << 0xe;
    }
🚫🚫    /* unimplemented  {fld fp0, dword [context_val+0x6c]} */
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

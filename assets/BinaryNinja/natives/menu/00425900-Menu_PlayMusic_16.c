// Original IGI.EXE function: Menu_PlayMusic_16 (VA 0x00425900; static CFG gate PASS, CFG score 0.929).
#include "Menu_PlayMusic_16.h"
int32_t* Menu_PlayMusic_16(long double context , void* param_2)

{
    double* data_val = Menu_DrawWidget_16(param_2);
    double* item_98 = *(param_2 + 0x68);
    double item_50;
    Script_CallNativeHandler_23(&item_50, item_98);
    double item_80;
    double* item_a0 = &item_80;
    item_80 = *data_val - item_50;
    double item_48;
    double item_78 = data_val[1] - item_48;
    double item_40;
    double item_70 = data_val[2] - item_40;
    long double fp0 = Sys_ReadFileBlock_11(item_a0);
    double item_38 = fp0;
    long double f0 = 3288334336.0;
    fp0 - f0;
    double* item_a8;
    double item_68;

    if (!(*(&((fp0 < f0 ? 1 : 0) << 8 | (FCMP_UO(fp0, f0) ? 1 : 0) << 0xa
        | (fp0 == f0 ? 1 : 0) << 0xe) + 1) & 0x41))
    {
        long double fpu_val_7_8 = -(item_80);
        item_80 = fpu_val_7_8;
        void* data_4 = *(param_2 + 0x4c);
        long double fpu_val_6_1 = -(item_78);
        double item_78_1 = fpu_val_6_1;
        long double fpu_val_5_1 = -(item_70);
        double item_70_1 = fpu_val_5_1;
        item_68 =
            *(data_4 + 0x88) * fpu_val_5_1 + *(data_4 + 0x7c) * fpu_val_6_1 + *(data_4 + 0x70) * fpu_val_7_8;
        double item_60_1 =
            *(data_4 + 0x8c) * fpu_val_5_1 + *(data_4 + 0x80) * fpu_val_6_1 + *(data_4 + 0x74) * fpu_val_7_8;
        double item_58_1 =
            *(data_4 + 0x90) * fpu_val_5_1 + *(data_4 + 0x84) * fpu_val_6_1 + *(data_4 + 0x78) * fpu_val_7_8;
        memcpy(&item_80, &item_68, 0x18);
        memcpy(&item_a8, &item_68, 0x18);
        int32_t data_6 = WeaponType_GetConfig();
        long double f3 = 0.0;
        context - f3;
        data_6 = (context < f3 ? 1 : 0) << 8 | (FCMP_UO(context, f3) ? 1 : 0) << 0xa
            | (context == f3 ? 1 : 0) << 0xe;
        *(param_2 + 0x6c);
        return data_6;
    }

    double* data_8 = DynObj_UpdateDynTree_4(*(param_2 + 0x74));
    void* entity_val = *(param_2 + 0x2c);
    item_98 = data_8;
    int32_t* item_84;
    Physics_ApplyImpulse_8(&item_84, entity_val, item_98);
    int32_t* data_9 = item_84;
    void item_18;
    item_a8 = &item_18;
    Script_CallNativeHandler_23(item_a8, data_9);
    int32_t* data_10 = *(param_2 + 0x68);
    int32_t* entity_1 = item_84;

    if (entity_1 == data_10)
    {
        *(param_2 + 0x6c);
        return data_10;
    }

    int32_t temp_val = *entity_1;
    void* entity_2 = *(param_2 + 0x2c);
    item_98 = *data_10;
    int32_t* data_12 = Physics_CheckHullCollision_8(entity_2, item_98, temp_val);

    if (!data_12)
        memcpy(&item_68, &item_18, 0x18);
    else
    {
        int32_t temp_1 = *data_12;
        item_98 = *(param_2 + 0x2c);
        Script_CallNativeHandler_23(&item_68, Script_ExecuteLevelScript_23(item_98, temp_1));
    }

    long double fpu_val_7_16 = item_68 - item_50;
    double item_30;
    double* item_94_4 = &item_30;
    item_98 = &item_80;
    item_30 = fpu_val_7_16;
    double item_60;
    double item_28 = item_60 - item_48;
    double item_58;
    double item_20 = item_58 - item_40;
    int32_t data_15;
    long double fp0_1;
    fp0_1 = Sys_ExecuteBytecode_11(item_98, item_94_4);
    long double fpu_val_6_5 = *(param_2 + 0x6c);
    long double f1 = 5.0f;
    fpu_val_6_5 - f1;
    data_15 = (fpu_val_6_5 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_5, f1) ? 1 : 0) << 0xa
        | (fpu_val_6_5 == f1 ? 1 : 0) << 0xe | 0x3800;

    if (*(&data_15 + 1) & 1)
    {
        *(param_2 + 0x6c);
        return data_15;
    }

    long double f2 = 0.17453293005625406;
    fp0_1 - f2;
    data_15 = (fp0_1 < f2 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, f2) ? 1 : 0) << 0xa
        | (fp0_1 == f2 ? 1 : 0) << 0xe | 0x3800;

    if (!(*(&data_15 + 1) & 1))
        return data_15;

    *(param_2 + 0x6c);
    return data_15;
}

// Original IGI.EXE function: Menu_LeaveMenus_17 (VA 0x00426140; static CFG gate PASS, CFG score 0.944).
#include "Menu_LeaveMenus_17.h"
int32_t Menu_LeaveMenus_17(long double context , long double param_2 , float param_3)

{
    float context_val = param_3;
    Menu_LeaveMenus_16(context, context_val);
    *(context_val + 0x64) = param_2;
    Menu_UpdateLanguage_17(context_val + 0x58, context_val + 0x60, context_val);
    double* data_1 = Menu_DrawWidget_16(context_val);
    void* source_val = *(context_val + 0x4c);
    void* item_58 = *(context_val + 0x68);
    double item_30;
    Script_CallNativeHandler_23(&item_30, item_58);
    long double fpu_val_7_1 = item_30 - *data_1;
    double item_28;
    long double fpu_val_6_1 = item_28 - data_1[1];
    double item_20;
    long double fpu_val_5_1 = item_20 - data_1[2];
    double item_18 = *(source_val + 0x88) * fpu_val_5_1 + *(source_val + 0x7c) * fpu_val_6_1 + *(source_val + 0x70) * fpu_val_7_1;
    double item_10 = *(source_val + 0x8c) * fpu_val_5_1 + *(source_val + 0x80) * fpu_val_6_1 + *(source_val + 0x74) * fpu_val_7_1;
    double item_8 = *(source_val + 0x90) * fpu_val_5_1 + *(source_val + 0x84) * fpu_val_6_1 + *(source_val + 0x78) * fpu_val_7_1;
    memcpy(&item_58, &item_18, 0x18);
    WeaponType_GetConfig();
    param_3 = context;
    long double f0 = 0.174532935f;
    context - f0;
    int16_t result = (context < f0 ? 1 : 0) << 8 | (FCMP_UO(context, f0) ? 1 : 0) << 0xa
        | (context == f0 ? 1 : 0) << 0xe | 0x800;

    if (*(&result + 1) & 0x41)
    {
        long double fpu0 = param_3;
        long double f1_1 = -0.174532935f;
        fpu0 - f1_1;
        result = (fpu0 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu0, f1_1) ? 1 : 0) << 0xa
            | (fpu0 == f1_1 ? 1 : 0) << 0xe | 0x800;

        if (!(*(&result + 1) & 1))
            *(context_val + 0x5c) = param_3 * -1.9098593f;
        else
            *(context_val + 0x5c) = 0x3f800000;
    }
    else
        *(context_val + 0x5c) = 0xbf800000;

    *(context_val + 0x5c) = ((1.0f - *(context_val + 0x58)) * 0.949999988f + 0.0500000007f) * *(context_val + 0x5c);
    return result;
}

// Original IGI.EXE function: CarAI_Combat (VA 0x004262F0; static CFG gate PASS, CFG score 0.939).
#include "CarAI_Combat.h"
int32_t CarAI_Combat(long double context , float param_2)

{
    float context_val = param_2;
    long double fpu7 = *(context_val + 0x6c);
    long double f0 = 0.0f;
    fpu7 - f0;
    int32_t flagP;

    flagP = !(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x40) ? 0 : 1;

    double* data_1 = Menu_DrawWidget_16(context_val);
    void* source_val = *(context_val + 0x4c);
    int32_t* item_60 = *(context_val + 0x68);
    double item_18;
    Script_CallNativeHandler_23(&item_18, item_60);
    double item_48;
    double* item_68 = &item_48;
    item_48 = item_18 - *data_1;
    double item_10;
    double item_40 = item_10 - data_1[1];
    double item_8;
    double item_38 = item_8 - data_1[2];
    Sys_ReadFileBlock_11(item_68);

    if (flagP)
    {
        long double fpu_val_7_10 = *DynObj_UpdateDynTree_4(*(context_val + 0x74)) - *data_1;
        item_60 = *(context_val + 0x74);
        item_48 = fpu_val_7_10;
        item_40 = *(DynObj_UpdateDynTree_4(item_60) + 8) - data_1[1];
        item_38 = *(DynObj_UpdateDynTree_4(*(context_val + 0x74)) + 0x10) - data_1[2];
    }

    double item_30 = *(source_val + 0x88) * item_38 + *(source_val + 0x7c) * item_40 + *(source_val + 0x70) * item_48;
    double item_28 = *(source_val + 0x8c) * item_38 + *(source_val + 0x80) * item_40 + *(source_val + 0x74) * item_48;
    double item_20 = *(source_val + 0x90) * item_38 + *(source_val + 0x84) * item_40 + *(source_val + 0x78) * item_48;
    memcpy(&item_48, &item_30, 0x18);
    void item_70;
    memcpy(&item_70, &item_30, 0x18);
    WeaponType_GetConfig();
    param_2 = context;
    long double f1 = 0.174532935f;
    context - f1;

    if (*(&((context < f1 ? 1 : 0) << 8 | (FCMP_UO(context, f1) ? 1 : 0) << 0xa
        | (context == f1 ? 1 : 0) << 0xe | 0x800) + 1) & 0x41)
    {
        long double fpu0 = param_2;
        long double f2_1 = -0.174532935f;
        fpu0 - f2_1;

        if (!(*(&((fpu0 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu0, f2_1) ? 1 : 0) << 0xa
                | (fpu0 == f2_1 ? 1 : 0) << 0xe | 0x800) + 1) & 1))
            *(context_val + 0x5c) = param_2 * -1.9098593f;
        else
            *(context_val + 0x5c) = 0x3f800000;
    }
    else
        *(context_val + 0x5c) = 0xbf800000;

    int16_t idx;
    int16_t top_1;

    if (!flagP)
    {
        long double fpu1;
        Menu_PlayMusic_16(fpu1, context_val);
        top_1 = 2;
🚫🚫🚫    label_4264b4:
        *(context_val + 0x64) =
        /* unimplemented  {fstp dword [context_val+0x64], fp0} */
        idx = top_1 + 1;
    }
    else
    {
        long double fpu_val_0_3 = param_2;
        long double f3_1 = 0.0f;
        fpu_val_0_3 - f3_1;
        long double fpu_val_0_4 = param_2;

        if (*(&((fpu_val_0_3 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_0_3, f3_1) ? 1 : 0) << 0xa
                | (fpu_val_0_3 == f3_1 ? 1 : 0) << 0xe) + 1) & 1)
            fpu_val_0_4 = -(fpu_val_0_4);

        long double f4_1 = 0.174532935f;
        fpu_val_0_4 - f4_1;
        idx = 1;

        if (*(&((fpu_val_0_4 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_0_4, f4_1) ? 1 : 0) << 0xa
            | (fpu_val_0_4 == f4_1 ? 1 : 0) << 0xe | 0x800) + 1) & 0x41)
        {
            param_2 - 0.0f;
            top_1 = 0;
            goto label_4264b4;
        }

        *(context_val + 0x64) = 0x40a00000;
    }
    item_60 = context_val + 0x60;
    int16_t result = Menu_UpdateLanguage_17(context_val + 0x58, item_60, context_val);

    if (flagP)
    {
🚫🚫        /* unimplemented  {fld fp0, dword [stack_ptr+0x5c]} */
⋯        long double f6_1 = 0.0f;
        /* unimplemented  {fcomp fp0, dword [&g_5333ec]} f- f6_1 */ - f6_1;
        bool c0_6 = /* bool c0_6 =
            unimplemented  {fcomp fp0, dword [&g_5333ec]} f< f6_1 */ < f6_1;
        bool c2_6 = FCMP_UO(/* bool c2_6 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5333ec]}, f6_1) */, f6_1);
        bool c3_6 = /* bool c3_6 =
            unimplemented  {fcomp fp0, dword [&g_5333ec]} f== f6_1 */ == f6_1;
        /* unimplemented  {fcomp fp0, dword [&g_5333ec]} */
🚫🚫        /* unimplemented  {fld fp0, dword [stack_ptr+0x5c]} */

        if (*(&((c0_6 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa | (c3_6 ? 1 : 0) << 0xe
                | ((idx - 1) & 7) << 0xb) + 1) & 1)
🚫🚫            /* unimplemented  {fchs } */

⋯        long double f7_1 = 0.174532935f;
        /* unimplemented  {fcomp fp0, dword [&g_533658]} f- f7_1 */ - f7_1;
        bool c0_7 = /* bool c0_7 =
            unimplemented  {fcomp fp0, dword [&g_533658]} f< f7_1 */ < f7_1;
        bool c2_7 = FCMP_UO(/* bool c2_7 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [&g_533658]}, f7_1) */, f7_1);
        bool c3_7 = /* bool c3_7 =
            unimplemented  {fcomp fp0, dword [&g_533658]} f== f7_1 */ == f7_1;
        /* unimplemented  {fcomp fp0, dword [&g_533658]} */
        result =
            (c0_7 ? 1 : 0) << 8 | (c2_7 ? 1 : 0) << 0xa | (c3_7 ? 1 : 0) << 0xe | (idx & 7) << 0xb;

        if (!(*(&result + 1) & 0x41))
        {
            *(context_val + 0x60) = 0;
            return result;
        }
    }

    *(context_val + 0x60) = *(context_val + 0x70);
    return result;
}

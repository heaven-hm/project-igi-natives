// Original IGI.EXE function: CarAI_Combat (VA 0x004262F0; static CFG gate PASS, CFG score 0.939).
#include "CarAI_Combat.h"
int32_t CarAI_Combat(long double a1 @ fp0, float a2)

{
    float ctxB = a2;
    long double fpu7 = *(ctxB + 0x6c);
    long double f0 = 0f;
    fpu7 - f0;
    int32_t flagP;

    flagP = !(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x40) ? 0 : 1;

    double* valA1 = Menu_DrawWidget_16(ctxB);
    void* srcS = *(ctxB + 0x4c);
    int32_t* v_60 = *(ctxB + 0x68);
    double v_18;
    Script_CallNativeHandler_23(&v_18, v_60);
    double v_48;
    double* v_68 = &v_48;
    v_48 = v_18 - *valA1;
    double v_10;
    double v_40 = v_10 - valA1[1];
    double v_8;
    double v_38 = v_8 - valA1[2];
    Sys_ReadFileBlock_11(v_68);

    if (flagP)
    {
        long double x87_r7_10 = *DynObj_UpdateDynTree_4(*(ctxB + 0x74)) - *valA1;
        v_60 = *(ctxB + 0x74);
        v_48 = x87_r7_10;
        v_40 = *(DynObj_UpdateDynTree_4(v_60) + 8) - valA1[1];
        v_38 = *(DynObj_UpdateDynTree_4(*(ctxB + 0x74)) + 0x10) - valA1[2];
    }

    double v_30 = *(srcS + 0x88) * v_38 + *(srcS + 0x7c) * v_40 + *(srcS + 0x70) * v_48;
    double v_28 = *(srcS + 0x8c) * v_38 + *(srcS + 0x80) * v_40 + *(srcS + 0x74) * v_48;
    double v_20 = *(srcS + 0x90) * v_38 + *(srcS + 0x84) * v_40 + *(srcS + 0x78) * v_48;
    memcpy(&v_48, &v_30, 0x18);
    void v_70;
    memcpy(&v_70, &v_30, 0x18);
    WeaponType_GetConfig();
    a2 = a1;
    long double f1 = 0.174532935f;
    a1 - f1;

    if (*(&((a1 < f1 ? 1 : 0) << 8 | (FCMP_UO(a1, f1) ? 1 : 0) << 0xa
        | (a1 == f1 ? 1 : 0) << 0xe | 0x800) + 1) & 0x41)
    {
        long double fpu0 = a2;
        long double f2_1 = -0.174532935f;
        fpu0 - f2_1;

        if (!(*(&((fpu0 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu0, f2_1) ? 1 : 0) << 0xa
                | (fpu0 == f2_1 ? 1 : 0) << 0xe | 0x800) + 1) & 1))
            *(ctxB + 0x5c) = a2 * -1.9098593f;
        else
            *(ctxB + 0x5c) = 0x3f800000;
    }
    else
        *(ctxB + 0x5c) = 0xbf800000;

    int16_t idx;
    int16_t top_1;

    if (!flagP)
    {
        long double fpu1;
        Menu_PlayMusic_16(fpu1, ctxB);
        top_1 = 2;
🚫🚫🚫    label_4264b4:
        *(ctxB + 0x64) =
        /* unimplemented  {fstp dword [ctxB+0x64], fp0} */
        idx = top_1 + 1;
    }
    else
    {
        long double x87_r0_3 = a2;
        long double f3_1 = 0f;
        x87_r0_3 - f3_1;
        long double x87_r0_4 = a2;

        if (*(&((x87_r0_3 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r0_3, f3_1) ? 1 : 0) << 0xa
                | (x87_r0_3 == f3_1 ? 1 : 0) << 0xe) + 1) & 1)
            x87_r0_4 = -(x87_r0_4);

        long double f4_1 = 0.174532935f;
        x87_r0_4 - f4_1;
        idx = 1;

        if (*(&((x87_r0_4 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r0_4, f4_1) ? 1 : 0) << 0xa
            | (x87_r0_4 == f4_1 ? 1 : 0) << 0xe | 0x800) + 1) & 0x41)
        {
            a2 - 0f;
            top_1 = 0;
            goto label_4264b4;
        }

        *(ctxB + 0x64) = 0x40a00000;
    }
    v_60 = ctxB + 0x60;
    int16_t result = Menu_UpdateLanguage_17(ctxB + 0x58, v_60, ctxB);

    if (flagP)
    {
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x5c]} */
⋯        long double f6_1 = 0f;
        /* unimplemented  {fcomp fp0, dword [&g_5333ec]} f- f6_1 */ - f6_1;
        bool c0_6 = /* bool c0_6 =
            unimplemented  {fcomp fp0, dword [&g_5333ec]} f< f6_1 */ < f6_1;
        bool c2_6 = FCMP_UO(/* bool c2_6 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5333ec]}, f6_1) */, f6_1);
        bool c3_6 = /* bool c3_6 =
            unimplemented  {fcomp fp0, dword [&g_5333ec]} f== f6_1 */ == f6_1;
        /* unimplemented  {fcomp fp0, dword [&g_5333ec]} */
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x5c]} */

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
            *(ctxB + 0x60) = 0;
            return result;
        }
    }

    *(ctxB + 0x60) = *(ctxB + 0x70);
    return result;
}

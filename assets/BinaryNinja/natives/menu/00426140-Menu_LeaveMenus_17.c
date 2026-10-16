#include "Menu_LeaveMenus_17.h"
int32_t Menu_LeaveMenus_17(long double a1 @ fp0, long double a2 @ fp7, float a3)

{
    float ctxB = a3;
    Menu_LeaveMenus_16(a1, ctxB);
    *(ctxB + 0x64) = a2;
    Menu_UpdateLanguage_17(ctxB + 0x58, ctxB + 0x60, ctxB);
    double* valA1 = Menu_DrawWidget_16(ctxB);
    void* srcS = *(ctxB + 0x4c);
    void* v_58 = *(ctxB + 0x68);
    double v_30;
    Script_CallNativeHandler_23(&v_30, v_58);
    long double x87_r7_1 = v_30 - *valA1;
    double v_28;
    long double x87_r6_1 = v_28 - valA1[1];
    double v_20;
    long double x87_r5_1 = v_20 - valA1[2];
    double v_18 = *(srcS + 0x88) * x87_r5_1 + *(srcS + 0x7c) * x87_r6_1 + *(srcS + 0x70) * x87_r7_1;
    double v_10 = *(srcS + 0x8c) * x87_r5_1 + *(srcS + 0x80) * x87_r6_1 + *(srcS + 0x74) * x87_r7_1;
    double v_8 = *(srcS + 0x90) * x87_r5_1 + *(srcS + 0x84) * x87_r6_1 + *(srcS + 0x78) * x87_r7_1;
    memcpy(&v_58, &v_18, 0x18);
    WeaponType_GetConfig();
    a3 = a1;
    long double f0 = 0.174532935f;
    a1 - f0;
    int16_t result = (a1 < f0 ? 1 : 0) << 8 | (FCMP_UO(a1, f0) ? 1 : 0) << 0xa
        | (a1 == f0 ? 1 : 0) << 0xe | 0x800;

    if (*(&result + 1) & 0x41)
    {
        long double fpu0 = a3;
        long double f1_1 = -0.174532935f;
        fpu0 - f1_1;
        result = (fpu0 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu0, f1_1) ? 1 : 0) << 0xa
            | (fpu0 == f1_1 ? 1 : 0) << 0xe | 0x800;

        if (!(*(&result + 1) & 1))
            *(ctxB + 0x5c) = a3 * -1.9098593f;
        else
            *(ctxB + 0x5c) = 0x3f800000;
    }
    else
        *(ctxB + 0x5c) = 0xbf800000;

    *(ctxB + 0x5c) = ((1f - *(ctxB + 0x58)) * 0.949999988f + 0.0500000007f) * *(ctxB + 0x5c);
    return result;
}

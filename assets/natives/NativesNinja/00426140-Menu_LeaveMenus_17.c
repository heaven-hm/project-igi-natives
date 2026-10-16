#include "00426140-Menu_LeaveMenus_17.h"
/* 0x00426140 Menu_LeaveMenus_17 full linked: callers=1 callees=6 */
int32_t Menu_LeaveMenus_17(long double a1 @ st0, long double a2 @ st7, float a3)

{
    float ebx = a3;
    Menu_LeaveMenus_16(a1, ebx);
    *(ebx + 0x64) = a2;
    Menu_UpdateLanguage_17(ebx + 0x58, ebx + 0x60, ebx);
    double* eax_1 = Menu_DrawWidget_16(ebx);
    void* esi = *(ebx + 0x4c);
    void* var_58 = *(ebx + 0x68);
    double var_30;
    sub_4f9770(&var_30, var_58);
    long double x87_r7_1 = var_30 - *eax_1;
    double var_28;
    long double x87_r6_1 = var_28 - eax_1[1];
    double var_20;
    long double x87_r5_1 = var_20 - eax_1[2];
    double var_18 = *(esi + 0x88) * x87_r5_1 + *(esi + 0x7c) * x87_r6_1 + *(esi + 0x70) * x87_r7_1;
    double var_10 = *(esi + 0x8c) * x87_r5_1 + *(esi + 0x80) * x87_r6_1 + *(esi + 0x74) * x87_r7_1;
    double var_8 = *(esi + 0x90) * x87_r5_1 + *(esi + 0x84) * x87_r6_1 + *(esi + 0x78) * x87_r7_1;
    memcpy(&var_58, &var_18, 0x18);
    WeaponType_GetConfig();
    a3 = a1;
    long double temp0 = 0.174532935f;
    a1 - temp0;
    int16_t result = (a1 < temp0 ? 1 : 0) << 8 | (FCMP_UO(a1, temp0) ? 1 : 0) << 0xa
        | (a1 == temp0 ? 1 : 0) << 0xe | 0x800;

    if (*(&result + 1) & 0x41)
    {
        long double x87_r0 = a3;
        long double temp1_1 = -0.174532935f;
        x87_r0 - temp1_1;
        result = (x87_r0 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r0, temp1_1) ? 1 : 0) << 0xa
            | (x87_r0 == temp1_1 ? 1 : 0) << 0xe | 0x800;

        if (!(*(&result + 1) & 1))
            *(ebx + 0x5c) = a3 * -1.9098593f;
        else
            *(ebx + 0x5c) = 0x3f800000;
    }
    else
        *(ebx + 0x5c) = 0xbf800000;

    *(ebx + 0x5c) = ((1f - *(ebx + 0x58)) * 0.949999988f + 0.0500000007f) * *(ebx + 0x5c);
    return result;
}

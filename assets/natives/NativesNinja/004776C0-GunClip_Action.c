#include "004776C0-GunClip_Action.h"
/* 0x004776c0 GunClip_Action full linked: callers=0 callees=3 */
void* sub_4776c0(void* a1, int32_t* a2)

{
    float* ecx = a2[1];
    double var_28 = ecx[2] * *(a1 + 0x100) + ecx[1] * *(a1 + 0xf8) + *ecx * *(a1 + 0xf0);
    double var_20 = ecx[5] * *(a1 + 0x100) + ecx[4] * *(a1 + 0xf8) + ecx[3] * *(a1 + 0xf0);
    double var_18 = ecx[8] * *(a1 + 0x100) + ecx[7] * *(a1 + 0xf8) + ecx[6] * *(a1 + 0xf0);
    long double x87_r7_12 = var_28;
    double var_40;
    memcpy(&var_40, &var_28, 0x18);
    double* ecx_1 = *a2;
    var_40 = x87_r7_12 + *ecx_1;
    double var_38;
    double var_38_1 = var_38 + ecx_1[1];
    double var_30;
    double var_30_1 = var_30 + ecx_1[2];
    long double x87_r7_18 = *(a1 + 0x114);
    memcpy(a1 + 0x20, &var_40, 0x18);
    float* ecx_2 = a2[1];
    var_28 = x87_r7_18 * ecx_2[1] + ecx_2[2] * *(a1 + 0x120) + *ecx_2 * *(a1 + 0x108);
    *(&var_28 + 4) =
        *(a1 + 0x118) * ecx_2[1] + ecx_2[2] * *(a1 + 0x124) + *ecx_2 * *(a1 + 0x10c);
    var_20 = *(a1 + 0x11c) * ecx_2[1] + ecx_2[2] * *(a1 + 0x128) + *ecx_2 * *(a1 + 0x110);
    *(&var_20 + 4) =
        ecx_2[5] * *(a1 + 0x120) + *(a1 + 0x114) * ecx_2[4] + ecx_2[3] * *(a1 + 0x108);
    var_18 = ecx_2[5] * *(a1 + 0x124) + *(a1 + 0x118) * ecx_2[4] + ecx_2[3] * *(a1 + 0x10c);
    *(&var_18 + 4) =
        ecx_2[5] * *(a1 + 0x128) + *(a1 + 0x11c) * ecx_2[4] + ecx_2[3] * *(a1 + 0x110);
    float var_10 =
        ecx_2[8] * *(a1 + 0x120) + *(a1 + 0x114) * ecx_2[7] + ecx_2[6] * *(a1 + 0x108);
    float var_c =
        ecx_2[8] * *(a1 + 0x124) + *(a1 + 0x118) * ecx_2[7] + ecx_2[6] * *(a1 + 0x10c);
    int32_t var_4 = ecx_2[9] + *(a1 + 0x12c) + 1;
    float var_8 =
        ecx_2[8] * *(a1 + 0x128) + *(a1 + 0x11c) * ecx_2[7] + ecx_2[6] * *(a1 + 0x110);
    memcpy(a1 + 0x70, &var_28, 0x28);
    return a1;
}

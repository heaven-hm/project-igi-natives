#include "GunClip_Action.h"
void* GunClip_Action(void* a1, int32_t* a2)

{
    float* objC = a2[1];
    double v_28 = objC[2] * *(a1 + 0x100) + objC[1] * *(a1 + 0xf8) + *objC * *(a1 + 0xf0);
    double v_20 = objC[5] * *(a1 + 0x100) + objC[4] * *(a1 + 0xf8) + objC[3] * *(a1 + 0xf0);
    double v_18 = objC[8] * *(a1 + 0x100) + objC[7] * *(a1 + 0xf8) + objC[6] * *(a1 + 0xf0);
    long double x87_r7_12 = v_28;
    double v_40;
    memcpy(&v_40, &v_28, 0x18);
    double* objC1 = *a2;
    v_40 = x87_r7_12 + *objC1;
    double v_38;
    double v_38_1 = v_38 + objC1[1];
    double v_30;
    double v_30_1 = v_30 + objC1[2];
    long double x87_r7_18 = *(a1 + 0x114);
    memcpy(a1 + 0x20, &v_40, 0x18);
    float* objC2 = a2[1];
    v_28 = x87_r7_18 * objC2[1] + objC2[2] * *(a1 + 0x120) + *objC2 * *(a1 + 0x108);
    *(&v_28 + 4) =
        *(a1 + 0x118) * objC2[1] + objC2[2] * *(a1 + 0x124) + *objC2 * *(a1 + 0x10c);
    v_20 = *(a1 + 0x11c) * objC2[1] + objC2[2] * *(a1 + 0x128) + *objC2 * *(a1 + 0x110);
    *(&v_20 + 4) =
        objC2[5] * *(a1 + 0x120) + *(a1 + 0x114) * objC2[4] + objC2[3] * *(a1 + 0x108);
    v_18 = objC2[5] * *(a1 + 0x124) + *(a1 + 0x118) * objC2[4] + objC2[3] * *(a1 + 0x10c);
    *(&v_18 + 4) =
        objC2[5] * *(a1 + 0x128) + *(a1 + 0x11c) * objC2[4] + objC2[3] * *(a1 + 0x110);
    float v_10 =
        objC2[8] * *(a1 + 0x120) + *(a1 + 0x114) * objC2[7] + objC2[6] * *(a1 + 0x108);
    float v_c =
        objC2[8] * *(a1 + 0x124) + *(a1 + 0x118) * objC2[7] + objC2[6] * *(a1 + 0x10c);
    int32_t v_4 = objC2[9] + *(a1 + 0x12c) + 1;
    float v_8 =
        objC2[8] * *(a1 + 0x128) + *(a1 + 0x11c) * objC2[7] + objC2[6] * *(a1 + 0x110);
    memcpy(a1 + 0x70, &v_28, 0x28);
    return a1;
}

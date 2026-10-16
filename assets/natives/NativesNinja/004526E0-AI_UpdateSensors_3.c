#include "004526E0-AI_UpdateSensors_3.h"
/* 0x004526e0 AI_UpdateSensors_3 full linked: callers=1 callees=20 */
void* sub_4526e0(void* a1)

{
    int32_t ebx = *(a1 + 0x14);
    int32_t var_50 = 0;
    int32_t var_4c = 0xc0c80000;
    int32_t var_48 = 0;
    int32_t var_44 = 0;
    int32_t var_40 = 0;
    int32_t var_3c = 0;
    double var_58 = *(sub_463140(ebx) + 8) * var_40;
    double var_60 = *(sub_463140(ebx) + 4) * var_48;
    double var_20 = *sub_463140(ebx) * var_50 + var_60 + var_58;
    double var_60_1 = *(sub_463140(ebx) + 0x14) * var_40;
    double var_58_1 = *(sub_463140(ebx) + 0x10) * var_48;
    double var_18 = *(sub_463140(ebx) + 0xc) * var_50 + var_58_1 + var_60_1;
    double var_60_2 = *(sub_463140(ebx) + 0x20) * var_40;
    double var_58_2 = *(sub_463140(ebx) + 0x1c) * var_48;
    long double x87_r7_23 = *(sub_463140(ebx) + 0x18) * var_50 + var_58_2 + var_60_2;
    double var_10 = x87_r7_23;
    long double x87_r6 = var_20;
    memcpy(&var_50, &var_20, 0x18);
    double var_38;
    memcpy(&var_38, &var_20, 0x18);
    var_38 = -(x87_r6);
    double var_30;
    double var_30_1 = -(var_30);
    double var_28 = x87_r7_23;
    double* eax_10 = sub_4c3440(ebx);
    var_50 = var_50 + *eax_10;
    var_48 = var_48 + *(sub_4c3440(ebx) + 8);
    var_40 = var_40 + *(sub_4c3440(ebx) + 0x10);
    double* eax_13 = sub_4c3440(ebx);
    var_38 = var_38 + *eax_13;
    double var_30_2 = var_30_1 + *(sub_4c3440(ebx) + 8);
    double var_28_1 = var_28 + *(sub_4c3440(ebx) + 0x10);
    void* eax_17 = sub_4f9720(*(a1 + 0x3b6c), *(a1 + 0x3e2c));

    if (!eax_17)
        return eax_17;

    int32_t var_78_1 = 0;
    int32_t edi = 2;

    if (sub_4f9a40(&var_50, eax_17, 0f, 0))
        edi = 3;

    int32_t var_78_2 = 0;

    if (sub_4f9a40(&var_38, eax_17, 0f, 0))
        return edi;

    return edi & 0xfffffffd;
}

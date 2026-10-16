#include "00530AD0-FlashTask_LoadParameters.h"
/* 0x00530ad0 FlashTask_LoadParameters full linked: callers=0 callees=3 */
int32_t sub_530ad0(float a1)

{
    int32_t edx = *(a1 + 0x48);
    int32_t esi = *(a1 + 0x40);
    int32_t edi = *(a1 + 0x4c);
    int32_t ecx = edx * 5;
    float* ecx_1 = esi + (ecx << 2);

    if (edi < *(esi + (ecx << 2) - 8) && !*(a1 + 0x50))
    {
        long double x87_r7_1 = *(a1 + 0x60) + *(a1 + 0x6c);
        *(a1 + 0x4c) = edi + 1;
        *(a1 + 0x6c) = x87_r7_1;
        long double x87_r6_1 = *(a1 + 0x64) + *(a1 + 0x70);
        *(a1 + 0x70) = x87_r6_1;
        long double x87_r6_3 = *(a1 + 0x68) + *(a1 + 0x74);
        *(a1 + 0x58) = x87_r6_1;
        int32_t* edx_3 = *(a1 + 0x20) + 0x68;
        *(a1 + 0x74) = x87_r6_3;
        *(a1 + 0x54) = x87_r7_1;
        long double x87_r7_3 = *(a1 + 0x78) + *(a1 + 0x7c);
        *(a1 + 0x5c) = x87_r6_3;
        int32_t ecx_3 = *(a1 + 0x54);
        *(a1 + 0x7c) = x87_r7_3;
        *edx_3 = ecx_3;
        edx_3[1] = *(a1 + 0x58);
        edx_3[2] = *(a1 + 0x5c);
        return sub_5312d0(*(a1 + 0x24), *(a1 + 0x20), a1 + 0x28, *(a1 + 0x7c));
    }

    if (edx >= *(a1 + 0x44) - 1)
    {
        if (ecx_1[3] != 0xffffffff)
            return QTask_FindType(*(a1 + 0x80));

        *(a1 + 0x48) = 0;
        *(a1 + 0x4c) = 0;
        *(a1 + 0x50) = 1;
        return a1;
    }

    *(a1 + 0x60) = (*(esi + (edx + 1) * 0x14) - *ecx_1) / ecx_1[3];
    *(a1 + 0x64) = (ecx_1[6] - ecx_1[1]) / ecx_1[3];
    *(a1 + 0x68) = (ecx_1[7] - ecx_1[2]) / ecx_1[3];
    *(a1 + 0x78) = (ecx_1[9] - ecx_1[4]) / ecx_1[3];
    *(a1 + 0x6c) = *ecx_1;
    *(a1 + 0x70) = ecx_1[1];
    *(a1 + 0x74) = ecx_1[2];
    *(a1 + 0x54) = *ecx_1;
    *(a1 + 0x58) = ecx_1[1];
    *(a1 + 0x5c) = ecx_1[2];
    int32_t ecx_8 = ecx_1[4];
    *(a1 + 0x48) = edx + 1;
    void* edx_7 = *(a1 + 0x20);
    *(a1 + 0x7c) = ecx_8;
    int32_t ecx_9 = *(a1 + 0x54);
    *(a1 + 0x4c) = 0;
    *(a1 + 0x50) = 0;
    *(edx_7 + 0x68) = ecx_9;
    *(edx_7 + 0x6c) = *(a1 + 0x58);
    *(edx_7 + 0x70) = *(a1 + 0x5c);
    return sub_5312d0(*(a1 + 0x24), *(a1 + 0x20), a1 + 0x28, *(a1 + 0x7c));
}

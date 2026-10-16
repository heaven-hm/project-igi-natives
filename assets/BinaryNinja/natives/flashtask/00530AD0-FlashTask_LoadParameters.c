#include "FlashTask_LoadParameters.h"
int32_t FlashTask_LoadParameters(float a1)

{
    int32_t tmpD = *(a1 + 0x48);
    int32_t srcS = *(a1 + 0x40);
    int32_t dstD = *(a1 + 0x4c);
    int32_t objC = tmpD * 5;
    float* objC1 = srcS + (objC << 2);

    if (dstD < *(srcS + (objC << 2) - 8) && !*(a1 + 0x50))
    {
        long double x87_r7_1 = *(a1 + 0x60) + *(a1 + 0x6c);
        *(a1 + 0x4c) = dstD + 1;
        *(a1 + 0x6c) = x87_r7_1;
        long double x87_r6_1 = *(a1 + 0x64) + *(a1 + 0x70);
        *(a1 + 0x70) = x87_r6_1;
        long double x87_r6_3 = *(a1 + 0x68) + *(a1 + 0x74);
        *(a1 + 0x58) = x87_r6_1;
        int32_t* tmpD3 = *(a1 + 0x20) + 0x68;
        *(a1 + 0x74) = x87_r6_3;
        *(a1 + 0x54) = x87_r7_1;
        long double x87_r7_3 = *(a1 + 0x78) + *(a1 + 0x7c);
        *(a1 + 0x5c) = x87_r6_3;
        int32_t objC3 = *(a1 + 0x54);
        *(a1 + 0x7c) = x87_r7_3;
        *tmpD3 = objC3;
        tmpD3[1] = *(a1 + 0x58);
        tmpD3[2] = *(a1 + 0x5c);
        return SpriteParticleSystemDynCubeObj_OnTick(*(a1 + 0x24), *(a1 + 0x20), a1 + 0x28, *(a1 + 0x7c));
    }

    if (tmpD >= *(a1 + 0x44) - 1)
    {
        if (objC1[3] != 0xffffffff)
            return QTask_FindType(*(a1 + 0x80));

        *(a1 + 0x48) = 0;
        *(a1 + 0x4c) = 0;
        *(a1 + 0x50) = 1;
        return a1;
    }

    *(a1 + 0x60) = (*(srcS + (tmpD + 1) * 0x14) - *objC1) / objC1[3];
    *(a1 + 0x64) = (objC1[6] - objC1[1]) / objC1[3];
    *(a1 + 0x68) = (objC1[7] - objC1[2]) / objC1[3];
    *(a1 + 0x78) = (objC1[9] - objC1[4]) / objC1[3];
    *(a1 + 0x6c) = *objC1;
    *(a1 + 0x70) = objC1[1];
    *(a1 + 0x74) = objC1[2];
    *(a1 + 0x54) = *objC1;
    *(a1 + 0x58) = objC1[1];
    *(a1 + 0x5c) = objC1[2];
    int32_t objC8 = objC1[4];
    *(a1 + 0x48) = tmpD + 1;
    void* tmpD7 = *(a1 + 0x20);
    *(a1 + 0x7c) = objC8;
    int32_t objC9 = *(a1 + 0x54);
    *(a1 + 0x4c) = 0;
    *(a1 + 0x50) = 0;
    *(tmpD7 + 0x68) = objC9;
    *(tmpD7 + 0x6c) = *(a1 + 0x58);
    *(tmpD7 + 0x70) = *(a1 + 0x5c);
    return SpriteParticleSystemDynCubeObj_OnTick(*(a1 + 0x24), *(a1 + 0x20), a1 + 0x28, *(a1 + 0x7c));
}

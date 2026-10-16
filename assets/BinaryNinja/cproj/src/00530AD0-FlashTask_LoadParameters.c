#include "gi_platform.h"
#include "00530AD0-FlashTask_LoadParameters.h"
int32_t FlashTask_LoadParameters(float a1)

{
    int32_t tmpD = (*(int32_t*)(uintptr_t)(a1 + 0x48));
    int32_t srcS = (*(int32_t*)(uintptr_t)(a1 + 0x40));
    int32_t dstD = (*(int32_t*)(uintptr_t)(a1 + 0x4c));
    int32_t objC = tmpD * 5;
    float* objC1 = srcS + (objC << 2);

    if (dstD < (*(int32_t*)(uintptr_t)(srcS + (objC << 2) - 8)) && !(*(int32_t*)(uintptr_t)(a1 + 0x50)))
    {
        long double x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0x60)) + (*(int32_t*)(uintptr_t)(a1 + 0x6c));
        (*(int32_t*)(uintptr_t)(a1 + 0x4c)) = dstD + 1;
        (*(int32_t*)(uintptr_t)(a1 + 0x6c)) = x87_r7_1;
        long double x87_r6_1 = (*(int32_t*)(uintptr_t)(a1 + 0x64)) + (*(int32_t*)(uintptr_t)(a1 + 0x70));
        (*(int32_t*)(uintptr_t)(a1 + 0x70)) = x87_r6_1;
        long double x87_r6_3 = (*(int32_t*)(uintptr_t)(a1 + 0x68)) + (*(int32_t*)(uintptr_t)(a1 + 0x74));
        (*(int32_t*)(uintptr_t)(a1 + 0x58)) = x87_r6_1;
        int32_t* tmpD3 = (*(int32_t*)(uintptr_t)(a1 + 0x20)) + 0x68;
        (*(int32_t*)(uintptr_t)(a1 + 0x74)) = x87_r6_3;
        (*(int32_t*)(uintptr_t)(a1 + 0x54)) = x87_r7_1;
        long double x87_r7_3 = (*(int32_t*)(uintptr_t)(a1 + 0x78)) + (*(int32_t*)(uintptr_t)(a1 + 0x7c));
        (*(int32_t*)(uintptr_t)(a1 + 0x5c)) = x87_r6_3;
        int32_t objC3 = (*(int32_t*)(uintptr_t)(a1 + 0x54));
        (*(int32_t*)(uintptr_t)(a1 + 0x7c)) = x87_r7_3;
        *tmpD3 = objC3;
        tmpD3[1] = (*(int32_t*)(uintptr_t)(a1 + 0x58));
        tmpD3[2] = (*(int32_t*)(uintptr_t)(a1 + 0x5c));
        return SpriteParticleSystemDynCubeObj_OnTick((*(int32_t*)(uintptr_t)(a1 + 0x24)), (*(int32_t*)(uintptr_t)(a1 + 0x20)), a1 + 0x28, (*(int32_t*)(uintptr_t)(a1 + 0x7c)));
    }

    if (tmpD >= (*(int32_t*)(uintptr_t)(a1 + 0x44)) - 1)
    {
        if (objC1[3] != 0xffffffff)
            return QTask_FindType((*(int32_t*)(uintptr_t)(a1 + 0x80)));

        (*(int32_t*)(uintptr_t)(a1 + 0x48)) = 0;
        (*(int32_t*)(uintptr_t)(a1 + 0x4c)) = 0;
        (*(int32_t*)(uintptr_t)(a1 + 0x50)) = 1;
        return a1;
    }

    (*(int32_t*)(uintptr_t)(a1 + 0x60)) = ((*(int32_t*)(uintptr_t)(srcS + (tmpD + 1) * 0x14)) - *objC1) / objC1[3];
    (*(int32_t*)(uintptr_t)(a1 + 0x64)) = (objC1[6] - objC1[1]) / objC1[3];
    (*(int32_t*)(uintptr_t)(a1 + 0x68)) = (objC1[7] - objC1[2]) / objC1[3];
    (*(int32_t*)(uintptr_t)(a1 + 0x78)) = (objC1[9] - objC1[4]) / objC1[3];
    (*(int32_t*)(uintptr_t)(a1 + 0x6c)) = *objC1;
    (*(int32_t*)(uintptr_t)(a1 + 0x70)) = objC1[1];
    (*(int32_t*)(uintptr_t)(a1 + 0x74)) = objC1[2];
    (*(int32_t*)(uintptr_t)(a1 + 0x54)) = *objC1;
    (*(int32_t*)(uintptr_t)(a1 + 0x58)) = objC1[1];
    (*(int32_t*)(uintptr_t)(a1 + 0x5c)) = objC1[2];
    int32_t objC8 = objC1[4];
    (*(int32_t*)(uintptr_t)(a1 + 0x48)) = tmpD + 1;
    void* tmpD7 = (*(int32_t*)(uintptr_t)(a1 + 0x20));
    (*(int32_t*)(uintptr_t)(a1 + 0x7c)) = objC8;
    int32_t objC9 = (*(int32_t*)(uintptr_t)(a1 + 0x54));
    (*(int32_t*)(uintptr_t)(a1 + 0x4c)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x50)) = 0;
    *(tmpD7 + 0x68) = objC9;
    *(tmpD7 + 0x6c) = (*(int32_t*)(uintptr_t)(a1 + 0x58));
    *(tmpD7 + 0x70) = (*(int32_t*)(uintptr_t)(a1 + 0x5c));
    return SpriteParticleSystemDynCubeObj_OnTick((*(int32_t*)(uintptr_t)(a1 + 0x24)), (*(int32_t*)(uintptr_t)(a1 + 0x20)), a1 + 0x28, (*(int32_t*)(uintptr_t)(a1 + 0x7c)));
}

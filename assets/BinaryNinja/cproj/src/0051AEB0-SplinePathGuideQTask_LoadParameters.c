#include "gi_platform.h"
#include "0051AEB0-SplinePathGuideQTask_LoadParameters.h"
void SplinePathGuideQTask_LoadParameters(float a1)

{
    if (!((*(int32_t*)(uintptr_t)(a1 + 0x2c)) & 1))
        return;

    float valA = (*(int32_t*)(uintptr_t)(a1 + 0x20));

    if (valA < 0)
        return;

    float dstD1 = Script_ExecuteLevelScript_4(valA);

    if (!dstD1)
        return;

    valA = (*(int32_t*)(uintptr_t)(a1 + 0x24));

    if (valA < 0)
        return;

    float ctxB1 = Script_ExecuteLevelScript_4(valA);

    if (!ctxB1)
        return;

    int32_t objC1 = (*(int32_t*)(uintptr_t)(a1 + 0x28));
    valA = *(dstD1 + (objC1 << 2) + 0x68);

    if (!valA)
        return;

    void* objC2 = *(dstD1 + (objC1 << 2) + 0x6c);

    if (!objC2 || *(dstD1 + 0x1f8) < 3)
        return;

    float tmpD1 = (*(int32_t*)(uintptr_t)(a1 + 0x38));
    long double x87_r7_5 = 4096000.0 / (g_a83758 * 3600.0)
        * ((*(objC2 + 0x90) - (*(int32_t*)(uintptr_t)(valA + 0x90))) * tmpD1 + (*(int32_t*)(uintptr_t)(valA + 0x90))) * (*(int32_t*)(uintptr_t)(a1 + 0x3c));
    long double x87_r7_8 = Terrain_BuildMipMaps_9(valA, tmpD1) * x87_r7_5 + (*(int32_t*)(uintptr_t)(a1 + 0x38));
    long double f0_1 = 1.0f;
    x87_r7_8 - f0_1;
    (*(int32_t*)(uintptr_t)(a1 + 0x38)) = x87_r7_8;
    bool c1_1 = /* bool c1_1 = unknown  {fst dword [srcS+0x38], fp0} */;

    if (!(*(&((x87_r7_8 < f0_1 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9
        | (FCMP_UO(x87_r7_8, f0_1) ? 1 : 0) << 0xa | (x87_r7_8 == f0_1 ? 1 : 0) << 0xe
        | 0x3800) + 1) & 0x41))
    {
        long double x87_r7_9 = x87_r7_8 - 1.0f;
        int32_t valA4 = (*(int32_t*)(uintptr_t)(a1 + 0x28)) + 1;
        (*(int32_t*)(uintptr_t)(a1 + 0x38)) = x87_r7_9;
        long double x87_r7_10 = x87_r7_9 * *(*(dstD1 + (valA4 << 2) + 0x64) + 0x98);
        (*(int32_t*)(uintptr_t)(a1 + 0x28)) = valA4;
        (*(int32_t*)(uintptr_t)(a1 + 0x38)) = x87_r7_10 / *(*(dstD1 + (valA4 << 2) + 0x68) + 0x98);

        if (valA4 >= *(dstD1 + 0x1f8) - 1)
        {
            if ((*(int32_t*)(uintptr_t)(a1 + 0x30)))
            {
                (*(int32_t*)(uintptr_t)(a1 + 0x38)) = 0;
                (*(int32_t*)(uintptr_t)(a1 + 0x28)) = 0;
            }
            else
            {
                (*(int32_t*)(uintptr_t)(a1 + 0x38)) = 0x3f800000;
                (*(int32_t*)(uintptr_t)(a1 + 0x28)) = *(dstD1 + 0x1f8) - 2;
                int32_t valA8 = (*(int32_t*)(uintptr_t)(a1 + 0x2c));
                valA8 &= 0xfe;
                (*(int32_t*)(uintptr_t)(a1 + 0x2c)) = valA8;
            }
        }
    }

    long double x87_r7_13 = (*(int32_t*)(uintptr_t)(a1 + 0x38));
    long double f1_1 = 1.0f;
    x87_r7_13 - f1_1;
    long double x87_r7_14;

    if (!(*(&((x87_r7_13 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_13, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_13 == f1_1 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_14 = 1.0f;
    else
        x87_r7_14 = (*(int32_t*)(uintptr_t)(a1 + 0x38));

    float tmpD5 = (*(int32_t*)(uintptr_t)(a1 + 0x28));
    (*(int32_t*)(uintptr_t)(a1 + 0x38)) = x87_r7_14;
    Terrain_UpdateWaterWaves_10(dstD1, ctxB1 + 0x70, tmpD5, x87_r7_14);
    char v_18;
    int32_t valA10 = SplinePathDynCubeObj_OnEvent(&v_18, dstD1, (*(int32_t*)(uintptr_t)(a1 + 0x28)), (*(int32_t*)(uintptr_t)(a1 + 0x38)));
    void* valA11 = g_a44344;
    double v_30;
    memcpy(&v_30, valA10, 0x18);
    float v_3c = v_30 - *(ctxB1 + 0x20);
    double v_28;
    float v_38_1 = v_28 - *(ctxB1 + 0x28);
    double v_20;
    float v_34_1 = v_20 - *(ctxB1 + 0x30);
    WorldObject_CommitTransform(valA11, ctxB1, &v_30, *(ctxB1 + 0x44));
    int32_t valA12 = 0;
    int32_t tmpD7 = 0;
    valA12 = g_54ed52;
    tmpD7 = *(ctxB1 + 0x1c);
    valA = *(((valA12 * 0x180 + tmpD7) << 2) + &g_a96ae0);

    if (valA)
        valA(ctxB1, &v_3c);
}

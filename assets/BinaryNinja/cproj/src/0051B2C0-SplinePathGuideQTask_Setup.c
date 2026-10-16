#include "gi_platform.h"
#include "0051B2C0-SplinePathGuideQTask_Setup.h"
void* SplinePathGuideQTask_Setup(void* a1)

{
    g_a8375c = 0;
    long double fpu7 = (*(int32_t*)(uintptr_t)(a1 + 0x40));
    long double f0 = 0.0f;
    fpu7 - f0;
    long double x87_r7_1;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_2 = (*(int32_t*)(uintptr_t)(a1 + 0x40));
        long double f1_1 = 1.0f;
        x87_r7_2 - f1_1;

        if (*(&((x87_r7_2 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0x40));
        else
            x87_r7_1 = 1.0f;
    }
    else
        x87_r7_1 = 0.0f;

    (*(int32_t*)(uintptr_t)(a1 + 0x40)) = x87_r7_1;
    long double f2 = 0.0f;
    x87_r7_1 - f2;

    if (!(*(&((x87_r7_1 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f2) ? 1 : 0) << 0xa
            | (x87_r7_1 == f2 ? 1 : 0) << 0xe) + 1) & 0x41))
        Terrain_SampleHeightmap_10(a1);

    void* result = (*(int32_t*)(uintptr_t)(a1 + 0x2c));

    if (!(*(int32_t*)(uintptr_t)(a1 + 0x34)))
        result &= 0xfe;
    else
        result |= 1;

    long double x87_r7_3 = (*(int32_t*)(uintptr_t)(a1 + 0x3c));
    long double f3 = 0.0f;
    x87_r7_3 - f3;
    (*(int32_t*)(uintptr_t)(a1 + 0x2c)) = result;
    result = (x87_r7_3 < f3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f3) ? 1 : 0) << 0xa
        | (x87_r7_3 == f3 ? 1 : 0) << 0xe;
    long double x87_r7_4;

    if (*(&result + 1) & 0x41)
        x87_r7_4 = 0.0f;
    else
        x87_r7_4 = (*(int32_t*)(uintptr_t)(a1 + 0x3c));

    (*(int32_t*)(uintptr_t)(a1 + 0x3c)) = x87_r7_4;
    int32_t srcS1 = (*(int32_t*)(uintptr_t)(a1 + 0x24));

    if (srcS1 > 0)
    {
        result = Script_ExecuteLevelScript_4(srcS1);

        if (result)
        {
            int32_t objC1 = 0;
            int32_t tmpD1 = 0;
            objC1 = g_54ed53;
            tmpD1 = *(result + 0x1c);
            int32_t objC5 = *(((objC1 * 0x180 + tmpD1) << 2) + &g_a96ae0);

            if (objC5)
                return objC5(result, 0);
        }
    }

    return result;
}

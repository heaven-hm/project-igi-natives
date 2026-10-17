// Original IGI.EXE function: SplinePathGuideQTask_Setup (VA 0x0051B2C0; static CFG gate PASS, CFG score 1.000).
#include "SplinePathGuideQTask_Setup.h"
void* SplinePathGuideQTask_Setup(void* context)

{
    g_a8375c = 0;
    long double fpu7 = *(context + 0x40);
    long double f0 = 0.0f;
    fpu7 - f0;
    long double fpu_val_7_1;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double fpu_val_7_2 = *(context + 0x40);
        long double f1_1 = 1.0f;
        fpu_val_7_2 - f1_1;

        if (*(&((fpu_val_7_2 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_2 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            fpu_val_7_1 = *(context + 0x40);
        else
            fpu_val_7_1 = 1.0f;
    }
    else
        fpu_val_7_1 = 0.0f;

    *(context + 0x40) = fpu_val_7_1;
    long double f2 = 0.0f;
    fpu_val_7_1 - f2;

    if (!(*(&((fpu_val_7_1 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f2) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f2 ? 1 : 0) << 0xe) + 1) & 0x41))
        Terrain_SampleHeightmap_10(context);

    void* result = *(context + 0x2c);

    if (!*(context + 0x34))
        result &= 0xfe;
    else
        result |= 1;

    long double fpu_val_7_3 = *(context + 0x3c);
    long double f3 = 0.0f;
    fpu_val_7_3 - f3;
    *(context + 0x2c) = result;
    result = (fpu_val_7_3 < f3 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f3) ? 1 : 0) << 0xa
        | (fpu_val_7_3 == f3 ? 1 : 0) << 0xe;
    long double fpu_val_7_4;

    if (*(&result + 1) & 0x41)
        fpu_val_7_4 = 0.0f;
    else
        fpu_val_7_4 = *(context + 0x3c);

    *(context + 0x3c) = fpu_val_7_4;
    int32_t source_1 = *(context + 0x24);

    if (source_1 > 0)
    {
        result = Script_ExecuteLevelScript_4(source_1);

        if (result)
        {
            int32_t entity_1 = 0;
            int32_t temp_1 = 0;
            entity_1 = g_54ed53;
            temp_1 = *(result + 0x1c);
            int32_t entity_5 = *(((entity_1 * 0x180 + temp_1) << 2) + &g_a96ae0);

            if (entity_5)
                return entity_5(result, 0);
        }
    }

    return result;
}

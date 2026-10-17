// Original IGI.EXE function: SplinePathGuideQTask_LoadParameters (VA 0x0051AEB0; static CFG gate PASS, CFG score 0.952).
#include "SplinePathGuideQTask_LoadParameters.h"
void SplinePathGuideQTask_LoadParameters(float context)

{
    if (!(*(context + 0x2c) & 1))
        return;

    float data_val = *(context + 0x20);

    if (data_val < 0)
        return;

    float dest_1 = Script_ExecuteLevelScript_4(data_val);

    if (!dest_1)
        return;

    data_val = *(context + 0x24);

    if (data_val < 0)
        return;

    float context_1 = Script_ExecuteLevelScript_4(data_val);

    if (!context_1)
        return;

    int32_t entity_1 = *(context + 0x28);
    data_val = *(dest_1 + (entity_1 << 2) + 0x68);

    if (!data_val)
        return;

    void* entity_2 = *(dest_1 + (entity_1 << 2) + 0x6c);

    if (!entity_2 || *(dest_1 + 0x1f8) < 3)
        return;

    float temp_1 = *(context + 0x38);
    long double fpu_val_7_5 = 4096000.0 / (g_a83758 * 3600.0)
        * ((*(entity_2 + 0x90) - *(data_val + 0x90)) * temp_1 + *(data_val + 0x90)) * *(context + 0x3c);
    long double fpu_val_7_8 = Terrain_BuildMipMaps_9(data_val, temp_1) * fpu_val_7_5 + *(context + 0x38);
    long double f0_1 = 1.0f;
    fpu_val_7_8 - f0_1;
    *(context + 0x38) = fpu_val_7_8;
    bool c1_1 = /* bool c1_1 = unknown  {fst dword [source_val+0x38], fp0} */;

    if (!(*(&((fpu_val_7_8 < f0_1 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9
        | (FCMP_UO(fpu_val_7_8, f0_1) ? 1 : 0) << 0xa | (fpu_val_7_8 == f0_1 ? 1 : 0) << 0xe
        | 0x3800) + 1) & 0x41))
    {
        long double fpu_val_7_9 = fpu_val_7_8 - 1.0f;
        int32_t data_4 = *(context + 0x28) + 1;
        *(context + 0x38) = fpu_val_7_9;
        long double fpu_val_7_10 = fpu_val_7_9 * *(*(dest_1 + (data_4 << 2) + 0x64) + 0x98);
        *(context + 0x28) = data_4;
        *(context + 0x38) = fpu_val_7_10 / *(*(dest_1 + (data_4 << 2) + 0x68) + 0x98);

        if (data_4 >= *(dest_1 + 0x1f8) - 1)
        {
            if (*(context + 0x30))
            {
                *(context + 0x38) = 0;
                *(context + 0x28) = 0;
            }
            else
            {
                *(context + 0x38) = 0x3f800000;
                *(context + 0x28) = *(dest_1 + 0x1f8) - 2;
                int32_t data_8 = *(context + 0x2c);
                data_8 &= 0xfe;
                *(context + 0x2c) = data_8;
            }
        }
    }

    long double fpu_val_7_13 = *(context + 0x38);
    long double f1_1 = 1.0f;
    fpu_val_7_13 - f1_1;
    long double fpu_val_7_14;

    if (!(*(&((fpu_val_7_13 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_13, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_13 == f1_1 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_14 = 1.0f;
    else
        fpu_val_7_14 = *(context + 0x38);

    float temp_5 = *(context + 0x28);
    *(context + 0x38) = fpu_val_7_14;
    Terrain_UpdateWaterWaves_10(dest_1, context_1 + 0x70, temp_5, fpu_val_7_14);
    void item_18;
    int32_t data_10 = SplinePathDynCubeObj_OnEvent(&item_18, dest_1, *(context + 0x28), *(context + 0x38));
    void* data_11 = g_a44344;
    double item_30;
    memcpy(&item_30, data_10, 0x18);
    float item_3c = item_30 - *(context_1 + 0x20);
    double item_28;
    float item_38_1 = item_28 - *(context_1 + 0x28);
    double item_20;
    float item_34_1 = item_20 - *(context_1 + 0x30);
    WorldObject_CommitTransform(data_11, context_1, &item_30, *(context_1 + 0x44));
    int32_t data_12 = 0;
    int32_t temp_7 = 0;
    data_12 = g_54ed52;
    temp_7 = *(context_1 + 0x1c);
    data_val = *(((data_12 * 0x180 + temp_7) << 2) + &g_a96ae0);

    if (data_val)
        data_val(context_1, &item_3c);
}

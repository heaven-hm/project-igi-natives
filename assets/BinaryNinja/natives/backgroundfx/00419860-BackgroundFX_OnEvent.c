// IGI native provenance: BackgroundFX_OnEvent - 0x00419860 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00419860-BackgroundFX_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "BackgroundFX_OnEvent.h"
int32_t BackgroundFX_OnEvent(float context )

{
    long double fp0;
    bool c1;
    bool c2;
    fp0 = __fcos(context * 0.00499999989f);
    int32_t entity_val;
    int32_t item_28 = entity_val;
    int32_t item_2c = entity_val;
    float item_1c[0x7];
    Menu_PlayMusic_5(&item_1c, context * 0.00200000009f, fp0 * 0.25f + 1.25f, 0x43480000, 0x43960000);
    int32_t entity_1 = BackgroundFX_Process(0x539be8, &item_1c);
    long double fp0_1;
    bool c1_1;
    bool c2_1;
    fp0_1 = __fcos(context * 0.00249999994f);
    int32_t item_28_2 = entity_1;
    int32_t item_2c_2 = entity_1;
    Menu_PlayMusic_5(&item_1c, context * -0.00142857141f, fp0_1 * 0.150000006f + 1.14999998f,
        0x43c80000, 0x437a0000);
    int32_t entity_2 = BackgroundFX_Process(0x539bf8, &item_1c);
    long double fp0_2;
    bool c1_2;
    bool c2_2;
    fp0_2 = __fsin(context * 0.00333333341f);
    int32_t item_28_4 = entity_2;
    int32_t item_2c_4 = entity_2;
    Menu_PlayMusic_5(&item_1c, context * 0.00111111114f, fp0_2 + 2.0f, 0x43160000, 0x437a0000);
    return BackgroundFX_Process(0x539c08, &item_1c);
}

// IGI native provenance: BackgroundFX_LoadParameters - 0x00419820 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00419820-BackgroundFX_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "BackgroundFX_LoadParameters.h"
int32_t BackgroundFX_LoadParameters(float context)

{
    float data_val = *(context + 0x20);
    g_a84a50 = 0;
    float item_c = context;
    g_a84a58 = 0;
    BackgroundFX_OnEvent(data_val);
    float item_c_1 = context;
    return BackgroundFX_OnEvent(data_val + 1.0f);
}

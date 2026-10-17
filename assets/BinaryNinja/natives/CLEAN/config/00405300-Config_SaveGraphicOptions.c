// IGI native provenance: Config_SaveGraphicOptions - 0x00405300 - CFG score 95.2% (PASS; structural only); runtime behavior not verified.
// Evidence: 00405300-Config_SaveGraphicOptions.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Config_SaveGraphicOptions.h"
int32_t Config_SaveGraphicOptions()

{
    int32_t data_6 = g_5382d8;
    g_bc2384 = 0;
    g_bc28c8 = data_6;
    g_bc2380 = 1;
    g_bc28e8 = 1;
    g_bc2388 = 1;
    int32_t entity_val;
    int32_t temp_val;

    if (Camera_UpdateTransform_6(&g_5c8c20, temp_val, entity_val, &g_5c8c20, "USA"))
    {
        int32_t data_1 = FX_FragmentSimulate_26();
        int32_t data_2 = -(data_1);
        g_bc238c = -((data_2 - data_2));
        g_bc2390 = !FX_FragmentSimulate_26();
    }
    else
    {
        g_bc238c = 5;
        g_bc2390 = 1;
    }

    int32_t item_28 = 0;
    int32_t item_2c = 0;
    void item_18;
    int32_t result = Config_ResetGraphicOptions(&item_18);
    g_bc25b9 = 1;
    g_bc25bb = 0;
    g_bc25b8 = 1;
    g_bc25ba = 1;
    g_bc25b0 = 0x3f800000;
    g_bc25ac = 0x3f800000;
    g_bc25b4 = 0x3f800000;
    g_bc28bc = 0x1b;
    memcpy(&g_bc25bc, &g_536410, 0x144);
    g_bc28c0 = 1;
    g_bc28c4 = 0x3ecccccd;
    return result;
}

// IGI native provenance: Config_GraphicOptionsGetGamma - 0x00404910 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 00404910-Config_GraphicOptionsGetGamma.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Config_GraphicOptionsGetGamma.h"
int32_t Config_GraphicOptionsGetGamma(int32_t context)

// Sig: float Config_GraphicOptionsGetGamma()
// Note: Returns the active profile's gamma as a float. Use to initialise your
// own gamma slider/UI.
{
    int32_t item_18 = *(Config_GetActiveGraphicOptions() + 0x214);
    char* item_8 = &g_567c74;
    double item_10 = *(Config_GetActiveGraphicOptions() + 0x214);
    memcpy(context, &item_18, 0x18);
    return context;
}

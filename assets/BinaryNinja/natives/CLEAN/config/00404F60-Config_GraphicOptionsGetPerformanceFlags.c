// IGI native provenance: Config_GraphicOptionsGetPerformanceFlags - 0x00404F60 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 00404F60-Config_GraphicOptionsGetPerformanceFlags.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Config_GraphicOptionsGetPerformanceFlags.h"
int32_t Config_GraphicOptionsGetPerformanceFlags(int32_t context)

// Sig: int Config_GraphicOptionsGetPerformanceFlags()
// Note: Returns the active profile's graphics performance flag bitmask.
{
    int32_t item_18 = *(Config_GetActiveGraphicOptions() + 0xc);
    double item_10 = *(Config_GetActiveGraphicOptions() + 0xc);
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}

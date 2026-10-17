// IGI native provenance: Config_GameOptionsInputGetMouseSensitivity - 0x00404290 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 00404290-Config_GameOptionsInputGetMouseSensitivity.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Config_GameOptionsInputGetMouseSensitivity.h"
int32_t Config_GameOptionsInputGetMouseSensitivity(int32_t context)

// Sig: int Config_GameOptionsInputGetMouseSensitivity()
// Note: RETURNS the stored mouse-sensitivity integer from the game-options
// config context. Takes no args.
{
    int32_t item_18 = *(Config_GetActivePlayerProfileRecord() + 0x53c);
    char* item_8 = &g_567c74;
    double item_10 = *(Config_GetActivePlayerProfileRecord() + 0x53c);
    memcpy(context, &item_18, 0x18);
    return context;
}

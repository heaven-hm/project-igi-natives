// IGI native provenance: Config_GameOptionsInputGetInvertMouse - 0x004041D0 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 004041D0-Config_GameOptionsInputGetInvertMouse.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Config_GameOptionsInputGetInvertMouse.h"
int32_t Config_GameOptionsInputGetInvertMouse(int32_t context)

// Sig: int Config_GameOptionsInputGetInvertMouse()
// Note: RETURNS the invert-mouse setting when the engine writes/reads a config
// game-options block (1 = inverted, 0 = normal). Takes no args. Pairs with
// Config_GameOptionsInputSetInvertMouse.
{
    int32_t entity_val = 0;
    entity_val = !*(Config_GetActivePlayerProfileRecord() + 0x538);
    int32_t item_18 = entity_val;
    int32_t temp_1 = 0;
    temp_1 = !*(Config_GetActivePlayerProfileRecord() + 0x538);
    char* item_8 = &g_567c74;
    double item_10 = temp_1;
    memcpy(context, &item_18, 0x18);
    return context;
}

// IGI native provenance: Config_GameOptionsInputSetBloodEnabled - 0x004042E0 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 004042E0-Config_GameOptionsInputSetBloodEnabled.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Config_GameOptionsInputSetBloodEnabled.h"
int32_t Config_GameOptionsInputSetBloodEnabled(long double context , int32_t param_2, float param_3 )

// Sig: void Config_GameOptionsInputSetBloodEnabled(int blood)
// Note: Sets blood-enabled in the config game-options write-out context. Param:
// blood = 1 on, 0 off.
{
    float item_30 = 0.0f;
    Profile_ValueSet(param_3, item_30);
    *(Config_GetActivePlayerProfileRecord() + 8) = context;
    int32_t item_18 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    char* item_8 = &g_567c74;
    memcpy(param_2, &item_18, 0x18);
    return param_2;
}

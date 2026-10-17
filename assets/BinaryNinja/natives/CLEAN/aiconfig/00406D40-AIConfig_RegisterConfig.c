// IGI native provenance: AIConfig_RegisterConfig - 0x00406D40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00406D40-AIConfig_RegisterConfig.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIConfig_RegisterConfig.h"
void AIConfig_RegisterConfig(void* context)

{
    int32_t data_1 = AI_UpdatePatrol_4(*(context + 0x24));
    void* item_114 = Config_SavePlayerProfile_2(*(context + 0x20));
    int32_t item_118 = data_1;
    void item_100;
    Game_DataSymbolLoad(&item_100, "%s, %s");
    void* item_124 = &item_100;
    void* item_128 = context;
}

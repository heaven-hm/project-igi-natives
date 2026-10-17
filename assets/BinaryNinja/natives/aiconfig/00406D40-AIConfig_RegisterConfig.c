// Original IGI.EXE function: AIConfig_RegisterConfig (VA 0x00406D40; static CFG gate PASS, CFG score 1.000).
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

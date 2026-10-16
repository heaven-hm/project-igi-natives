#include "gi_platform.h"
#include "00406D40-AIConfig_RegisterConfig.h"
void AIConfig_RegisterConfig(void* a1)

{
    int32_t valA1 = AI_UpdatePatrol_4((*(int32_t*)(uintptr_t)(a1 + 0x24)));
    void* v_114 = Config_SavePlayerProfile_2((*(int32_t*)(uintptr_t)(a1 + 0x20)));
    int32_t v_118 = valA1;
    char v_100;
    Game_DataSymbolLoad(&v_100, "%s, %s");
    void* v_124 = &v_100;
    void* v_128 = a1;
}

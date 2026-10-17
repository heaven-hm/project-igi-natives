// Original IGI.EXE function: Script_ExecuteLevelScript_28 (VA 0x004FBF00; static CFG gate PASS, CFG score 1.000).
#include "Script_ExecuteLevelScript_28.h"
float Script_ExecuteLevelScript_28(void* context, float param_2, float* param_3, float* param_4, int32_t param_5, int32_t param_6) {
    int32_t entity_1 = param_6 * 7;
    int32_t item_4 = entity_1;
    int32_t item_8 = param_5;
    return Script_FormatString_29(context + 0xf0, context + 0x70, param_2, param_3, *param_4, *(context + (entity_1 << 3) + 0x1c4));
}

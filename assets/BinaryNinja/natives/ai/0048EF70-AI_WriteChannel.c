// Original IGI.EXE function: AI_WriteChannel (VA 0x0048EF70; static CFG gate PASS, CFG score 1.000).
#include "AI_WriteChannel.h"
void* AI_WriteChannel(void* context, int32_t param_2, float param_3)

{
    int32_t entity_2 = *(*((*(context + 0x3d38) << 2) + &g_54151c) + (param_2 << 2));

    if (entity_2 != 0xffffffff)
    {
        *(context + (entity_2 << 2) + 0x3c74) = param_3;
        return context;
    }

    int32_t item_104 = param_2;
    void* item_108 = context + 0x3d15;
    int32_t item_10c_1 = Script_EvaluateCondition_4(context);
    void item_100;
    return Game_DataSymbolLoad(&item_100, "AI(%d) type(%s) channel(%d)");
}

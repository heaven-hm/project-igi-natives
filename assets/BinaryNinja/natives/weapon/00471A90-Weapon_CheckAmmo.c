// Original IGI.EXE function: Weapon_CheckAmmo (VA 0x00471A90; static CFG gate PASS, CFG score 1.000).
#include "Weapon_CheckAmmo.h"
int32_t Weapon_CheckAmmo(float context, float param_2, float param_3, float param_4, float param_5, float param_6, int32_t param_7)

{
    int32_t entity_val;
    int32_t item_4_1 = entity_val;
    float item_4;
    float* data_2;
    int32_t entity_2;

    if (!param_6)
    {
        data_2 = context;
        item_4 = param_4;
        entity_2 = param_7;
        context = param_5 * *data_2;

        if (!entity_2)
            param_6 = (1.0f - *data_2) * param_5 + param_3;
        else
            param_6 = param_3;
    }
    else
    {
        param_6 = param_3;
        data_2 = context;
        context = param_5;
        entity_2 = param_7;
        item_4 = param_4 * *data_2;

        if (entity_2)
            param_2 = (1.0f - *data_2) * param_4 + param_3;
    }

    int32_t item_1c = entity_2;
    return Sys_ExecuteBytecode_14(param_2, param_6, item_4, context, *data_2 * 64.0f, 64.0f, 0.0f, 0x3f000000, 0x80000, 0);
}

// Original IGI.EXE function: WeaponType_InvalidIntroscreenMo (VA 0x004154B0; static CFG gate PASS, CFG score 1.000).
#include "WeaponType_InvalidIntroscreenMo.h"
struct status_msg* WeaponType_InvalidIntroscreenMo(void* context, int32_t param_2, char param_3)

{
    int32_t flags;
    int32_t kind;

    if (!param_2)
    {
        int32_t data_1;
        data_1 = FX_SmokeEmit_26();
        char (** item_8_1)[0x16] = &g_5393f8;

        if (!data_1)
            char (** item_8_2)[0x16] = &g_5393e8;

        flags = 4;
    }
    else if (param_2 == 1)
    {
        char (** item_8)[0x16] = &g_539408;
        flags = 1;
    }
    else
    {
        Error_Show("Invalid introscreen mode");

        while (true)
            /* nop */
    }

    kind = g_57b198;
    char item_4 = param_3;
    return QTask_HandleInput(context, kind, &flags);
}

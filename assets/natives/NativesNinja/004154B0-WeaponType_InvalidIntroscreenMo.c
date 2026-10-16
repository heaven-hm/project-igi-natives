#include "004154B0-WeaponType_InvalidIntroscreenMo.h"
/* 0x004154b0 WeaponType_InvalidIntroscreenMo full linked: callers=1 callees=3 */
struct status_msg* WeaponType_InvalidIntroscreenMo(void* a1, int32_t a2, char a3)

{
    int32_t flags;
    int32_t kind;

    if (!a2)
    {
        int32_t eax_1;
        eax_1 = sub_48f2d0();
        char (** var_8_1)[0x16] = &g_5393f8;

        if (!eax_1)
            char (** var_8_2)[0x16] = &g_5393e8;

        flags = 4;
    }
    else if (a2 == 1)
    {
        char (** var_8)[0x16] = &g_539408;
        flags = 1;
    }
    else
    {
        Error_Show("Invalid introscreen mode");

        while (true)
            /* nop */
    }

    kind = g_57b198;
    char var_4 = a3;
    return QTask_HandleInput(a1, kind, &flags);
}

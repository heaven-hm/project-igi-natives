#include "gi_platform.h"
#include "004154B0-WeaponType_InvalidIntroscreenMo.h"
struct status_msg* WeaponType_InvalidIntroscreenMo(void* a1, int32_t a2, char a3)

{
    int32_t flags;
    int32_t kind;

    if (!a2)
    {
        int32_t valA1;
        valA1 = FX_SmokeEmit_26();
        char (** v_8_1)[0x16] = &g_5393f8;

        if (!valA1)
            char (** v_8_2)[0x16] = &g_5393e8;

        flags = 4;
    }
    else if (a2 == 1)
    {
        char (** v_8)[0x16] = &g_539408;
        flags = 1;
    }
    else
    {
        Error_Show("Invalid introscreen mode");

        while (true)
            /* nop */
    }

    kind = g_57b198;
    char v_4 = a3;
    return QTask_HandleInput(a1, kind, &flags);
}

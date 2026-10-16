#include "0048FD90-FX_CouldNotGetMouseCaps.h"
/* 0x0048fd90 FX_CouldNotGetMouseCaps full linked: callers=1 callees=1 */
int32_t sub_48fd90()

{
    int32_t* eax = g_5c8e1c;
    int32_t var_2c = 0x2c;
    int32_t result = (*(*eax + 0xc))(eax, &var_2c);

    if (!result)
    {
        char var_1c;
        result = var_1c;
        g_c28f80 = 1;
        g_c28f81 = result;
        return result;
    }

    Error_Show("Could not get mouse caps!");

    while (true)
        /* nop */
}

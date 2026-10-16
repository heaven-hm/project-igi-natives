#include "004902F0-Display_SetDisplayMode.h"
/* 0x004902f0 Display_SetDisplayMode full linked: callers=1 callees=1 */
int32_t* sub_4902f0()

{
    int32_t* ecx_1 = g_5c8e28;

    if (ecx_1)
    {
        int32_t* eax_1 = g_5c8e24;

        if (eax_1)
        {
            (*(*eax_1 + 0x20))(eax_1);
            int32_t* eax_2 = g_5c8e24;
            (*(*eax_2 + 8))(eax_2);
            ecx_1 = g_5c8e28;
            g_5c8e24 = 0;
        }

        (*(*ecx_1 + 8))(ecx_1);
        g_5c8e28 = 0;
    }

    return sub_48f4f0(sub_490120);
}

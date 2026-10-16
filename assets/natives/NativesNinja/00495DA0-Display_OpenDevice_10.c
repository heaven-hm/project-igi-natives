#include "00495DA0-Display_OpenDevice_10.h"
/* 0x00495da0 Display_OpenDevice_10 full linked: callers=1 callees=1 */
int32_t* sub_495da0()

{
    int32_t* result;
    result = g_5ca1b4;

    if (result)
    {
        result = g_5ca194;

        if (result)
        {
            sub_4b1690(result);
            int32_t* eax = g_5ca190;
            g_5ca194 = 0;
            (*(*eax + 0x48))(eax);
            int32_t* eax_1 = g_5ca190;
            result = (*(*eax_1 + 8))(eax_1);
            g_5ca190 = 0;
        }
    }

    return result;
}

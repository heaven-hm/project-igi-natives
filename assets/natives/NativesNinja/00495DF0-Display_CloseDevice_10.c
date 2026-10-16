#include "00495DF0-Display_CloseDevice_10.h"
/* 0x00495df0 Display_CloseDevice_10 full linked: callers=1 callees=2 */
int32_t __fastcall sub_495df0(int32_t a1)

{
    int32_t var_4 = a1;
    int32_t result;
    result = g_5ca1b4;

    if (result)
    {
        result = g_5ca194;

        if (result)
        {
            int32_t* eax = g_5ca190;
            (*(*eax + 0x10))(eax, &var_4, 0);
            int32_t ecx_1 = g_5ca1a4;
            result = g_5ca198;

            if (var_4 >= ecx_1)
            {
                if (!result)
                {
                label_495e3a:

                    if (sub_495cd0(g_5ca190, result, ecx_1) && !g_5ca1b0)
                        sub_495da0();

                    result = g_5ca198 ^ g_5ca1a4;
                    g_5ca198 = result;
                }
            }
            else if (result)
                goto label_495e3a;
        }
    }

    return result;
}

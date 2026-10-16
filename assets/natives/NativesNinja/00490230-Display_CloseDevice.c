#include "00490230-Display_CloseDevice.h"
/* 0x00490230 Display_CloseDevice full linked: callers=1 callees=4 */
int32_t sub_490230()

{
    if (g_5c8e30)
        goto label_490267;

    int32_t* eax = g_5c8e24;
    int32_t eax_1 = (*(*eax + 0x1c))(eax);

    if (!eax_1)
    {
        g_5c8e30 = 1;
    label_490267:
        memcpy(0xc28d62, 0xc28c62, 0x100);

        if (g_c28c60)
        {
            eax_1 = 0;
            __builtin_memset(0xc28c62, 0, 0x100);
        }
        else
        {
            int32_t eax_3 = sub_48f270();

            if (eax_3)
            {
                memcpy(0xc28c62, 0xc28e80, 0x100);
                return eax_3;
            }

            int32_t* eax_4 = g_5c8e24;
            eax_1 = (*(*eax_4 + 0x24))(eax_4, 0x100, 0xc28c62);

            if (eax_1)
            {
                int32_t* eax_5 = g_5c8e24;

                if ((*(*eax_5 + 0x1c))(eax_5))
                {
                    eax_1 = 0;
                    __builtin_memset(0xc28c62, 0, 0x100);
                }
                else
                {
                    int32_t* eax_7 = g_5c8e24;
                    eax_1 = (*(*eax_7 + 0x24))(eax_7, 0x100, 0xc28c62);

                    if (eax_1)
                    {
                        eax_1 = 0;
                        __builtin_memset(0xc28c62, 0, 0x100);
                    }
                }
            }
        }
    }

    return eax_1;
}

#include "gi_platform.h"
#include "00490230-Display_CloseDevice.h"
int32_t Display_CloseDevice()

{
    if (g_5c8e30)
        goto label_490267;

    int32_t* valA = g_5c8e24;
    int32_t valA1 = ((int(*)())(uintptr_t)((*(int32_t*)(uintptr_t)(*valA + 0x1c))))(valA);

    if (!valA1)
    {
        g_5c8e30 = 1;
    label_490267: ;
        memcpy(0xc28d62, 0xc28c62, 0x100);

        if (g_c28c60)
        {
            valA1 = 0;
            __builtin_memset(0xc28c62, 0, 0x100);
        }
        else
        {
            int32_t valA3 = FX_SmokeEmit_25();

            if (valA3)
            {
                memcpy(0xc28c62, 0xc28e80, 0x100);
                return valA3;
            }

            int32_t* valA4 = g_5c8e24;
            valA1 = ((int(*)())(uintptr_t)(*(*valA4 + 0x24)))(valA4, 0x100, 0xc28c62);

            if (valA1)
            {
                int32_t* valA5 = g_5c8e24;

                if (((int(*)())(uintptr_t)(*(*valA5 + 0x1c)))(valA5))
                {
                    valA1 = 0;
                    __builtin_memset(0xc28c62, 0, 0x100);
                }
                else
                {
                    int32_t* valA7 = g_5c8e24;
                    valA1 = ((int(*)())(uintptr_t)(*(*valA7 + 0x24)))(valA7, 0x100, 0xc28c62);

                    if (valA1)
                    {
                        valA1 = 0;
                        __builtin_memset(0xc28c62, 0, 0x100);
                    }
                }
            }
        }
    }

    return valA1;
}

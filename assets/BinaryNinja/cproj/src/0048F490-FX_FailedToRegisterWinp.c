#include "gi_platform.h"
#include "0048F490-FX_FailedToRegisterWinp.h"
void* FX_FailedToRegisterWinp(int32_t a1)

{
    int32_t objC = 0;

    for (int32_t* i = &g_5c8d30; i < &g_5c8df0; )
    {
        if (!*i)
        {
            int32_t valA1 = objC * 0xc;
            *(valA1 + &g_5c8d30) = a1;
            *(valA1 + 0x5c8d2c) = 0;
            *(valA1 + 0x5c8d28) = 0;
            return Camera_SetFieldOfView_33(&g_5c8df0, valA1 + 0x5c8d28);
        }

        i = &i[3];
        objC += 1;
    }

    Error_Show("Failed to register WinProc callback.");

    while (true)
        /* nop */
}

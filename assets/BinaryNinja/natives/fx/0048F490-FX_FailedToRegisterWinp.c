// Original IGI.EXE function: FX_FailedToRegisterWinp (VA 0x0048F490; static CFG gate PASS, CFG score 1.000).
#include "FX_FailedToRegisterWinp.h"
void* FX_FailedToRegisterWinp(int32_t context)

{
    int32_t entity_val = 0;

    for (int32_t* i = &g_5c8d30; i < &g_5c8df0; )
    {
        if (!*i)
        {
            int32_t data_1 = entity_val * 0xc;
            *(data_1 + &g_5c8d30) = context;
            *(data_1 + 0x5c8d2c) = 0;
            *(data_1 + 0x5c8d28) = 0;
            return Camera_SetFieldOfView_33(&g_5c8df0, data_1 + 0x5c8d28);
        }

        i = &i[3];
        entity_val += 1;
    }

    Error_Show("Failed to register WinProc callback.");

    while (true)
        /* nop */
}

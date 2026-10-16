#include "0044EE40-AIFunction_SendResponse.h"
/* 0x0044ee40 AIFunction_SendResponse full linked: callers=0 callees=3 */
int32_t AIFunction_SendResponse(int32_t a1)

// Sig: void AIFunction_SendResponse()
// Note: Sends the AI's RESPONSE to the current event (used for ALERT_RESPONSE
// chains so buddy AIs react too). Takes no args. Call inside alert handlers.
{
    int32_t* eax = **&g_5bda60;

    if (*eax)
    {
        sub_450d80(*eax[0xa], 6, 0x24);
        int32_t var_18 = 0;
        int32_t var_10 = 0;
        int32_t var_c = 0;
        char* var_8 = &g_567c74;
        memcpy(a1, &var_18, 0x18);
        return a1;
    }

    Error_Show("No EVENT to respond");

    while (true)
        /* nop */
}

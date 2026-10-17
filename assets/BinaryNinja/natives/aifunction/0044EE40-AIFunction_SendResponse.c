// Original IGI.EXE function: AIFunction_SendResponse (VA 0x0044EE40; static CFG gate PASS, CFG score 0.889).
#include "AIFunction_SendResponse.h"
int32_t AIFunction_SendResponse(int32_t context)

// Sig: void AIFunction_SendResponse()
// Note: Sends the AI's RESPONSE to the current event (used for ALERT_RESPONSE
// chains so buddy AIs react too). Takes no args. Call inside alert handlers.
{
    int32_t* data_val = **&g_5bda60;

    if (*data_val)
    {
        AI_UpdateOrders(*data_val[0xa], 6, 0x24);
        int32_t item_18 = 0;
        int32_t item_10 = 0;
        int32_t item_c = 0;
        char* item_8 = &g_567c74;
        memcpy(context, &item_18, 0x18);
        return context;
    }

    Error_Show("No EVENT to respond");

    while (true)
        /* nop */
}

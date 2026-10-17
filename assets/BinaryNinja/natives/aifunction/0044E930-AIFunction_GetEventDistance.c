// Original IGI.EXE function: AIFunction_GetEventDistance (VA 0x0044E930; static CFG gate PASS, CFG score 0.933).
#include "AIFunction_GetEventDistance.h"
int32_t AIFunction_GetEventDistance(int32_t context)

// Sig: float AIFunction_GetEventDistance()
// Note: RETURNS the DISTANCE to the source of the current event (Real). Takes
// no args. Use inside event handlers e.g. 'if gunshot closer than X then
// investigate'.
{
    void* data_val = Env_CheckAmbientArea_12();

    if (data_val)
    {
        double* data_2 = g_5bda58 + 0x38;
        double* item_30 = data_val + 0x10;
        long double fp0 = Sys_DispatchOpcode_11(item_30, data_2);
        double* temp_1 = g_5bda58 + 0x38;
        int32_t item_18 = fp0;
        double item_10 = Sys_DispatchOpcode_11(data_val + 0x10, temp_1);
        char* item_8 = &g_567c74;
        memcpy(context, &item_18, 0x18);
        return context;
    }

    Error_Show("No EVENT to distance");

    while (true)
        /* nop */
}

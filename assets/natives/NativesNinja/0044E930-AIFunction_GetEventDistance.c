#include "0044E930-AIFunction_GetEventDistance.h"
/* 0x0044e930 AIFunction_GetEventDistance full linked: callers=0 callees=5 */
int32_t AIFunction_GetEventDistance(int32_t a1)

// Sig: float AIFunction_GetEventDistance()
// Note: RETURNS the DISTANCE to the source of the current event (Real). Takes
// no args. Use inside event handlers e.g. 'if gunshot closer than X then
// investigate'.
{
    void* eax = sub_44c8c0();

    if (eax)
    {
        double* var_30 = eax + 0x10;
        int32_t var_18 = sub_4b32b0(var_30, &g_5bda58->pad[0x38]);
        double var_10 = sub_4b32b0(eax + 0x10, &g_5bda58->pad[0x38]);
        char* var_8 = &g_567c74;
        memcpy(a1, &var_18, 0x18);
        return a1;
    }

    Error_Show("No EVENT to distance");

    while (true)
        /* nop */
}

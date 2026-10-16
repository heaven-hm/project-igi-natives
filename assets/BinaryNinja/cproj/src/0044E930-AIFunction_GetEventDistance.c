#include "gi_platform.h"
#include "0044E930-AIFunction_GetEventDistance.h"
int32_t AIFunction_GetEventDistance(int32_t a1)

// Sig: float AIFunction_GetEventDistance()
// Note: RETURNS the DISTANCE to the source of the current event (Real). Takes
// no args. Use inside event handlers e.g. 'if gunshot closer than X then
// investigate'.
{
    void* valA = Env_CheckAmbientArea_12();

    if (valA)
    {
        double* valA2 = g_5bda58 + 0x38;
        double* v_30 = valA + 0x10;
        int80_t fp0 = Sys_DispatchOpcode_11(v_30, valA2);
        double* tmpD1 = g_5bda58 + 0x38;
        int32_t v_18 = fp0;
        double v_10 = Sys_DispatchOpcode_11(valA + 0x10, tmpD1);
        char* v_8 = &g_567c74;
        memcpy(a1, &v_18, 0x18);
        return a1;
    }

    Error_Show("No EVENT to distance");

    while (true)
        /* nop */
}

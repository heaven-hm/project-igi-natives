#include "gi_platform.h"
#include "0044E470-AIFunction_GetAlarmAccess.h"
int32_t AIFunction_GetAlarmAccess(int32_t a1)

// Sig: int AIFunction_GetAlarmAccess()
// Note: RETURNS the current AIALARMACCESS mode: BEFORECOMBAT=0, AFTERCOMBAT=1.
// Takes no args.
{
    int32_t valA1 = *(g_5bda58 + 0x3acc);
    int32_t v_18 = valA1;
    char* v_8 = &g_567c74;
    double v_10 = valA1;
    memcpy(a1, &v_18, 0x18);
    return a1;
}

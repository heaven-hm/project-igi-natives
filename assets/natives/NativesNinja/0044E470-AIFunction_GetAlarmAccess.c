#include "0044E470-AIFunction_GetAlarmAccess.h"
/* 0x0044e470 AIFunction_GetAlarmAccess full linked: callers=0 callees=1 */
int32_t AIFunction_GetAlarmAccess(int32_t a1)

// Sig: int AIFunction_GetAlarmAccess()
// Note: RETURNS the current AIALARMACCESS mode: BEFORECOMBAT=0, AFTERCOMBAT=1.
// Takes no args.
{
    struct ai_ctx* eax = g_5bda58;
    int32_t eax_1;
    eax_1 = eax->pad[0x3acc];
    *(&eax_1 + 1) = eax->pad[0x3acd];
    *(&eax_1 + 2) = eax->pad[0x3ace];
    *(&eax_1 + 3) = eax->pad[0x3acf];
    int32_t var_18 = eax_1;
    char* var_8 = &g_567c74;
    double var_10 = eax_1;
    memcpy(a1, &var_18, 0x18);
    return a1;
}

#include "0044E4B0-AIFunction_GetGunnerID.h"
/* 0x0044e4b0 AIFunction_GetGunnerID full linked: callers=0 callees=1 */
int32_t AIFunction_GetGunnerID(int32_t a1)

// Sig: int AIFunction_GetGunnerID()
// Note: RETURNS this AI's assigned gunner slot id. Takes no args.
{
    struct ai_ctx* eax = g_5bda58;
    int32_t eax_1;
    eax_1 = eax->pad[0x3ac8];
    *(&eax_1 + 1) = eax->pad[0x3ac9];
    *(&eax_1 + 2) = eax->pad[0x3aca];
    *(&eax_1 + 3) = eax->pad[0x3acb];
    int32_t var_18 = eax_1;
    char* var_8 = &g_567c74;
    double var_10 = eax_1;
    memcpy(a1, &var_18, 0x18);
    return a1;
}

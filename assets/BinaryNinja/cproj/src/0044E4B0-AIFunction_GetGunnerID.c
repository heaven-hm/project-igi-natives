#include "gi_platform.h"
#include "0044E4B0-AIFunction_GetGunnerID.h"
int32_t AIFunction_GetGunnerID(int32_t a1)

// Sig: int AIFunction_GetGunnerID()
// Note: RETURNS this AI's assigned gunner slot id. Takes no args.
{
    int32_t valA1 = *(g_5bda58 + 0x3ac8);
    int32_t v_18 = valA1;
    char* v_8 = &g_567c74;
    double v_10 = valA1;
    memcpy(a1, &v_18, 0x18);
    return a1;
}

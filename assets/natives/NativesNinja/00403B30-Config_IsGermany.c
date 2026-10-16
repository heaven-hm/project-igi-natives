#include "00403B30-Config_IsGermany.h"
/* 0x00403b30 Config_IsGermany full linked: callers=0 callees=3 */
int32_t Config_IsGermany(int32_t a1)

// Sig: int Config_IsGermany()
// Note: RETURNS 1 when running the GERMAN retail build (censored variant), 0
// otherwise. Takes no args. German builds gate blood/gore - check before
// forcing such effects.
{
    int32_t var_18 = sub_48f2c0();
    char* var_8 = &g_567c74;
    double var_10 = sub_48f2c0();
    memcpy(a1, &var_18, 0x18);
    return a1;
}

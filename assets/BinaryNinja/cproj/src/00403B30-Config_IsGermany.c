#include "gi_platform.h"
#include "00403B30-Config_IsGermany.h"
int32_t Config_IsGermany(int32_t a1)

// Sig: int Config_IsGermany()
// Note: RETURNS 1 when running the GERMAN retail build (censored variant), 0
// otherwise. Takes no args. German builds gate blood/gore - check before
// forcing such effects.
{
    int32_t v_18 = FX_FragmentSimulate_26();
    char* v_8 = &g_567c74;
    double v_10 = FX_FragmentSimulate_26();
    memcpy(a1, &v_18, 0x18);
    return a1;
}

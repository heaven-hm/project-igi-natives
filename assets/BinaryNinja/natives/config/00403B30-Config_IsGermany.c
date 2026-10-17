// Original IGI.EXE function: Config_IsGermany (VA 0x00403B30; static CFG gate PASS, CFG score 0.889).
#include "Config_IsGermany.h"
int32_t Config_IsGermany(int32_t context)

// Sig: int Config_IsGermany()
// Note: RETURNS 1 when running the GERMAN retail build (censored variant), 0
// otherwise. Takes no args. German builds gate blood/gore - check before
// forcing such effects.
{
    int32_t item_18 = FX_FragmentSimulate_26();
    char* item_8 = &g_567c74;
    double item_10 = FX_FragmentSimulate_26();
    memcpy(context, &item_18, 0x18);
    return context;
}

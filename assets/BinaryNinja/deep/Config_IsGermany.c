/* LOGIC NOTE (Config_IsGermany @ 0x00403B30)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : , sub_
   called by : none
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "Config_IsGermany.h"

int32_t Config_IsGermany(int32_t arg1)

// Sig: int Config_IsGermany()
// Note: RETURNS 1 when running the GERMAN retail build (censored variant), 0
// otherwise. Takes no args. German builds gate blood/gore - check before
// forcing such effects.
{
    int32_t v_18 = FX_FragmentSimulate_26();
    char* v_8 = &data_567c74;
    double v_10 = FX_FragmentSimulate_26();
    __builtin_memcpy(arg1, &v_18, 0x18);
    return arg1;
}

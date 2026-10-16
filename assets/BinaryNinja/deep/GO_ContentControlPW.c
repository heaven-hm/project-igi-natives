/* LOGIC NOTE (GO_ContentControlPW @ 0x00403C10)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : , sub_
   called by : none
   data refs : none
   strings   : Config_SetContentControlPassword
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "GO_ContentControlPW.h"

int32_t GO_ContentControlPW(int32_t arg1, float arg2 @ 0xc)

// Sig: int Config_SetContentControlPassword()
// Note: Menu-script setter form (argc=0): same address registered twice by
// igi.exe - site 0x4034C1 pushes str "Config_SetContentControlPassword" ->
// registrar 0x4B8890. Password comes from the script context, not an explicit
// arg. Returns 1.
{
    char* v_24 = 0x20;
    char* v_28 = &data_bc79c8;
    int32_t v_2c = 0;
    float v_30 = arg2;
    Sys_ResolveSymbol_23(v_30, v_2c, v_28, v_24);
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &data_567c74;
    __builtin_memcpy(arg1, &v_18, 0x18);
    return arg1;
}

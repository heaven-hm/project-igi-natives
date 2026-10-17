// Original IGI.EXE function: GO_ContentControlPW (VA 0x00403C10; static CFG gate FAIL, CFG score 0.833).
#include "GO_ContentControlPW.h"
int32_t GO_ContentControlPW(int32_t context, float param_2 )

// Sig: int Config_SetContentControlPassword()
// Note: Menu-script setter form (argc=0): same address registered twice by
// igi.exe - site 0x4034C1 pushes str "Config_SetContentControlPassword" ->
// registrar 0x4B8890. Password comes from the script context, not an explicit
// arg. Returns 1.
{
    char* item_24 = 0x20;
    char* item_28 = &g_bc79c8;
    int32_t item_2c = 0;
    float item_30 = param_2;
    Sys_ResolveSymbol_23(item_30, item_2c, item_28, item_24);
    int32_t item_18 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}

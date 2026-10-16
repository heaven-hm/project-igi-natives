/* LOGIC NOTE (Config_GetContentControlPassword @ 0x00403C70)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : , Menu
   called by : none
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "Config_GetContentControlPassword.h"

int32_t Config_GetContentControlPassword(int32_t arg1)

// Sig: char* Config_GetContentControlPassword()
// Note: RETURNS the stored content-control (parental lock) password string.
// Takes no args. Compare against user input or pass to
// Config_VerifyContentControlPassword.
{
    Menu_RequestScreen_9(&data_bc79c8);
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &data_567c74;
    __builtin_memcpy(arg1, &v_18, 0x18);
    return arg1;
}

#include "00403C70-Config_GetContentControlPassword.h"
/* 0x00403c70 Config_GetContentControlPassword full linked: callers=0 callees=2 */
int32_t Config_GetContentControlPassword(int32_t a1)

// Sig: char* Config_GetContentControlPassword()
// Note: RETURNS the stored content-control (parental lock) password string.
// Takes no args. Compare against user input or pass to
// Config_VerifyContentControlPassword.
{
    Menu_RequestScreen_9(&g_bc79c8);
    int32_t var_18 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}

// Original IGI.EXE function: Config_GetContentControlPassword (VA 0x00403C70; static CFG gate FAIL, CFG score 0.833).
#include "Config_GetContentControlPassword.h"
int32_t Config_GetContentControlPassword(int32_t a1)

// Sig: char* Config_GetContentControlPassword()
// Note: RETURNS the stored content-control (parental lock) password string.
// Takes no args. Compare against user input or pass to
// Config_VerifyContentControlPassword.
{
    Menu_RequestScreen_9(&g_bc79c8);
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}

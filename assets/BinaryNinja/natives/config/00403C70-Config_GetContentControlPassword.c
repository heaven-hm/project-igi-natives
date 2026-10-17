// Original IGI.EXE function: Config_GetContentControlPassword (VA 0x00403C70; static CFG gate FAIL, CFG score 0.833).
#include "Config_GetContentControlPassword.h"
int32_t Config_GetContentControlPassword(int32_t context)

// Sig: char* Config_GetContentControlPassword()
// Note: RETURNS the stored content-control (parental lock) password string.
// Takes no args. Compare against user input or pass to
// Config_VerifyContentControlPassword.
{
    Menu_RequestScreen_9(&g_bc79c8);
    int32_t item_18 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}

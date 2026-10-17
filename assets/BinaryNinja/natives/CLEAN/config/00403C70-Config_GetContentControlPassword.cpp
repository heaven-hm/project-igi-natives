// IGI native provenance: Config_GetContentControlPassword - 0x00403C70 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00403C70-Config_GetContentControlPassword.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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

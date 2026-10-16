#include "004041D0-Config_GameOptionsInputGetInvertMouse.h"
/* 0x004041d0 Config_GameOptionsInputGetInvertMouse full linked: callers=0 callees=3 */
int32_t Config_GameOptionsInputGetInvertMouse(int32_t a1)

// Sig: int Config_GameOptionsInputGetInvertMouse()
// Note: RETURNS the invert-mouse setting when the engine writes/reads a config
// game-options block (1 = inverted, 0 = normal). Takes no args. Pairs with
// Config_GameOptionsInputSetInvertMouse.
{
    int32_t ecx = 0;
    ecx = !*(Config_GetActivePlayerProfileRecord() + 0x538);
    int32_t var_18 = ecx;
    int32_t edx_1 = 0;
    edx_1 = !*(Config_GetActivePlayerProfileRecord() + 0x538);
    char* var_8 = &g_567c74;
    double var_10 = edx_1;
    memcpy(a1, &var_18, 0x18);
    return a1;
}

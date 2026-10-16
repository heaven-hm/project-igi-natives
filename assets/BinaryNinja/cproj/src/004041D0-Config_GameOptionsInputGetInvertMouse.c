#include "gi_platform.h"
#include "004041D0-Config_GameOptionsInputGetInvertMouse.h"
int32_t Config_GameOptionsInputGetInvertMouse(int32_t a1)

// Sig: int Config_GameOptionsInputGetInvertMouse()
// Note: RETURNS the invert-mouse setting when the engine writes/reads a config
// game-options block (1 = inverted, 0 = normal). Takes no args. Pairs with
// Config_GameOptionsInputSetInvertMouse.
{
    int32_t objC = 0;
    objC = !*(Config_GetActivePlayerProfileRecord() + 0x538);
    int32_t v_18 = objC;
    int32_t tmpD1 = 0;
    tmpD1 = !*(Config_GetActivePlayerProfileRecord() + 0x538);
    char* v_8 = &g_567c74;
    double v_10 = tmpD1;
    memcpy(a1, &v_18, 0x18);
    return a1;
}

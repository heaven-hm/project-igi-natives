// Original IGI.EXE function: Config_GameOptionsInputSetInvertMouse (VA 0x00404160; static CFG gate PASS, CFG score 0.889).
#include "Config_GameOptionsInputSetInvertMouse.h"
int32_t Config_GameOptionsInputSetInvertMouse(long double context , int32_t param_2, float param_3 )

// Sig: void Config_GameOptionsInputSetInvertMouse(int invert)
// Note: Sets invert-mouse in the GAME-OPTIONS block while a config file is
// parsed (the GO_* writer side; runtime getter/setter pair lives on the
// profile). Param: invert = 1 inverted, 0 normal. Use only inside config .qsc
// write-out contexts.
{
    Profile_ValueSet(param_3, 0.0f);
    long double f0 = 0.0;
    context - f0;
    char data_2;

    data_2 = !(*(&((context < f0 ? 1 : 0) << 8 | (FCMP_UO(context, f0) ? 1 : 0) << 0xa
        | (context == f0 ? 1 : 0) << 0xe | 0x800) + 1) & 0x40) ? 0 : 1;

    *(Config_GetActivePlayerProfileRecord() + 0x538) = data_2;
    int32_t item_18 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    char* item_8 = &g_567c74;
    memcpy(param_2, &item_18, 0x18);
    return param_2;
}

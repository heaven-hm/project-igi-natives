#include "00404160-Config_GameOptionsInputSetInvertMouse.h"
/* 0x00404160 Config_GameOptionsInputSetInvertMouse full linked: callers=0 callees=3 */
int32_t Config_GameOptionsInputSetInvertMouse(long double a1 @ st0, int32_t a2, float a3 @ 0xc)

// Sig: void Config_GameOptionsInputSetInvertMouse(int invert)
// Note: Sets invert-mouse in the GAME-OPTIONS block while a config file is
// parsed (the GO_* writer side; runtime getter/setter pair lives on the
// profile). Param: invert = 1 inverted, 0 normal. Use only inside config .qsc
// write-out contexts.
{
    Profile_ValueSet(a3, 0f);
    long double temp0 = 0.0;
    a1 - temp0;
    char eax_2;

    eax_2 = !(*(&((a1 < temp0 ? 1 : 0) << 8 | (FCMP_UO(a1, temp0) ? 1 : 0) << 0xa
        | (a1 == temp0 ? 1 : 0) << 0xe | 0x800) + 1) & 0x40) ? 0 : 1;

    *(Config_GetActivePlayerProfileRecord() + 0x538) = eax_2;
    int32_t var_18 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    char* var_8 = &g_567c74;
    memcpy(a2, &var_18, 0x18);
    return a2;
}

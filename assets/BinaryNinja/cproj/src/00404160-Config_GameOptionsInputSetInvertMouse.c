#include "gi_platform.h"
#include "00404160-Config_GameOptionsInputSetInvertMouse.h"
int32_t Config_GameOptionsInputSetInvertMouse(long double a1 , int32_t a2, float a3 )

// Sig: void Config_GameOptionsInputSetInvertMouse(int invert)
// Note: Sets invert-mouse in the GAME-OPTIONS block while a config file is
// parsed (the GO_* writer side; runtime getter/setter pair lives on the
// profile). Param: invert = 1 inverted, 0 normal. Use only inside config .qsc
// write-out contexts.
{
    Profile_ValueSet(a3, 0.0f);
    long double f0 = 0.0;
    a1 - f0;
    char valA2;

    valA2 = !((*(int32_t*)(uintptr_t)(&((a1 < f0 ? 1 : 0) << 8 | (FCMP_UO(a1, f0) ? 1 : 0) << 0xa
        | (a1 == f0 ? 1 : 0) << 0xe | 0x800) + 1)) & 0x40) ? 0 : 1;

    *(Config_GetActivePlayerProfileRecord() + 0x538) = valA2;
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &g_567c74;
    memcpy(a2, &v_18, 0x18);
    return a2;
}

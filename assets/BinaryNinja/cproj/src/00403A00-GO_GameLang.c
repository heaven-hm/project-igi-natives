#include "gi_platform.h"
#include "00403A00-GO_GameLang.h"
int32_t GO_GameLang(int32_t a1, float a2 )

// Sig: int GO_GameLang(int language)
// Note: Sets game language for the current profile. Param: language = language
// index (retail ships English=0 and German builds use their own index). Use in
// config scripts. Returns 1.
{
    int32_t objC;
    int32_t tmpD;

    if (Camera_UpdateTransform_6(&g_5c8c20, tmpD, objC, &g_5c8c20, "USA"))
    {
        *(g_bc2380 * 0x564 + &g_bc1e28) = Script_GetArg(a2, 0);
        int32_t valA11 = g_bc2380 * 0x159;

        if (*((valA11 << 2) + &g_bc1e28) == 5)
            *((valA11 << 2) + &g_bc1e28) = 0;
    }
    else
        *(g_bc2380 * 0x564 + &g_bc1e28) = 5;

    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}

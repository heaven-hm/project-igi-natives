#include "00403A00-GO_GameLang.h"
/* 0x00403a00 GO_GameLang full linked: callers=0 callees=4 */
int32_t GO_GameLang(int32_t a1, float a2 @ 0xc)

// Sig: int GO_GameLang(int language)
// Note: Sets game language for the current profile. Param: language = language
// index (retail ships English=0 and German builds use their own index). Use in
// config scripts. Returns 1.
{
    int32_t ecx;
    int32_t edx;

    if (sub_4a5980(&g_5c8c20, edx, ecx, &g_5c8c20, "USA"))
    {
        *(g_bc2380 * 0x564 + &g_bc1e28) = sub_4b8a20(a2, 0);
        int32_t eax_11 = g_bc2380 * 0x159;

        if (*((eax_11 << 2) + &g_bc1e28) == 5)
            *((eax_11 << 2) + &g_bc1e28) = 0;
    }
    else
        *(g_bc2380 * 0x564 + &g_bc1e28) = 5;

    int32_t var_18 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}

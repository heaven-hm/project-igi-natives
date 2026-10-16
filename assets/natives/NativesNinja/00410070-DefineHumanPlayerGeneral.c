#include "00410070-DefineHumanPlayerGeneral.h"
/* 0x00410070 DefineHumanPlayerGeneral full linked: callers=0 callees=12 */
int32_t DefineHumanPlayerGeneral(long double a1 @ st0, long double a2 @ st1, long double a3 @ st2, long double a4 @ st3, long double a5 @ st4, long double a6 @ st5, long double a7 @ st6, long double a8 @ st7, int32_t a9, float a10 @ 0xc)

// Sig: unknown DefineHumanPlayerGeneral(unknown param1, unknown param2)
// Note: Registered at 0x41001B via registrar 0x4B8890 (push 0x410070 +
// 'DefineHumanPlayerGeneral'), argc bounds (0, -1). Config-style Define* parser
// (326 bytes), same family as cataloged Define* / *ParseConfigFile natives.
// Verified: r2 forced-analysis confirmed exact start (size 326); P3 byte-level
// name<->address binding at registrar callsite 0x41001B via 0x4B8890; P6
// SHA-256(first 32 code
// bytes)=cea3d514b310551a5dcdc448e743fdd14a408a521345a0e885cddac78040f965;
// re-agent reverser/checker loop ran on this native (C decompilation pending
// ARM64 native port).
{
    float var_30 = 0f;
    Profile_ValueSet(a10, var_30);
    g_56e1e8 = a1;
    Profile_ValueSet(a10, 1.40129846e-45f);
    g_56e1ec = a2 * 4096000f * 9.25925906e-06f;
    Profile_ValueSet(a10, 2.80259693e-45f);
    g_56e1f0 = a3 * 4096000f * 9.25925906e-06f;
    Profile_ValueSet(a10, 4.20389539e-45f);
    g_56e1f4 = a4 * 4096000f * 9.25925906e-06f;
    Profile_ValueSet(a10, 5.60519386e-45f);
    g_56e1f8 = a5 * 4096.0;
    Profile_ValueSet(a10, 7.00649232e-45f);
    g_56e1fc = a6 * 4096.0;
    Profile_ValueSet(a10, 8.40779079e-45f);
    g_56e200 = a7 * 30.0;
    Profile_ValueSet(a10, 9.80908925e-45f);
    float edi = 1.26116862e-44f;
    g_56e204 = a8;
    var_30 = 1.12103877e-44f;
    Profile_ValueSet(a10, var_30);
    g_56e208 = a1;
    int16_t top = 9;
    float* ebx = &g_5389f8;

    do
    {
        float eax_1 = edi;
        edi += 1;
        var_30 = eax_1;
        Profile_ValueSet(a10, var_30);
🚫🚫🚫        *ebx = /* *ebx = unimplemented  {fstp dword [ebx], st0} */;
        /* unimplemented  {fstp dword [ebx], st0} */
        top += 1;
        ebx = &ebx[4];
    } while (edi - 9 < 0x11);

    for (float* i = &g_538b08; i < &g_538c18; i = &i[4])
    {
        float eax_2 = edi;
        edi += 1;
        var_30 = eax_2;
        Profile_ValueSet(a10, var_30);
🚫🚫🚫        *i = /* *i = unimplemented  {fstp dword [ebx], st0} */;
        /* unimplemented  {fstp dword [ebx], st0} */
        top += 1;
    }

    int32_t var_18 = 1;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a9, &var_18, 0x18);
    return a9;
}

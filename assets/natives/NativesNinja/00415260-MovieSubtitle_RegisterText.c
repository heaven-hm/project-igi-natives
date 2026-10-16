#include "00415260-MovieSubtitle_RegisterText.h"
/* 0x00415260 MovieSubtitle_RegisterText full linked: callers=0 callees=16 */
int32_t MovieSubtitle_RegisterText(long double a1 @ st0, long double a2 @ st1, long double a3 @ st3, long double a4 @ st4, long double a5 @ st5, long double a6 @ st6, int32_t a7, char* a8, float a9)

// Sig: void MovieSubtitle_RegisterText(...)
// Note: Registers one subtitle text entry (string + timing) shown over
// movies/briefings (argc unknown - parser context). Call after the font
// registration it should use.
{
    int32_t var_44c = sub_4b8a20(a9, 0);
    void var_400;
    char* var_450 = sub_4b8a80(a9, 1, &var_400, 0x400);
    int32_t var_448 = sub_4b8a20(a9, 2);
    int32_t var_444 = sub_4b8a20(a9, 3);
    Profile_ValueSet(a9, 5.60519386e-45f);
    float var_438 = a1;
    Profile_ValueSet(a9, 7.00649232e-45f);
    float var_434 = a2;
    Profile_ValueSet(a9, 8.40779079e-45f);
    long double x87_r2;
    float var_430 = x87_r2;
    char var_41c = sub_4b8a20(a9, 7);
    Profile_ValueSet(a9, 1.12103877e-44f);
    float var_42c = a3;
    Profile_ValueSet(a9, 1.26116862e-44f);
    float var_428 = a4;
    int32_t var_440 = sub_4b8a20(a9, 0xa);
    Profile_ValueSet(a9, 1.54142831e-44f);
    float var_424 = a5;
    int32_t var_43c = sub_4b8a20(a9, 0xc);
    Profile_ValueSet(a9, 1.821688e-44f);
    float var_420 = a6;
    sub_491280(a8, &var_450);
    int32_t var_418 = 0xe;
    int32_t var_410 = 0;
    int32_t var_40c = 0x402c0000;
    char* var_408 = &g_567c74;
    memcpy(a7, &var_418, 0x18);
    return a7;
}

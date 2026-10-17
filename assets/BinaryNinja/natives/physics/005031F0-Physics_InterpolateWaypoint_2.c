// Original IGI.EXE function: Physics_InterpolateWaypoint_2 (VA 0x005031F0; static CFG gate PASS, CFG score 1.000).
#include "Physics_InterpolateWaypoint_2.h"
int32_t Physics_InterpolateWaypoint_2(long double a1 @ fp0, long double a2 @ fp1, long double a3 @ fp2, long double a4 @ fp3, long double a5 @ fp4, long double a6 @ fp5, long double a7 @ fp6, long double a8 @ fp7, float* a9, int32_t* a10, float a11)

{
    int32_t* srcS = a10;
    float valA = *srcS;
    *srcS = valA + 1;
    Profile_ValueSet(a11, valA);
    *a9 = a1;
    float valA1 = *srcS;
    *srcS = valA1 + 1;
    Profile_ValueSet(a11, valA1);
    a9[1] = a2;
    float valA2 = *srcS;
    *srcS = valA2 + 1;
    Profile_ValueSet(a11, valA2);
    a9[2] = a3;
    float valA3 = *srcS;
    *srcS = valA3 + 1;
    Profile_ValueSet(a11, valA3);
    a9[3] = a4;
    float valA4 = *srcS;
    *srcS = valA4 + 1;
    Profile_ValueSet(a11, valA4);
    a9[4] = a5;
    float valA5 = *srcS;
    *srcS = valA5 + 1;
    Profile_ValueSet(a11, valA5);
    a9[5] = a6;
    float valA6 = *srcS;
    *srcS = valA6 + 1;
    Profile_ValueSet(a11, valA6);
    a9[6] = a7;
    float valA7 = *srcS;
    *srcS = valA7 + 1;
    Profile_ValueSet(a11, valA7);
    a9[7] = a8;
    float valA8 = *srcS;
    *srcS = valA8 + 1;
    Profile_ValueSet(a11, valA8);
    a9[8] = a1;
    float valA9 = *srcS;
    *srcS = valA9 + 1;
    Profile_ValueSet(a11, valA9);
    a9[9] = a2;
    int16_t idx = 0xa;
    int32_t valA10 = *srcS;
    *srcS = valA10 + 1;
    int32_t valA11 = Script_GetArg(a11, valA10);
    int32_t i = 0;
    a9[0xa] = valA11;

    if (valA11 > 0)
    {
        a10 = &a9[0xb];

        do
        {
            Profile_ValueSet(a11, *srcS + 6);
🚫🚫🚫            float v_14_3 = /* float v_14_3 = unimplemented  {fstp dword [esp], fp0} */;
            /* unimplemented  {fstp dword [esp], fp0} */
            Profile_ValueSet(a11, *srcS + 5);
🚫🚫🚫            float v_18_4 = /* float v_18_4 = unimplemented  {fstp dword [esp], fp0} */;
            /* unimplemented  {fstp dword [esp], fp0} */
            Profile_ValueSet(a11, *srcS + 4);
🚫🚫🚫            float v_1c_4 = /* float v_1c_4 = unimplemented  {fstp dword [esp], fp0} */;
            /* unimplemented  {fstp dword [esp], fp0} */
            Profile_ValueSet(a11, *srcS + 3);
🚫🚫            /* unimplemented  {fmul fp0, dword [&g_5333b8]} */
🚫🚫🚫            float v_20_4 = /* float v_20_4 = unimplemented  {fstp dword [esp], fp0} */;
            /* unimplemented  {fstp dword [esp], fp0} */
            Profile_ValueSet(a11, *srcS + 2);
🚫🚫            /* unimplemented  {fmul fp0, dword [&g_5333b8]} */
🚫🚫🚫            float v_24_4 = /* float v_24_4 = unimplemented  {fstp dword [esp], fp0} */;
            /* unimplemented  {fstp dword [esp], fp0} */
            Profile_ValueSet(a11, *srcS + 1);
🚫🚫            /* unimplemented  {fmul fp0, dword [&g_5333b8]} */
🚫🚫🚫            float v_28_4 = /* float v_28_4 = unimplemented  {fstp dword [esp], fp0} */;
            /* unimplemented  {fstp dword [esp], fp0} */
            Profile_ValueSet(a11, *srcS);
🚫🚫🚫            float v_2c_3 = /* float v_2c_3 = unimplemented  {fstp dword [esp], fp0} */;
            /* unimplemented  {fstp dword [esp], fp0} */
            idx += 7;
            SoundSys_SetFrequency_16(a10, v_2c_3, v_28_4, v_24_4, v_20_4, v_1c_4, v_18_4, v_14_3);
            *srcS += 7;
            i += 1;
            a10 = &a10[7];
        } while (i < a9[0xa]);
    }

    float valA20 = *srcS;
    *srcS = valA20 + 1;
    Profile_ValueSet(a11, valA20);
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_5333b8]} */
🚫🚫🚫    a9[0x43] = /* a9[0x43] = unimplemented  {fstp dword [ctxB+0x10c], fp0} */;
    /* unimplemented  {fstp dword [ctxB+0x10c], fp0} */
    float valA21 = *srcS;
    *srcS = valA21 + 1;
    Profile_ValueSet(a11, valA21);
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_533504]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_53367c]} */
🚫🚫🚫    a9[0x44] = /* a9[0x44] = unimplemented  {fstp dword [ctxB+0x110], fp0} */;
    /* unimplemented  {fstp dword [ctxB+0x110], fp0} */
    float valA22 = *srcS;
    *srcS = valA22 + 1;
    int32_t result = Profile_ValueSet(a11, valA22);
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_533504]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_53367c]} */
🚫🚫🚫    a9[0x45] = /* a9[0x45] = unimplemented  {fstp dword [ctxB+0x114], fp0} */;
    /* unimplemented  {fstp dword [ctxB+0x114], fp0} */
    return result;
}

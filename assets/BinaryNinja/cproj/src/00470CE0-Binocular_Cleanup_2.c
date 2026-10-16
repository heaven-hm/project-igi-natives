#include "gi_platform.h"
#include "00470CE0-Binocular_Cleanup_2.h"
int32_t Binocular_Cleanup_2(int32_t a1 )

{
    int32_t* dstD = a1;
    int32_t srcS = dstD[2];
    float* ctxB = *dstD;
    int32_t valA3;
    int32_t tmpD;
    tmpD = HIGHD(Script_GetArg(dstD[1], srcS));
    valA3 = LOWD(Script_GetArg(dstD[1], srcS));
    long double fp0;
    bool c1;
    bool c2;
    fp0 = __fptan(((valA3 - tmpD) >> 1) * 0.0174532924.0f);
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫    ctxB[1] = /* ctxB[1] = unimplemented  {fstp dword [ctxB+0x4], fp0} */;
    /* unimplemented  {fstp dword [ctxB+0x4], fp0} */
    int32_t valA8;
    int32_t tmpD1;
    tmpD1 = HIGHD(Script_GetArg(dstD[1], srcS + 1));
    valA8 = LOWD(Script_GetArg(dstD[1], srcS + 1));
    a1 = (valA8 - tmpD1) >> 1;
🚫🚫    /* unimplemented  {fild fp0, dword [esp+0x28]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_53367c]} */
🚫🚫🚫🚫    long double fp0_1;
    bool c1_1;
    bool c2_1;
    fp0_1 = __fptan(/* fp0_1, c1_1, c2_1 = __fptan(unimplemented  {fptan }) */);
    /* unimplemented  {fptan } */

    if (!c2_1)
        /* unimplemented  {fptan } */

🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫    ctxB[2] = /* ctxB[2] = unimplemented  {fstp dword [ctxB+0x8], fp0} */;
    /* unimplemented  {fstp dword [ctxB+0x8], fp0} */
    int32_t valA12;
    int32_t tmpD3;
    tmpD3 = HIGHD(Script_GetArg(dstD[1], srcS + 2));
    valA12 = LOWD(Script_GetArg(dstD[1], srcS + 2));
    int32_t result = (valA12 - tmpD3) >> 1;
    a1 = result;
🚫🚫    /* unimplemented  {fild fp0, dword [esp+0x14]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_53367c]} */
🚫🚫🚫🚫    long double fp0_2;
    bool c1_2;
    bool c2_2;
    fp0_2 = __fptan(/* fp0_2, c1_2, c2_2 = __fptan(unimplemented  {fptan }) */);
    /* unimplemented  {fptan } */

    if (!c2_2)
        /* unimplemented  {fptan } */

🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫    *ctxB =
    /* unimplemented  {fstp dword [ctxB], fp0} */
    dstD[2] = srcS + 3;
    return result;
}

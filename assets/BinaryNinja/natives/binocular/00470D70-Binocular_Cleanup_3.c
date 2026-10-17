// Original IGI.EXE function: Binocular_Cleanup_3 (VA 0x00470D70; static CFG gate PASS, CFG score 1.000).
#include "Binocular_Cleanup_3.h"
float Binocular_Cleanup_3(int32_t* a1 @ 0x8) __location("valA")

{
    void* valA1 = *(a1[1] + 0x6e4);

    if (valA1)
    {
        Sys_ExecuteBytecode_2(valA1);
        *(a1[1] + 0x6e4) = 0;
    }

    int32_t* ctxB = Script_FormatString_31(*a1, "Binocular - Default FOV (degrees)");

    if (!ctxB)
        ctxB = Script_CallNativeHandler_31(*a1, "Binocular - Default FOV (degrees)", 0x428c0000);

    if (!Script_FormatString_31(*a1, "Binocular - Max FOV (degrees)"))
        Script_CallNativeHandler_31(*a1, "Binocular - Max FOV (degrees)", 0x42b40000);

    if (!Script_FormatString_31(*a1, "Binocular - Min FOV (degrees)"))
        Script_CallNativeHandler_31(*a1, "Binocular - Min FOV (degrees)", 0x40a00000);

    long double fp0;
    bool c1;
    bool c2;
    fp0 = __fptan(ctxB[0x49] * 0.5f * 0.0174532924f);
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫    float v_c = /* float v_c = unimplemented  {fstp dword [esp+0x14], fp0} */;
    /* unimplemented  {fstp dword [esp+0x14], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [dstD+0x124]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_533504]} */
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
🚫🚫🚫    float v_4 = /* float v_4 = unimplemented  {fstp dword [esp+0x1c], fp0} */;
    /* unimplemented  {fstp dword [esp+0x1c], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [valA+0x124]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_533504]} */
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
🚫🚫🚫    float result = /* float result = unimplemented  {fstp dword [esp+0x18], fp0} */;
    /* unimplemented  {fstp dword [esp+0x18], fp0} */
    *(a1[1] + 0x6e4) = Mem_Alloc(0xc, 4);
    float* objC4 = *(a1[1] + 0x6e4);
    *objC4 = v_c;
    objC4[1] = result;
    objC4[2] = v_4;
    return result;
}

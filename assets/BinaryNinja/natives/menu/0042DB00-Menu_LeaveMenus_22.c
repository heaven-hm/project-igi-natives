// Original IGI.EXE function: Menu_LeaveMenus_22 (VA 0x0042DB00; static CFG gate PASS, CFG score 1.000).
#include "Menu_LeaveMenus_22.h"
char* Menu_LeaveMenus_22(int32_t a1, int32_t* a2)

{
    int32_t* srcS = a2;
    void* flagP = *srcS;
    float dstD = srcS[1];
    (*(((SoundSys_Update3DPosition_18() * 0x180 + Script_ExecuteLevelScript_16()) << 2) + &g_a96ae0))(a1, srcS);
    int32_t valA5 = srcS[2];
    srcS[2] = valA5 + 1;
    int32_t valA6 = Script_GetArg(dstD, valA5);
    *(flagP + 0x118) = valA6;
    a2 = nullptr;

    if (valA6 > 0)
    {
        char* ctxB3 = flagP + 0x11d;
        bool cond_2_1;

        do
        {
            int32_t valA7 = srcS[2];
            srcS[2] = valA7 + 1;
            ctxB3[0xffffffff] = Script_GetArg(dstD, valA7);
            int32_t valA9 = srcS[2];
            srcS[2] = valA9 + 1;
            *ctxB3 = Script_GetArg(dstD, valA9);
            float valA11 = srcS[2];
            srcS[2] = valA11 + 1;
            Profile_ValueSet(dstD, valA11);
🚫🚫🚫            *(ctxB3 + 3) =
            /* unimplemented  {fstp dword [ctxB+0x3], fp0} */
            int32_t valA12 = srcS[2];
            srcS[2] = valA12 + 1;
            *(ctxB3 + 7) = Script_GetArg(dstD, valA12);
            float valA14 = srcS[2];
            srcS[2] = valA14 + 1;
            Profile_ValueSet(dstD, valA14);
🚫🚫            /* unimplemented  {fmul fp0, dword [&g_5333b8]} */
🚫🚫🚫            *(ctxB3 + 0xb) =
            /* unimplemented  {fstp dword [ctxB+0xb], fp0} */
            float valA15 = srcS[2];
            srcS[2] = valA15 + 1;
            Profile_ValueSet(dstD, valA15);
🚫🚫🚫            *(ctxB3 + 0xf) =
            /* unimplemented  {fstp dword [ctxB+0xf], fp0} */
            int16_t idx = idx + 3;
            ctxB3 = &ctxB3[0x14];
            cond_2_1 = a2 + 1 < *(flagP + 0x118);
            a2 += 1;
        } while (cond_2_1);
    }

    float valA18 = srcS[2];
    srcS[2] = valA18 + 1;
    Profile_ValueSet(dstD, valA18);
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_5333b8]} */
🚫🚫🚫    *(flagP + 0x25c) =
    /* unimplemented  {fstp dword [flagP+0x25c], fp0} */
    int32_t valA19 = srcS[2];
    srcS[2] = valA19 + 1;
    *(flagP + 0x260) = Script_GetArg(dstD, valA19);
    int32_t valA21 = srcS[2];
    srcS[2] = valA21 + 1;
    *(flagP + 0x261) = Script_GetArg(dstD, valA21);
    int32_t valA23 = srcS[2];
    srcS[2] = valA23 + 1;
    Sys_ResolveSymbol_23(dstD, valA23, flagP + 0x262, 0x20);
    int32_t valA24 = srcS[2];
    srcS[2] = valA24 + 1;
    int32_t valA25 = Script_GetArg(dstD, valA24);
    int32_t i = 0;
    *(flagP + 0x2ac) = valA25;

    if (valA25 > 0)
    {
        a2 = flagP + 0x284;

        do
        {
            int32_t valA27 = srcS[2];
            srcS[2] = valA27 + 1;
            i += 1;
            *a2 = Script_GetArg(dstD, valA27);
            a2 = &a2[1];
        } while (i < *(flagP + 0x2ac));
    }

    int32_t valA30 = srcS[2];
    srcS[2] = valA30 + 1;
    return Sys_ResolveSymbol_23(dstD, valA30, flagP + 0x2b0, 0x10);
}

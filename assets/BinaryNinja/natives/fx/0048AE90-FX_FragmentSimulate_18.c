// Original IGI.EXE function: FX_FragmentSimulate_18 (VA 0x0048AE90; static CFG gate PASS, CFG score 1.000).
#include "FX_FragmentSimulate_18.h"
int32_t FX_FragmentSimulate_18(int32_t* a1, void* a2)

{
    int32_t* srcS = a1;
    void* flagP = srcS[0xf79];
    int32_t ctxB = *(a2 + 0x18);
    *(a2 + 0x18) = 0;
    Combat_SetAimMode(srcS[0xeaa], srcS, 0xffffffff);

    if (srcS[0xf7a] == 0xffffffff)
    {
        int32_t v_18_1 = 0x3fd33333;
        void* valA2 = Script_ExecuteLevelScript_23(srcS[0xedb], srcS[0xf8b]);

        if (!Script_FormatString_23(DynObj_UpdateDynTree_4(srcS[5]), valA2, 4.17232506e-08f, 0))
            return 4;
    }

    if (!*(flagP + 0x29))
    {
        *(a2 + 0x18) = ctxB + 1;

        if ((ctxB + 1) % 0x1e > 0xf)
        {
            a1 = nullptr;
            FX_FindfreepositionStac(&a1, srcS, 0, 5);
            int32_t* valA20 = a1;

            if (valA20 && *valA20 != srcS[0xf8b])
            {
                srcS[0xf7c] = 0;
                srcS[0xf7a] = *valA20;
                *(a2 + 0x18) = 0;
                return 5;
            }
        }

        int32_t objC6 = 0;
        objC6 = *(a2 + 0x18) > srcS[0xf54];
        return objC6 + 6;
    }

    if (!FX_ExplosionSpawn_19(srcS))
    {
        Combat_SetAimMode(srcS[0xeaa], srcS, 1);
        return 0;
    }

    long double fpu7 = *(a2 + 8);
    long double f2 = *(srcS + 0x3dc0);
    fpu7 - f2;

    if (!(*(&((fpu7 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f2) ? 1 : 0) << 0xa
        | (fpu7 == f2 ? 1 : 0) << 0xe) + 1) & 0x41))
    {
        a1 = nullptr;
        FX_FindfreepositionStac(&a1, srcS, 1, 5);
        int32_t* valA10 = a1;

        if (valA10)
        {
            int32_t valA11 = *valA10;

            if (valA11 != srcS[0xf8b])
            {
                srcS[0xf7a] = valA11;
                return 5;
            }
        }
    }

    if (AI_UpdateOrders_2(srcS[0xeaa], 0) >= 3)
    {
        Combat_SetAimMode(srcS[0xeaa], srcS, 2);
        return 6;
    }

    Combat_SetAimMode(srcS[0xeaa], srcS, 0);
    return 2;
}

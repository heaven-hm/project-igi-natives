#include "FX_FragmentSimulate_19.h"
int32_t FX_FragmentSimulate_19(int32_t* a1, void* a2)

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

    int16_t valA6;
    valA6 = *(flagP + 0x29);

    if (!valA6)
    {
        *(a2 + 0x18) = ctxB + 1;

        if ((ctxB + 1) % 0x1e > 0xf)
        {
            a1 = nullptr;
            FX_FindfreepositionStac(&a1, srcS, 0, 5);
            int32_t* valA30 = a1;

            if (valA30 && *valA30 != srcS[0xf8b])
            {
                srcS[0xf7c] = 0;
                srcS[0xf7a] = *valA30;
                *(a2 + 0x18) = 0;
                return 5;
            }
        }

        int32_t objC6 = 0;
        objC6 = *(a2 + 0x18) > srcS[0xf54];
        return objC6 + 6;
    }

    long double fpu7 = *(a2 + 8);
    long double f2 = *(srcS + 0x3db0);
    fpu7 - f2;

    if (*(&((fpu7 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f2) ? 1 : 0) << 0xa
            | (fpu7 == f2 ? 1 : 0) << 0xe) + 1) & 1)
        return 3;

    if (!FX_ExplosionSpawn_19(srcS))
    {
        long double x87_r7_1 = srcS[0xf64];
        long double f4 = *(a2 + 8);
        x87_r7_1 - f4;

        if (*(&((x87_r7_1 < f4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f4) ? 1 : 0) << 0xa
            | (x87_r7_1 == f4 ? 1 : 0) << 0xe) + 1) & 1)
        {
            long double x87_r7_2 = srcS[0xf65];
            long double f6_1 = *(a2 + 8);
            x87_r7_2 - f6_1;
            int16_t valA9 = (x87_r7_2 < f6_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_2, f6_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == f6_1 ? 1 : 0) << 0xe;

            if (!(*(&valA9 + 1) & 0x41))
            {
                valA9 = *(srcS + 0x3dfd);

                if (valA9)
                {
                    long double fp0_1 = Sys_AllocateMemory_14(Level_SetMission_5());
                    long double f8_1 = srcS[0xf62];
                    fp0_1 - f8_1;

                    if (*(&((fp0_1 < f8_1 ? 1 : 0) << 8
                            | (FCMP_UO(fp0_1, f8_1) ? 1 : 0) << 0xa
                            | (fp0_1 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        return 1;
                }
            }
        }

        Combat_SetAimMode(srcS[0xeaa], srcS, 1);
        return 0;
    }

    long double x87_r7_4 = *(a2 + 8);
    long double f3 = *(srcS + 0x3dc0);
    x87_r7_4 - f3;

    if (!(*(&((x87_r7_4 < f3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f3) ? 1 : 0) << 0xa
        | (x87_r7_4 == f3 ? 1 : 0) << 0xe) + 1) & 0x41))
    {
        a1 = nullptr;
        FX_FindfreepositionStac(&a1, srcS, 1, 5);
        int32_t* valA16 = a1;

        if (valA16)
        {
            int32_t valA17 = *valA16;

            if (valA17 != srcS[0xf8b])
            {
                srcS[0xf7a] = valA17;
                return 5;
            }
        }
    }

    long double x87_r7_5 = srcS[0xf64];
    long double f5 = *(a2 + 8);
    x87_r7_5 - f5;

    if (*(&((x87_r7_5 < f5 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, f5) ? 1 : 0) << 0xa
        | (x87_r7_5 == f5 ? 1 : 0) << 0xe) + 1) & 1)
    {
        long double x87_r7_6 = srcS[0xf65];
        long double f7_1 = *(a2 + 8);
        x87_r7_6 - f7_1;
        int16_t valA15 = (x87_r7_6 < f7_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_6, f7_1) ? 1 : 0) << 0xa | (x87_r7_6 == f7_1 ? 1 : 0) << 0xe;

        if (!(*(&valA15 + 1) & 0x41))
        {
            valA15 = *(srcS + 0x3dfd);

            if (valA15)
            {
                long double fp0_2 = Sys_AllocateMemory_14(Level_SetMission_5());
                long double f9_1 = srcS[0xf63];
                fp0_2 - f9_1;

                if (*(&((fp0_2 < f9_1 ? 1 : 0) << 8 | (FCMP_UO(fp0_2, f9_1) ? 1 : 0) << 0xa
                        | (fp0_2 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    return 1;
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

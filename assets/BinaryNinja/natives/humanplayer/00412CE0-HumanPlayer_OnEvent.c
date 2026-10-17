// Original IGI.EXE function: HumanPlayer_OnEvent (VA 0x00412CE0; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_OnEvent.h"
int32_t HumanPlayer_OnEvent(float a1, float* a2)

{
    float dstD = a1;
    char result = *(dstD + 0xcf6);

    if (result)
    {
        int32_t* valA = Config_GetActivePlayerProfileRecord();

        if (!valA)
            return Warning_Show("No active playerprofile found");

        double v_18_1 = *(dstD + 0x7c) * 4096.0;
        double v_10_1 = *(dstD + 0x88) * 4096.0;
        double v_8_1 = *(dstD + 0x94) * 4096.0;
        double* valA2 = DynObj_UpdateDynTree_4(dstD);
        double* valA4 = DynObj_UpdateDynTree_4(a2[1]);
        double v_30 = *valA2 - *valA4;
        void* valA5 = DynObj_UpdateDynTree_4(dstD);
        void* valA6 = DynObj_UpdateDynTree_4(a2[1]);
        double v_28_1 = *(valA5 + 8) - *(valA6 + 8);
        void* valA7 = DynObj_UpdateDynTree_4(dstD);
        void* valA8 = DynObj_UpdateDynTree_4(a2[1]);
        double v_20_1 = *(valA7 + 0x10) - *(valA8 + 0x10);
        Sys_FreeMemory_11(&v_30);
        int32_t ctxB4 = 0xe;
        long double x87_r7_16 = v_20_1 * v_8_1 + v_28_1 * v_10_1 + v_30 * v_18_1;
        long double f0_1 = 0.0;
        x87_r7_16 - f0_1;

        if (*(&((x87_r7_16 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_16, f0_1) ? 1 : 0) << 0xa
                | (x87_r7_16 == f0_1 ? 1 : 0) << 0xe) + 1) & 1)
            ctxB4 = 0xd;

        *(dstD + 0x2e8) = ctxB4;
        FX_FragmentSimulate_14(dstD + 0x254, ctxB4);
        int32_t objC3 = *valA;
        a1 = (dstD + 0x254)[ctxB4 * 2 + 4] * *a2;

        if (!objC3)
            a1 = a1 * 0.75f;
        else if (objC3 != 1)
        {
            if (objC3 == 2)
                a1 = a1 * 1.25f;
            else
            {
                int32_t v_48_3 = objC3;
                Warning_Show("Difficulty level not defined %d");
            }
        }

        if (!Human_HitDamage())
        {
            (dstD + 0x254)[ctxB4 * 2 + 3] = a1 + (dstD + 0x254)[ctxB4 * 2 + 3];
            *(dstD + 0x254) = a1 + *(dstD + 0x254);
        }

        if (!*(dstD + 0xcf5))
        {
            AI_MoveToNode_21(dstD, "player_hit_", 4);
            void* __saved_ebp_1;
            char* __saved_ebx_1;

            if (!(Sys_CheckHeap_13(Level_SetMission_5()) & 1))
            {
                __saved_ebx_1 = "punched_02";
                __saved_ebp_1 = *(dstD + 0x4ec);
            }
            else
            {
                __saved_ebx_1 = "punched_01";
                __saved_ebp_1 = *(dstD + 0x4ec);
            }

            SoundSys_SetMasterVolume_7(__saved_ebp_1, __saved_ebx_1);
        }

        int32_t __saved_ebp_4;
        long double fp0_1;
        fp0_1 = Sys_AllocateMemory_14(Level_SetMission_5());
        long double x87_r7_26 = fp0_1;
        long double f4_1 = 0.25f;
        x87_r7_26 - f4_1;

        if (!(*(&((x87_r7_26 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_26, f4_1) ? 1 : 0) << 0xa
            | (x87_r7_26 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            long double f5_1 = 1f;
            x87_r7_26 - f5_1;

            if (!(*(&((x87_r7_26 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_26, f5_1) ? 1 : 0) << 0xa
                    | (x87_r7_26 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                x87_r7_26 = 1f;
        }
        else
            x87_r7_26 = 0.25f;

        int32_t __saved_ebp_2 = __saved_ebp_4;
        int32_t __saved_ebp_5 = __saved_ebp_4;
        AI_CheckSector_23(*(dstD + 0x4ec), x87_r7_26 * 204.800003f, x87_r7_26 * 0.0130899698f, 0xf);
        *(dstD + 0xdcc) = (Sys_AllocateMemory_14(Level_SetMission_5()) + 1.0) * 0.40000000000000002;
        *(dstD + 0xdd0) = (Sys_AllocateMemory_14(Level_SetMission_5()) + 1.0) * 0.40000000000000002;
        *(dstD + 0xdd4) = (Sys_AllocateMemory_14(Level_SetMission_5()) + 1.0) * 0.40000000000000002;
        long double fp0_5;
        fp0_5 = Sys_AllocateMemory_14(Level_SetMission_5());
        *(dstD + 0xdd8) = (fp0_5 + 1.0) * 0.40000000000000002;
    }

    return result;
}

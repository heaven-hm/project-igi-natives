// Original IGI.EXE function: HumanPlayer_OnEvent (VA 0x00412CE0; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_OnEvent.h"
int32_t HumanPlayer_OnEvent(float context, float* param_2)

{
    float dest_val = context;
    char result = *(dest_val + 0xcf6);

    if (result)
    {
        int32_t* data_val = Config_GetActivePlayerProfileRecord();

        if (!data_val)
            return Warning_Show("No active playerprofile found");

        double item_18_1 = *(dest_val + 0x7c) * 4096.0;
        double item_10_1 = *(dest_val + 0x88) * 4096.0;
        double item_8_1 = *(dest_val + 0x94) * 4096.0;
        double* data_2 = DynObj_UpdateDynTree_4(dest_val);
        double* data_4 = DynObj_UpdateDynTree_4(param_2[1]);
        double item_30 = *data_2 - *data_4;
        void* data_5 = DynObj_UpdateDynTree_4(dest_val);
        void* data_6 = DynObj_UpdateDynTree_4(param_2[1]);
        double item_28_1 = *(data_5 + 8) - *(data_6 + 8);
        void* data_7 = DynObj_UpdateDynTree_4(dest_val);
        void* data_8 = DynObj_UpdateDynTree_4(param_2[1]);
        double item_20_1 = *(data_7 + 0x10) - *(data_8 + 0x10);
        Sys_FreeMemory_11(&item_30);
        int32_t context_4 = 0xe;
        long double fpu_val_7_16 = item_20_1 * item_8_1 + item_28_1 * item_10_1 + item_30 * item_18_1;
        long double f0_1 = 0.0;
        fpu_val_7_16 - f0_1;

        if (*(&((fpu_val_7_16 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_16, f0_1) ? 1 : 0) << 0xa
                | (fpu_val_7_16 == f0_1 ? 1 : 0) << 0xe) + 1) & 1)
            context_4 = 0xd;

        *(dest_val + 0x2e8) = context_4;
        FX_FragmentSimulate_14(dest_val + 0x254, context_4);
        int32_t entity_3 = *data_val;
        context = (dest_val + 0x254)[context_4 * 2 + 4] * *param_2;

        if (!entity_3)
            context = context * 0.75f;
        else if (entity_3 != 1)
        {
            if (entity_3 == 2)
                context = context * 1.25f;
            else
            {
                int32_t item_48_3 = entity_3;
                Warning_Show("Difficulty level not defined %d");
            }
        }

        if (!Human_HitDamage())
        {
            (dest_val + 0x254)[context_4 * 2 + 3] = context + (dest_val + 0x254)[context_4 * 2 + 3];
            *(dest_val + 0x254) = context + *(dest_val + 0x254);
        }

        if (!*(dest_val + 0xcf5))
        {
            AI_MoveToNode_21(dest_val, "player_hit_", 4);
            void* saved_ebp_1;
            char* saved_ebx_1;

            if (!(Sys_CheckHeap_13(Level_SetMission_5()) & 1))
            {
                saved_ebx_1 = "punched_02";
                saved_ebp_1 = *(dest_val + 0x4ec);
            }
            else
            {
                saved_ebx_1 = "punched_01";
                saved_ebp_1 = *(dest_val + 0x4ec);
            }

            SoundSys_SetMasterVolume_7(saved_ebp_1, saved_ebx_1);
        }

        int32_t saved_ebp_4;
        long double fp0_1;
        fp0_1 = Sys_AllocateMemory_14(Level_SetMission_5());
        long double fpu_val_7_26 = fp0_1;
        long double f4_1 = 0.25f;
        fpu_val_7_26 - f4_1;

        if (!(*(&((fpu_val_7_26 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_26, f4_1) ? 1 : 0) << 0xa
            | (fpu_val_7_26 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            long double f5_1 = 1.0f;
            fpu_val_7_26 - f5_1;

            if (!(*(&((fpu_val_7_26 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_26, f5_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_26 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                fpu_val_7_26 = 1.0f;
        }
        else
            fpu_val_7_26 = 0.25f;

        int32_t saved_ebp_2 = saved_ebp_4;
        int32_t saved_ebp_5 = saved_ebp_4;
        AI_CheckSector_23(*(dest_val + 0x4ec), fpu_val_7_26 * 204.800003f, fpu_val_7_26 * 0.0130899698f, 0xf);
        *(dest_val + 0xdcc) = (Sys_AllocateMemory_14(Level_SetMission_5()) + 1.0) * 0.40000000000000002;
        *(dest_val + 0xdd0) = (Sys_AllocateMemory_14(Level_SetMission_5()) + 1.0) * 0.40000000000000002;
        *(dest_val + 0xdd4) = (Sys_AllocateMemory_14(Level_SetMission_5()) + 1.0) * 0.40000000000000002;
        long double fp0_5;
        fp0_5 = Sys_AllocateMemory_14(Level_SetMission_5());
        *(dest_val + 0xdd8) = (fp0_5 + 1.0) * 0.40000000000000002;
    }

    return result;
}

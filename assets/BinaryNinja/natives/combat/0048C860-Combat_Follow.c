// Original IGI.EXE function: Combat_Follow (VA 0x0048C860; static CFG gate PASS, CFG score 1.000).
#include "Combat_Follow.h"
int32_t* Combat_Follow(int32_t* context, int32_t* param_2)

{
    int32_t* flagP = param_2;
    char* item_40 = "Combat - Follow";
    int32_t item_44 = 0xffffffff;
    int32_t* item_48 = context;
    void* dest_1 = flagP[0xa] + 8;
    context[0xf37] = 0x3f800000;
    FX_SmokeEmit_17(context, dest_1);

    if (!context[0xf79])
        return AI_CombatTarget_2(context, flagP);

    if (context[0xf7a] == 0xffffffff)
        return FX_FireBallUpdate_18(context, flagP, flagP[7], 0);

    void* data_4 = AI_SelectTarget_3(context);
    int32_t item_44_3 = context[0xf7a];
    char* item_48_2 = "Tracking target at node #%d";
    int32_t item_4c_2 = 0xffffffff;
    int32_t* item_50_1 = context;
    data_4 = context[0xf7c];

    if (data_4)
    {
        void* temp_1 = context[0xf79];
        param_2 = nullptr;
        data_4 = *(temp_1 + 0x29);
        FX_FindfreepositionStac(&param_2, context, data_4, 5);
        int32_t* data_5 = param_2;

        if (data_5)
        {
            int32_t data_6 = *data_5;

            if (data_6 != context[0xf8b])
            {
                context[0xf7a] = data_6;
                *(dest_1 + 0x18) = 0;
            }
        }

        context[0xf7c] = 0;
    }

    if (AI_MoveToNode_3(context, context[0xf7a], &context[0xfac], 0))
    {
        context[0xf7a] = 0xffffffff;
        FX_FireBallUpdate_18(context, flagP, flagP[7], 0);
        return Combat_SetAimMode(context[0xeaa], context, 0xffffffff);
    }

    if (*(context[0xf79] + 0x29))
    {
        void* data_11 = context[0xeaa];
        double item_30 = *(data_11 + 0x110) - *(context + 0x20);
        double item_28_1 = *(data_11 + 0x118) - *(context + 0x28);
        double item_20_1 = *(data_11 + 0x120) - *(context + 0x30);
        double item_18_1 = context[0x1f];
        double item_10_1 = context[0x22];
        double item_8_1 = context[0x25];
        Sys_FreeMemory_11(&item_30);
        long double fpu_val_7_13 = item_8_1 * item_20_1 + item_10_1 * item_28_1 + item_18_1 * item_30;
        long double f0_1 = 0.95999999999999996;
        fpu_val_7_13 - f0_1;

        if (!(*(&((fpu_val_7_13 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_13, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_7_13 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            if (AI_UpdateOrders_2(context[0xeaa], 0) >= 4 && AI_TakeCover_2(context[0xeaa], context))
                return Combat_SetAimMode(context[0xeaa], context, 2);

            void* temp_5 = context[0xeaa];
            context[0xf23] = 0x3f800000;
            return Combat_SetAimMode(temp_5, context, 0);
        }
    }

    return Combat_SetAimMode(context[0xeaa], context, 0xffffffff);
}

// Original IGI.EXE function: CombatPlayAnimation (VA 0x0048DEC0; static CFG gate PASS, CFG score 1.000).
#include "CombatPlayAnimation.h"
int32_t CombatPlayAnimation(void* context, int32_t* param_2)

{
    int32_t item_c = *(param_2[0xa] + 8);
    char* item_10 = "Playing animation - %d";
    int32_t item_14 = 0xffffffff;
    void* item_18 = context;
    char data_1 = Locomotion_GetState(context, 3);

    if (data_1)
    {
        char* item_c_1 = "In progress";
        int32_t item_10_1 = 0xffffffff;
        void* item_14_1 = context;
        return data_1;
    }

    if (*(param_2[0xa] + 0xc))
        return AI_CombatTarget_2(context, param_2);

    char data_3 = Locomotion_GetState(context, 0);

    if (!data_3)
    {
        char* item_c_2 = "Waiting for standstate";
        int32_t item_10_3 = 0xffffffff;
        void* item_14_2 = context;
        return data_3;
    }

    char* item_c_3 = "Requesting action";
    int32_t item_10_4 = 0xffffffff;
    void* item_14_3 = context;
    void* data_5 = AI_WriteChannel(context, 3, *(param_2[0xa] + 8));
    *(param_2[0xa] + 0xc) = 1;
    return data_5;
}

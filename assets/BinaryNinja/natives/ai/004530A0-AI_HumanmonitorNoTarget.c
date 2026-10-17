// Original IGI.EXE function: AI_HumanmonitorNoTarget (VA 0x004530A0; static CFG gate PASS, CFG score 1.000).
#include "AI_HumanmonitorNoTarget.h"
int32_t* AI_HumanmonitorNoTarget(int32_t* context)

{
    int32_t* dest_val = context;
    int32_t data_val = AI_CombatTarget_3(dest_val);

    if (data_val)
    {
        int32_t* arg_8;
        int32_t* context_1 = arg_8;
        int32_t* source_1 = context_1[3];
        int32_t* data_2 = *source_1;
        double item_18[0x3];

        if (!data_2)
        {
        label_4530f6:
            int32_t* i_1 = g_57e1b8;
            int32_t* i = *i_1;

            if (i)
            {
                int32_t* data_5;

                do
                {
                    arg_8 = nullptr;
                    Camera_ApplyHandiCam_33(i_1);
                    Camera_SetFieldOfView_33(&context_1[3], i_1);
                    i_1[4] = data_val;
                    uint32_t data_4 = Frames_GetUpdateCounter();
                    int32_t* entity_1 = context;
                    i_1[3] = data_4;
                    AI_UpdatePatrol_3(&item_18, entity_1);
                    Physics_ApplyImpulse_8(&arg_8, context_1[2], &item_18);
                    data_5 = arg_8;

                    if (data_5)
                    {
                        i_1[2] = *data_5;
                        return data_5;
                    }

                    i_1[2] = 0xffffffff;
                    i_1 = i;
                    i = *i;
                } while (i);

                return data_5;
            }
        }
        else
        {
            while (true)
            {
                if (source_1[4] == data_val)
                {
                    uint32_t data_6 = Frames_GetUpdateCounter();

                    if (source_1[3] == data_6)
                    {
                        int32_t source_2 = source_1[2];

                        if (source_2 != 0xffffffff)
                            return Script_ExecuteLevelScript_23(context_1[2], source_2);

                        break;
                    }

                    context = nullptr;
                    source_1[3] = Frames_GetUpdateCounter();
                    AI_UpdatePatrol_3(&item_18, dest_val);
                    Physics_ApplyImpulse_8(&context, context_1[2], &item_18);
                    int32_t* data_11 = context;

                    if (!data_11)
                    {
                        source_1[2] = 0xffffffff;
                        return 0;
                    }

                    source_1[2] = *data_11;
                    return data_11;
                }

                source_1 = data_2;
                data_2 = *data_2;

                if (!data_2)
                    goto label_4530f6;
            }
        }
    }
    else
        Warning_Show("HumanMonitor - no target");

    return 0;
}

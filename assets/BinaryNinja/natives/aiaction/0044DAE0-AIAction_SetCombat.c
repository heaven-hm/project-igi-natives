// Original IGI.EXE function: AIAction_SetCombat (VA 0x0044DAE0; static CFG gate PASS, CFG score 0.917).
#include "AIAction_SetCombat.h"
int32_t AIAction_SetCombat(int32_t context, int32_t param_2 )

// Sig: void AIAction_SetCombat(int enemyId)
// Note: Force-sets the AI's COMBAT ENEMY/target. Param: enemyId = enemy
// entity/id to engage. Use to make an AI attack a specific target regardless of
// detection.
{
    int32_t* data_1 = AI_CheckVisibility_2(g_5bda58);
    void* data_2 = Env_CheckAmbientArea_12();
    int32_t item_30 = 0;
    int32_t data_3 = Script_GetArg(param_2, item_30);

    if (data_2)
    {
        int32_t* data_4 = *(data_2 + 0x2c);

        if (data_4 && *data_4)
        {
            memcpy(&data_1[2], data_2 + 0x10, 0x18);
            data_1[9] = 0;
            data_1[8] = 0;
            int32_t* data_5 = *(data_2 + 0x28);

            if (data_5)
            {
                void* data_6 = *data_5;

                if (data_6)
                    data_1[8] = QTask_LinkEventHandler_2(data_6);
            }

            int32_t* context_1 = *(data_2 + 0x2c);

            if (context_1)
            {
                void* context_2 = *context_1;

                if (context_2)
                    data_1[9] = QTask_LinkEventHandler_2(context_2);
            }

            item_30 = data_1;
            AI_SelectTarget(sub_48e540, item_30, data_3);
        }
    }

    int32_t item_18 = 1;
    int32_t item_10 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}

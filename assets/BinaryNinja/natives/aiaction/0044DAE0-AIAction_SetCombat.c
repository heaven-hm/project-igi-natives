// Original IGI.EXE function: AIAction_SetCombat (VA 0x0044DAE0; static CFG gate PASS, CFG score 0.917).
#include "AIAction_SetCombat.h"
int32_t AIAction_SetCombat(int32_t a1, int32_t a2 @ 0xc)

// Sig: void AIAction_SetCombat(int enemyId)
// Note: Force-sets the AI's COMBAT ENEMY/target. Param: enemyId = enemy
// entity/id to engage. Use to make an AI attack a specific target regardless of
// detection.
{
    int32_t* valA1 = AI_CheckVisibility_2(g_5bda58);
    void* valA2 = Env_CheckAmbientArea_12();
    int32_t v_30 = 0;
    int32_t valA3 = Script_GetArg(a2, v_30);

    if (valA2)
    {
        int32_t* valA4 = *(valA2 + 0x2c);

        if (valA4 && *valA4)
        {
            memcpy(&valA1[2], valA2 + 0x10, 0x18);
            valA1[9] = 0;
            valA1[8] = 0;
            int32_t* valA5 = *(valA2 + 0x28);

            if (valA5)
            {
                void* valA6 = *valA5;

                if (valA6)
                    valA1[8] = QTask_LinkEventHandler_2(valA6);
            }

            int32_t* ctxB1 = *(valA2 + 0x2c);

            if (ctxB1)
            {
                void* ctxB2 = *ctxB1;

                if (ctxB2)
                    valA1[9] = QTask_LinkEventHandler_2(ctxB2);
            }

            v_30 = valA1;
            AI_SelectTarget(sub_48e540, v_30, valA3);
        }
    }

    int32_t v_18 = 1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}

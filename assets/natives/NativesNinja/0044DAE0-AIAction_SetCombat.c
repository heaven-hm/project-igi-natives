#include "0044DAE0-AIAction_SetCombat.h"
/* 0x0044dae0 AIAction_SetCombat full linked: callers=0 callees=8 */
int32_t AIAction_SetCombat(int32_t a1, int32_t a2 @ 0xc)

// Sig: void AIAction_SetCombat(int enemyId)
// Note: Force-sets the AI's COMBAT ENEMY/target. Param: enemyId = enemy
// entity/id to engage. Use to make an AI attack a specific target regardless of
// detection.
{
    int32_t* eax_1 = sub_451030(g_5bda58);
    void* eax_2 = sub_44c8c0();
    int32_t* var_30 = nullptr;
    int32_t eax_3 = sub_4b8a20(a2, var_30);

    if (eax_2)
    {
        int32_t* eax_4 = *(eax_2 + 0x2c);

        if (eax_4 && *eax_4)
        {
            memcpy(&eax_1[2], eax_2 + 0x10, 0x18);
            eax_1[9] = 0;
            eax_1[8] = 0;
            int32_t* eax_5 = *(eax_2 + 0x28);

            if (eax_5)
            {
                void* eax_6 = *eax_5;

                if (eax_6)
                    eax_1[8] = QTask_LinkEventHandler_2(eax_6);
            }

            int32_t* ebx_1 = *(eax_2 + 0x2c);

            if (ebx_1)
            {
                void* ebx_2 = *ebx_1;

                if (ebx_2)
                    eax_1[9] = QTask_LinkEventHandler_2(ebx_2);
            }

            var_30 = eax_1;
            sub_450e10(sub_48e540, var_30, eax_3);
        }
    }

    int32_t var_18 = 1;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}

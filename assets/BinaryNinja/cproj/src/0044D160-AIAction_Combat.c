#include "gi_platform.h"
#include "0044D160-AIAction_Combat.h"
int32_t AIAction_Combat(int32_t a1, float a2 )

// Sig: void AIAction_Combat(int param)
// Note: Orders the AI into COMBAT behaviour vs its current enemy. Param: param
// = combat argument from the calling script (retail guard scripts pass their
// combat target/context value). Use in AIEVENT_COMBAT branches.
{
    int32_t* valA = AI_CheckVisibility_2(g_5bda58);
    int32_t valA1 = Script_GetArg(a2, 0);
    int32_t tmpD = g_5bda60;
    valA[0xa] = 1;
    valA[2] = tmpD;
    (*(int32_t*)(uintptr_t)(valA + 0x29)) = 0;
    valA[9] = 0;
    int32_t objC2 = *(g_5bda58 + 0x3d38);

    if (objC2 <= 0x1c)
    {
        int32_t tmpD1 = 0;
        tmpD1 = lookup_table_44d23c[objC2];

        switch (tmpD1)
        {
            case 0:
            {
                AI_SelectTarget(sub_48cb40, valA, valA1);
                break;
            }
            case 1:
            {
                AI_SelectTarget(sub_48d2c0, valA, valA1);
                break;
            }
            case 2:
            {
                AI_SelectTarget(Guard_CombatStart, valA, valA1);
                break;
            }
            case 3:
            {
                AI_SelectTarget(FX_ExplosionSpawn_18, valA, valA1);
                break;
            }
            case 4:
            {
                AI_SelectTarget(Patrol_CombatStart, valA, valA1);
                break;
            }
        }
    }

    int32_t v_18 = 1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}

#include "gi_platform.h"
#include "0048E920-Patrol_Tick.h"
int32_t* Patrol_Tick(int32_t* a1, int32_t* a2)

{
    int32_t srcS = a1;
    int32_t valA = (*(int32_t*)(uintptr_t)(srcS + 0x1514));
    void* valA1 = PatrolPath_Action(srcS + valA * 0x1c + 0x14fc);

    if ((*(int32_t*)(uintptr_t)(srcS + valA * 0x1c + 0x1510)))
        AI_WriteChannel(srcS, 1, 1.0f);

    int32_t* result;
    int32_t objC2;

    if (!(*(int32_t*)(uintptr_t)(srcS + valA * 0x1c + 0x1511)))
        result = AI_SelectTarget_3(srcS);
    else
        result = AI_AlertAllies_3(srcS);

    if (valA1)
    {
        int32_t valA3 = PatrolPathCommand_Process(valA1);
        result = GameScreen_Process(valA1);

        switch (valA3)
        {
            case 0:
            {
                int32_t* result_3 = result;
                char* v_30_4 = "Patrolling, Standaction : %d";
                int32_t v_34_3 = 0xffffffff;
                int32_t v_38_2 = srcS;

                if ((*(int32_t*)(uintptr_t)(srcS + valA * 0x1c + 0x1514)) == 0xffffffff)
                {
                    int32_t v_2c_5 = objC2;
                    (*(int32_t*)(uintptr_t)(srcS + valA * 0x1c + 0x1514)) = 0;
                    return AI_WriteChannel(srcS, 3, result);
                }

                int32_t v_2c_7;

                if (!(*(int32_t*)(uintptr_t)(srcS + valA * 0x1c + 0x1510)))
                    v_2c_7 = 0;
                else
                    v_2c_7 = 1;

                result = Locomotion_GetState(srcS, v_2c_7);

                if (result)
                {
                    result = PatrolCursor_Advance(srcS + valA * 0x1c + 0x14fc);
                    (*(int32_t*)(uintptr_t)(srcS + valA * 0x1c + 0x1514)) = 0xffffffff;
                }
                break;
            }
            case 1:
            {
                if ((*(int32_t*)(uintptr_t)(srcS + valA * 0x1c + 0x1514)) == 0xffffffff)
                    (*(int32_t*)(uintptr_t)(srcS + valA * 0x1c + 0x1514)) = Frames_GetUpdateCounter() + result;

                uint32_t valA7 = Frames_GetUpdateCounter();
                int32_t v_2c_4 = (*(int32_t*)(uintptr_t)(srcS + valA * 0x1c + 0x1514)) - valA7;
                char* v_30_3 = "Patrolling, Delay : %d";
                int32_t v_34_2 = 0xffffffff;
                int32_t v_38_1 = srcS;
                result = Frames_GetUpdateCounter();

                if (result > (*(int32_t*)(uintptr_t)(srcS + valA * 0x1c + 0x1514)))
                {
                    result = PatrolCursor_Advance(srcS + valA * 0x1c + 0x14fc);
                    (*(int32_t*)(uintptr_t)(srcS + valA * 0x1c + 0x1514)) = 0xffffffff;
                }
                break;
            }
            case 2:
            case 3:
            {
                int32_t v_3c_2;
                int32_t v_38_4;

                if (valA3 == 2)
                {
                    (*(int32_t*)(uintptr_t)(srcS + valA * 0x1c + 0x1510)) = 0;
                    (*(int32_t*)(uintptr_t)(srcS + valA * 0x1c + 0x1511)) = 1;
                    int32_t v_2c_9 = (*(int32_t*)(uintptr_t)(srcS + 0x3e2c));
                    int32_t* result_2 = result;
                    char* v_34_7 = "Patrolling, Walkto:%d, Cur:%d";
                    v_38_4 = 0xffffffff;
                    v_3c_2 = srcS;
                }
                else if (valA3 == 3)
                {
                    (*(int32_t*)(uintptr_t)(srcS + valA * 0x1c + 0x1510)) = 0;
                    (*(int32_t*)(uintptr_t)(srcS + valA * 0x1c + 0x1511)) = 0;
                    int32_t v_2c_8 = (*(int32_t*)(uintptr_t)(srcS + 0x3e2c));
                    int32_t* result_1 = result;
                    char* v_34_6 = "Patrolling, Runto:%d, Cur:%d";
                    v_38_4 = 0xffffffff;
                    v_3c_2 = srcS;
                }
                result = AI_MoveToNode_3(srcS, result, nullptr, 1);

                if (result)
                {
                    result = PatrolCursor_Advance(srcS + valA * 0x1c + 0x14fc);
                    (*(int32_t*)(uintptr_t)(srcS + valA * 0x1c + 0x1514)) = 0xffffffff;
                }
                break;
            }
            case 4:
            {
                (*(int32_t*)(uintptr_t)(srcS + valA * 0x1c + 0x1510)) = 1;
                result = PatrolCursor_Advance(srcS + valA * 0x1c + 0x14fc);
                (*(int32_t*)(uintptr_t)(srcS + valA * 0x1c + 0x1514)) = 0xffffffff;
                break;
            }
            case 5:
            {
                int32_t* result_4 = result;
                char* v_30_6 = "Patrolling, LookAtNode : %d";
                int32_t v_34_5 = 0xffffffff;
                int32_t v_38_3 = srcS;
                double v_18[0x3];
                Script_CallNativeHandler_23(&v_18, Script_ExecuteLevelScript_23((*(int32_t*)(uintptr_t)(srcS + 0x3b6c)), result));
                result = AI_TakeCover_3(srcS, &v_18, 0.052359879.0f, 0);

                if (result)
                {
                    result = PatrolCursor_Advance(srcS + valA * 0x1c + 0x14fc);
                    (*(int32_t*)(uintptr_t)(srcS + valA * 0x1c + 0x1514)) = 0xffffffff;
                }
                break;
            }
            case 7:
            {
                return AI_CombatTarget_2(srcS, a2);
                break;
            }
        }
    }

    return result;
}

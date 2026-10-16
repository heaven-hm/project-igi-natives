#include "gi_platform.h"
#include "0044D420-AIAction_Activate.h"
int32_t AIAction_Activate(int32_t a1, float a2 )

// Sig: void AIAction_Activate(int target, int param2, int flags)
// Note: Generic ACTIVATE action: sends the AI to activate/use an object
// (switch, door, alarm...). Params: target = object/task reference, param2 =
// secondary value (retail passes 0), flags = AIACTIONFLAG (NONE=0/PUSHABLE=1).
// Use in AI handlers for alarm/objective responses.
{
    int32_t* valA1 = AI_CheckVisibility_2(g_5bda58);
    int32_t valA2 = Script_GetArg(a2, 0);
    int32_t v_30 = 1;
    valA1[2] = valA2;
    valA1[5] = Script_GetArg(a2, v_30);
    AI_SelectTarget(FX_LevelQtaskIdDNotDefi, valA1, Script_GetArg(a2, 2));
    int32_t v_18 = 3;
    int32_t v_10 = 0;
    int32_t v_c = 0x40080000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}

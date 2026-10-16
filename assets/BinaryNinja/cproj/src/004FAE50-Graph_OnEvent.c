#include "gi_platform.h"
#include "004FAE50-Graph_OnEvent.h"
int32_t Graph_OnEvent(void* a1, int32_t* a2)

{
    int32_t srcS = *a2;
    (*(int32_t*)(uintptr_t)(a1 + 0x68)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x69)) = 0;
    Script_GetArg(a2[1], srcS);
    (*(int32_t*)(uintptr_t)(a1 + 0x58)) = Script_GetArg(a2[1], srcS + 1);
    Script_GetArg(a2[1], srcS + 2);
    (*(int32_t*)(uintptr_t)(a1 + 0x5c)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x60)) = 0;
    int32_t v_430 = Script_EvaluateCondition_4(a1);
    char v_400;
    Game_DataSymbolLoad(&v_400, "MISSION:graphs/graph%d.dat");
    void* v_440 = a1;
    int32_t result = Graph_Open(&v_400);
    *a2 = srcS + 3;
    return result;
}

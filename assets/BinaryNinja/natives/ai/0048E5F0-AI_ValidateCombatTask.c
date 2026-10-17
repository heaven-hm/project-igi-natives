// Original IGI.EXE function: AI_ValidateCombatTask (VA 0x0048E5F0; static CFG gate PASS, CFG score 1.000).
#include "AI_ValidateCombatTask.h"

int32_t* AI_ValidateCombatTask(void* pThis @ 0x8)

{
    void* esi = *(pThis + 0x28);
    int32_t* result_1 = *(esi + 0x24);

    if (result_1)
        result_1 = Qtask_UpdateList(result_1);

    int32_t* esi_2 = *(esi + 0x20);

    if (!esi_2)
        return result_1;

    return Qtask_UpdateList(esi_2);
}

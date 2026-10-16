#include "gi_platform.h"
#include "004F1090-Script_LevelqtaskidDAlready.h"
int32_t* Script_LevelqtaskidDAlready(int32_t a1, void* a2)

{
    int32_t* valA = (*(int32_t*)(uintptr_t)((a1 << 2) + &g_a71890));

    if (valA)
    {
        if (!*valA)
            Qtask_UpdateList(valA);
        else
        {
            int32_t v_8_1 = a1;
            Error_Show("LevelQTaskID %d already defined");

            while (true)
                /* nop */
        }
    }

    int32_t* result = QTask_LinkEventHandler_2(a2);
    (*(int32_t*)(uintptr_t)((a1 << 2) + &g_a71890)) = result;
    return result;
}

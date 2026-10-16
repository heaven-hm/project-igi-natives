#include "004F1090-Script_LevelqtaskidDAlready.h"
/* 0x004f1090 Script_LevelqtaskidDAlready full linked: callers=3 callees=3 */
int32_t* sub_4f1090(int32_t a1, void* a2)

{
    int32_t* eax = *((a1 << 2) + &g_a71890);

    if (eax)
    {
        if (!*eax)
            Qtask_UpdateList(eax);
        else
        {
            int32_t var_8_1 = a1;
            Error_Show("LevelQTaskID %d already defined");

            while (true)
                /* nop */
        }
    }

    int32_t* result = QTask_LinkEventHandler_2(a2);
    *((a1 << 2) + &g_a71890) = result;
    return result;
}

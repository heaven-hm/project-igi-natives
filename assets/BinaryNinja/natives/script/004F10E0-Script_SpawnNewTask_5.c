#include "Script_SpawnNewTask_5.h"
int32_t Script_SpawnNewTask_5(int32_t a1)

{
    int32_t result = Qtask_UpdateList(*((a1 << 2) + &g_a71890));
    *((a1 << 2) + &g_a71890) = 0;
    return result;
}

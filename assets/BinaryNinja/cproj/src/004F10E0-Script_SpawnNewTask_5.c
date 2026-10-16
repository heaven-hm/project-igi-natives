#include "gi_platform.h"
#include "004F10E0-Script_SpawnNewTask_5.h"
int32_t Script_SpawnNewTask_5(int32_t a1)

{
    int32_t result = Qtask_UpdateList((*(int32_t*)(uintptr_t)((a1 << 2) + &g_a71890)));
    (*(int32_t*)(uintptr_t)((a1 << 2) + &g_a71890)) = 0;
    return result;
}

#include "004F10E0-Script_SpawnNewTask_5.h"
/* 0x004f10e0 Script_SpawnNewTask_5 full linked: callers=1 callees=1 */
int32_t sub_4f10e0(int32_t a1)

{
    int32_t result = Qtask_UpdateList(*((a1 << 2) + &g_a71890));
    *((a1 << 2) + &g_a71890) = 0;
    return result;
}

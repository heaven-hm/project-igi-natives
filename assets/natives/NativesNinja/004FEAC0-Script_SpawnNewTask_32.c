#include "004FEAC0-Script_SpawnNewTask_32.h"
/* 0x004feac0 Script_SpawnNewTask_32 full linked: callers=4 callees=0 */
void* sub_4feac0(void* a1, int32_t a2)

{
    *(a1 + 0x120) = a2;
    *(a1 + 0x20) = 0;
    return a1;
}

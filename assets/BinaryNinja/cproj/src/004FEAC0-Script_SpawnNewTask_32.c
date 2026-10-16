#include "gi_platform.h"
#include "004FEAC0-Script_SpawnNewTask_32.h"
void* Script_SpawnNewTask_32(void* a1, int32_t a2)

{
    (*(int32_t*)(uintptr_t)(a1 + 0x120)) = a2;
    (*(int32_t*)(uintptr_t)(a1 + 0x20)) = 0;
    return a1;
}

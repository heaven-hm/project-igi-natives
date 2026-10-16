#include "Script_SpawnNewTask_32.h"
void* Script_SpawnNewTask_32(void* a1, int32_t a2)

{
    *(a1 + 0x120) = a2;
    *(a1 + 0x20) = 0;
    return a1;
}

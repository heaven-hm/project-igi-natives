#include "Script_SpawnNewTask_10.h"
int32_t** Script_SpawnNewTask_10(int32_t** a1, int32_t a2)

{
    a1[3] = a2;
    *a1 = &a1[1];
    a1[2] = a1;
    a1[1] = 0;
    return a1;
}

#include "004F1D60-Script_SpawnNewTask_10.h"
/* 0x004f1d60 Script_SpawnNewTask_10 full linked: callers=1 callees=0 */
int32_t** sub_4f1d60(int32_t** a1, int32_t a2)

{
    a1[3] = a2;
    *a1 = &a1[1];
    a1[2] = a1;
    a1[1] = 0;
    return a1;
}

#include "Script_SpawnNewTask_13.h"
int32_t Script_SpawnNewTask_13(void* a1, char a2)

{
    int32_t tmpD = 0;
    a2 = a2;
    int32_t valA = 0;
    valA = g_a76c01;
    tmpD = *(a1 + 0x1c);
    return (*(((valA * 0x180 + tmpD) << 2) + &g_a96ae0))(a1, &a2);
}

#include "004F2350-Script_SpawnNewTask_13.h"
/* 0x004f2350 Script_SpawnNewTask_13 full linked: callers=14 callees=0 */
int32_t sub_4f2350(void* a1, char a2)

{
    int32_t edx = 0;
    a2 = a2;
    int32_t eax = 0;
    eax = g_a76c01;
    edx = *(a1 + 0x1c);
    return (*(((eax * 0x180 + edx) << 2) + &g_a96ae0))(a1, &a2);
}

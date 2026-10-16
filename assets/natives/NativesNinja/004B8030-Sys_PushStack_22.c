#include "004B8030-Sys_PushStack_22.h"
/* 0x004b8030 Sys_PushStack_22 full linked: callers=1 callees=1 */
void* sub_4b8030(int32_t* a1, int32_t a2, int32_t a3)

{
    return Q_TaskHashTableSet(a1, sub_4b8060, a2, a3, 0, 3, 1);
}

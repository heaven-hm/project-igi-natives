#include "gi_platform.h"
#include "004B7CF0-Sys_PushStack_21.h"
int32_t Sys_PushStack_21(int32_t* a1, int32_t a2, int32_t a3)

{
    int32_t valA = Sys_ReadFileBlock_3();
    int32_t* v_c = a1;
    *a1 = valA;
    return ((int(*)())(uintptr_t)(*((g_a84a48 << 2) + &g_a94e84)))(&v_c, v_c, a3, a2);
}

#include "gi_platform.h"
#include "004B76F0-Sys_PopStack_20.h"
int32_t Sys_PopStack_20(void* a1, int32_t a2, int32_t a3, char a4)

{
    (*(int32_t*)(uintptr_t)(*(a1 + 4) * a3 + a1 + a2 + 0x10)) = a4;
    return a2;
}

#include "004B76F0-Sys_PopStack_20.h"
/* 0x004b76f0 Sys_PopStack_20 full linked: callers=1 callees=0 */
int32_t sub_4b76f0(void* a1, int32_t a2, int32_t a3, char a4)

{
    *(*(a1 + 4) * a3 + a1 + a2 + 0x10) = a4;
    return a2;
}

#include "004BEFC0-Sys_PopStack_30.h"
/* 0x004befc0 Sys_PopStack_30 full linked: callers=7 callees=1 */
int32_t sub_4befc0(void* a1)

{
    int32_t result = sub_4b0d10(*(a1 + 4));
    *(a1 + 4) = 0;
    return result;
}

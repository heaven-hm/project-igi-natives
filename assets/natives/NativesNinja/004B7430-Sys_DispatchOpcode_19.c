#include "004B7430-Sys_DispatchOpcode_19.h"
/* 0x004b7430 Sys_DispatchOpcode_19 full linked: callers=17 callees=0 */
int32_t sub_4b7430(void* a1, int32_t a2)

{
    int32_t result = *(a1 + 8);
    *(a1 + 8) = result + 1;
    *(a1 + (result << 2) + 0x14) = a2;
    return result;
}

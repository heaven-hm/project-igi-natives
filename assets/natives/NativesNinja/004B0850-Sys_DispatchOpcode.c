#include "004B0850-Sys_DispatchOpcode.h"
/* 0x004b0850 Sys_DispatchOpcode full linked: callers=1 callees=2 */
int32_t sub_4b0850(int32_t* a1, int32_t* a2, int32_t* a3, char* a4, int32_t a5, int32_t a6)

{
    if (!sub_4af9d0(0x938280, 0x9402e0, a4))
        return 0;

    return sub_4b07d0(a1, a2, a3, a5, 0x938280, 0x9402e0, a6);
}

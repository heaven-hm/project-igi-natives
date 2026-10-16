#include "004B76D0-Sys_PushStack_20.h"
/* 0x004b76d0 Sys_PushStack_20 full linked: callers=5 callees=2 */
int32_t sub_4b76d0(void* a1)

{
    sub_4b0d10(*(a1 + 0xc));
    *(a1 + 0xc) = 0;
    return sub_4b0d10(a1);
}

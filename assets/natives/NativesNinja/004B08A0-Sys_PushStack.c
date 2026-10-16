#include "004B08A0-Sys_PushStack.h"
/* 0x004b08a0 Sys_PushStack full linked: callers=1 callees=2 */
int32_t sub_4b08a0(int32_t* a1, int32_t* a2, char* a3, int32_t a4, int32_t a5)

{
    if (!sub_4af9d0(0x93aae0, 0x936280, a3))
        return 0;

    return sub_4b0270(a1, a2, a4, 0x93aae0, 0x936280, a5);
}

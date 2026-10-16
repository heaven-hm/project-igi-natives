#include "004B9CA0-Sys_PopStack_24.h"
/* 0x004b9ca0 Sys_PopStack_24 full linked: callers=5 callees=2 */
int32_t sub_4b9ca0(int32_t* a1, char** a2)

{
    if (!sub_4bfc70(a1, &a1[2]))
        return 0;

    return sub_4b9cd0(a1, a2, 0, 0);
}

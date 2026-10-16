#include "004F3610-AnimTask_Process.h"
/* 0x004f3610 AnimTask_Process full linked: callers=0 callees=1 */
int32_t sub_4f3610(int32_t* a1 @ 0x8)

{
    int32_t result = sub_4b8a20(a1[2], a1[1]);
    *a1 = result * 2 + 1;
    return result;
}

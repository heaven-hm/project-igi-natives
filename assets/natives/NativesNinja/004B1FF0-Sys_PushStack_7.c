#include "004B1FF0-Sys_PushStack_7.h"
/* 0x004b1ff0 Sys_PushStack_7 full linked: callers=1 callees=6 */
int32_t sub_4b1ff0(void* a1)

{
    int32_t result = 0;

    for (int32_t* i = sub_4b7490(a1); i; i = sub_4b7470(i))
    {
        if (sub_4b7580(i) == 0x48584554)
        {
            i = sub_4b7470(i);

            if (!i)
                return 0;

            if (sub_4b7580(i) != 0x59444f42)
                return 0;

            if (!sub_4b74d0(i, a1))
                return 0;

            result += 1;
        }
    }

    return result;
}

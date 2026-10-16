#include "004B7590-Sys_ReadFileBlock_20.h"
/* 0x004b7590 Sys_ReadFileBlock_20 full linked: callers=28 callees=1 */
int32_t* sub_4b7590(int32_t* a1, int32_t a2)

{
    for (int32_t* i = a1; i; i = sub_4b7470(i))
    {
        if (*i == a2)
            return i;
    }

    return nullptr;
}

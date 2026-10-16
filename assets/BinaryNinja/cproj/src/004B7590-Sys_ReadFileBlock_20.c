#include "gi_platform.h"
#include "004B7590-Sys_ReadFileBlock_20.h"
int32_t* Sys_ReadFileBlock_20(int32_t* a1, int32_t a2)

{
    for (int32_t* i = a1; i; i = Sys_PopStack_19(i))
    {
        if (*i == a2)
            return i;
    }

    return nullptr;
}

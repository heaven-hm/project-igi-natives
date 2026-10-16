#include "gi_platform.h"
#include "004BEC40-Sys_DispatchOpcode_30.h"
int32_t Sys_DispatchOpcode_30(void* a1, int32_t a2)

{
    if (a2 < (*(int32_t*)(uintptr_t)(a1 + 8)))
    {
        int32_t objC2 = (*(int32_t*)(uintptr_t)(*(a1 + 0x10) + (a2 << 2)));

        if (objC2 < (*(int32_t*)(uintptr_t)(a1 + 0xc)))
            return (*(int32_t*)(uintptr_t)(a1 + 0x14)) + objC2;
    }

    return 0;
}

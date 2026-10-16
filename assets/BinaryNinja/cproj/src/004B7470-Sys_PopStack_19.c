#include "gi_platform.h"
#include "004B7470-Sys_PopStack_19.h"
void* Sys_PopStack_19(void* a1)

{
    if (a1)
    {
        void* valA1 = (*(int32_t*)(uintptr_t)(a1 + 0xc));

        if (valA1)
            return valA1 + a1;
    }

    return 0;
}

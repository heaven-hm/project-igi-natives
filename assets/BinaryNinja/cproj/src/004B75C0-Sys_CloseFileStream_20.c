#include "gi_platform.h"
#include "004B75C0-Sys_CloseFileStream_20.h"
int32_t* Sys_CloseFileStream_20(void* a1, void* a2)

{
    Sys_PopStack_17(a2, 1);
    int32_t* result = Sys_DispatchOpcode_20((*(int32_t*)(uintptr_t)(a1 + 0x10)), (*(int32_t*)(uintptr_t)(a1 + 0x14)), a2);
    int32_t i = 0;
    int32_t objC1 = 0;

    if ((*(int32_t*)(uintptr_t)(a1 + 0x14)) <= 0)
        return result;

    int32_t ctxB;
    int32_t v_10 = ctxB;

    do
    {
        int32_t j = 0;

        if ((*(int32_t*)(uintptr_t)(a1 + 0x10)) > 0)
        {
            char* tmpD4 = (objC1 << 4) + a1 + 0x24;

            do
            {
                char ctxB1 = *tmpD4;
                tmpD4 = &tmpD4[0x10];
                *(objC1 + result + 0x10) = ctxB1;
                objC1 += 1;
                j += 1;
            } while (j < (*(int32_t*)(uintptr_t)(a1 + 0x10)));
        }

        i += 1;
    } while (i < (*(int32_t*)(uintptr_t)(a1 + 0x14)));

    return result;
}

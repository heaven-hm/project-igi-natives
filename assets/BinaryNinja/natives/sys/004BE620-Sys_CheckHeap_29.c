#include "Sys_CheckHeap_29.h"
int32_t Sys_CheckHeap_29(int32_t* a1, int32_t* a2, int32_t* a3, float* a4, float* a5)

{
    int32_t valA = Sys_CloseFileStream_28(a1, a2, a4);

    if (!valA)
        return valA;

    int32_t objC = 0;
    objC = valA == 2;
    int32_t valA2 = Sys_CloseFileStream_28(a1, a3, a5);

    if (valA2)
    {
        if (!objC)
            return valA2;

        return 2;
    }

    if (!objC)
    {
        Sys_PushStack_29(a1, *a2);
        return 0;
    }

    Sys_PopStack_29(a1, *a4);
    return 0;
}

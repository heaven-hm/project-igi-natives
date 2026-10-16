#include "Sys_ReadFileBlock_26.h"
void** Sys_ReadFileBlock_26(void* a1, char* a2)

{
    int32_t valA;
    int32_t objC;
    int32_t tmpD;
    int32_t* dstD = Sys_OpenFileStream_26(valA, tmpD, objC, a1, a2);

    if (!dstD)
        dstD = Sys_DuplicateLabelS(a1, a2);

    void** result = Mem_Alloc(0x10, 4);
    result[1] = 0;
    *result = nullptr;
    Camera_SetFieldOfView_33(&dstD[2], result);
    return result;
}

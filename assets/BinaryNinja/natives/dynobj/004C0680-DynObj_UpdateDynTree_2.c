// Original IGI.EXE function: DynObj_UpdateDynTree_2 (VA 0x004C0680; static CFG gate PASS, CFG score 0.889).
#include "DynObj_UpdateDynTree_2.h"
void* DynObj_UpdateDynTree_2(void* a1, char* a2, int32_t a3, int32_t a4)

{
    int32_t* valA = Mem_Alloc(0x4910, 4);
    char* dstD = a2;
    int32_t i = 0xffffffff;
    valA[1] = 0;
    *valA = 0;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD = &dstD[1];
        i -= 1;

        if (!cond_0_1)
            break;
    }

    int32_t objC = ~i;
    int32_t srcS1;
    int32_t dstD3;
    dstD3 = memcpy(&valA[2], dstD - objC, objC & 0xfffffffc);
    memcpy(dstD3, srcS1, objC & 3);
    valA[0x1242] = a4;
    valA[0x1243] = a3;
    void** v_14 = valA;

    if (!Camera_UpdateViewCone_33(&valA[0x42], &valA[0xa42], a2))
        return Sys_ExecuteBytecode_2(v_14);

    return Camera_SetFieldOfView_33(a1, v_14);
}

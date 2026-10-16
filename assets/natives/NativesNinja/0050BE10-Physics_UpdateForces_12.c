#include "0050BE10-Physics_UpdateForces_12.h"
/* 0x0050be10 Physics_UpdateForces_12 full linked: callers=0 callees=3 */
void* sub_50be10(int32_t* a1)

{
    void* ebp = *a1;
    void* result = Mem_Alloc(a1[3] * a1[7], 4);
    *(ebp + 0xc) = result;
    int32_t ecx_1 = a1[3] * a1[7];
    int32_t esi_1;
    int32_t edi_1;
    edi_1 = memcpy(result, a1[0xb], ecx_1 & 0xfffffffc);
    memcpy(edi_1, esi_1, ecx_1 & 3);
    result = a1[6];
    *(ebp + 4) = result;
    *(ebp + 6) = a1[7];
    *(ebp + 8) = a1[3];
    result = a1[8];
    *(ebp + 0xa) = result;
    return result;
}

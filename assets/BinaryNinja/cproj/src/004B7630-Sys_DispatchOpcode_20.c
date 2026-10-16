#include "gi_platform.h"
#include "004B7630-Sys_DispatchOpcode_20.h"
int32_t* Sys_DispatchOpcode_20(int32_t a1, int32_t a2, void* a3)

{
    int32_t flagP1 = a1 * a2;
    int32_t* result = Mem_Alloc(flagP1 + 0x13, 4);
    __builtin_memset(__builtin_memset(result, 0, (flagP1 + 0x13) & 0xfffffffc), 0,
        (flagP1 + 0x13) & 3);
    int32_t valA = Sys_PushStack_17(a3);
    int32_t valA1 = -(valA);
    *result = valA1 - valA1 + 1;
    result[1] = a1;
    *(result + 6) = a2;
    result[2] = a3;
    result[3] = Mem_Alloc(a2 * 2, 4);
    int32_t valA6 = 0;

    if (a2 > 0)
    {
        do
        {
            valA6 += 1;
            *(result[3] + (valA6 << 1) - 2) = 0;
        } while (valA6 < a2);
    }

    if (flagP1 > 0)
        __builtin_memset(__builtin_memset(&result[4], 0, flagP1 & 0xfffffffc), 0, flagP1 & 3);

    return result;
}

#include "004B7630-Sys_DispatchOpcode_20.h"
/* 0x004b7630 Sys_DispatchOpcode_20 full linked: callers=5 callees=7 */
int32_t* sub_4b7630(int32_t a1, int32_t a2, void* a3)

{
    int32_t ebp_1 = a1 * a2;
    int32_t* result = Mem_Alloc(ebp_1 + 0x13, 4);
    __builtin_memset(__builtin_memset(result, 0, (ebp_1 + 0x13) & 0xfffffffc), 0,
        (ebp_1 + 0x13) & 3);
    int32_t eax = sub_4b6d40(a3);
    int32_t eax_1 = -(eax);
    *result = eax_1 - eax_1 + 1;
    result[1] = a1;
    *(result + 6) = a2;
    result[2] = a3;
    result[3] = Mem_Alloc(a2 * 2, 4);
    int32_t eax_6 = 0;

    if (a2 > 0)
    {
        do
        {
            eax_6 += 1;
            *(result[3] + (eax_6 << 1) - 2) = 0;
        } while (eax_6 < a2);
    }

    if (ebp_1 > 0)
        __builtin_memset(__builtin_memset(&result[4], 0, ebp_1 & 0xfffffffc), 0, ebp_1 & 3);

    return result;
}

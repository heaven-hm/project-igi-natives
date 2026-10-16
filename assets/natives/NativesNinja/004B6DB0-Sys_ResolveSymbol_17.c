#include "004B6DB0-Sys_ResolveSymbol_17.h"
/* 0x004b6db0 Sys_ResolveSymbol_17 full linked: callers=2 callees=6 */
int32_t* sub_4b6db0(int32_t* a1)

{
    int32_t* eax = Mem_Alloc(0x18, 4);

    if (!sub_4b6720(eax, a1))
    {
        sub_4b0d10(eax);
        return 0;
    }

    int32_t* result = Mem_Alloc(0x28, 4);
    int32_t* eax_3 = eax[3];
    *result = eax_3;
    sub_4b7730(eax_3, nullptr);
    memcpy(&result[3],
        "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x43\x00\x00\x00\x43\x00\x00\x00\x43", 0x14);
    result[1] = 0;
    result[2] = 0;
    result[8] = 0;
    result[9] = 0;
    return result;
}

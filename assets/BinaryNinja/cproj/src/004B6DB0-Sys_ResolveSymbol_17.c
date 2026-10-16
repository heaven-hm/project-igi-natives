#include "gi_platform.h"
#include "004B6DB0-Sys_ResolveSymbol_17.h"
int32_t* Sys_ResolveSymbol_17(int32_t* a1)

{
    int32_t* valA = Mem_Alloc(0x18, 4);

    if (!Sys_IlfFileCorruptS(valA, a1))
    {
        Sys_ExecuteBytecode_2(valA);
        return 0;
    }

    int32_t* result = Mem_Alloc(0x28, 4);
    int32_t* valA3 = valA[3];
    *result = valA3;
    Sys_CheckHeap_20(valA3, nullptr);
    memcpy(&result[3],
        "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x43\x00\x00\x00\x43\x00\x00\x00\x43", 0x14);
    result[1] = 0;
    result[2] = 0;
    result[8] = 0;
    result[9] = 0;
    return result;
}

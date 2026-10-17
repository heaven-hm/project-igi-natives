// IGI native provenance: Sys_ResolveSymbol_17 - 0x004B6DB0 - CFG score 94.4% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B6DB0-Sys_ResolveSymbol_17.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ResolveSymbol_17.h"
int32_t* Sys_ResolveSymbol_17(int32_t* context)

{
    int32_t* data_val = Mem_Alloc(0x18, 4);

    if (!Sys_IlfFileCorruptS(data_val, context))
    {
        Sys_ExecuteBytecode_2(data_val);
        return 0;
    }

    int32_t* result = Mem_Alloc(0x28, 4);
    int32_t* data_3 = data_val[3];
    *result = data_3;
    Sys_CheckHeap_20(data_3, nullptr);
    memcpy(&result[3],
        "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x43\x00\x00\x00\x43\x00\x00\x00\x43", 0x14);
    result[1] = 0;
    result[2] = 0;
    result[8] = 0;
    result[9] = 0;
    return result;
}

// IGI native provenance: DynObj_CreateMagicObject_15 - 0x004CFC00 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004CFC00-DynObj_CreateMagicObject_15.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_CreateMagicObject_15.h"
int32_t DynObj_CreateMagicObject_15(int32_t context)

{
    int32_t dest_val = context;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_val;
        dest_val += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    int32_t result = ~i;
    int32_t source_1;
    int32_t dest_2;
    dest_2 = memcpy(&g_a4edf8, dest_val - result, result & 0xfffffffc);
    memcpy(dest_2, source_1, result & 3);
    return result;
}

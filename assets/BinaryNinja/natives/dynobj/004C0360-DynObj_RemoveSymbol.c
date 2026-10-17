// IGI native provenance: DynObj_RemoveSymbol - 0x004C0360 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C0360-DynObj_RemoveSymbol.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_RemoveSymbol.h"
int32_t* DynObj_RemoveSymbol(int32_t context)

{
    int32_t* result = Mem_Alloc(8, 4);
    int32_t i_1 = context;
    result[1] = i_1;
    *result = Mem_Alloc(i_1 * 0xc, 4);

    if (i_1 <= 0)
        return result;

    int32_t data_3 = 0;
    int32_t i;

    do
    {
        int32_t* entity_2 = *result + data_3;
        *entity_2 = &entity_2[1];
        void* entity_4 = *result + data_3;
        data_3 += 0xc;
        i = i_1;
        i_1 -= 1;
        *(entity_4 + 8) = entity_4;
        *(*result + data_3 - 8) = 0;
    } while (i != 1);
    return result;
}

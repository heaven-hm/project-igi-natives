// IGI native provenance: DynObj_RegisterSymbol_14 - 0x004CEFA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004CEFA0-DynObj_RegisterSymbol_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_RegisterSymbol_14.h"
int32_t* DynObj_RegisterSymbol_14(int32_t context)

{
    int32_t* result = Mem_Alloc(0x4c, 4);
    result[1] = 0;
    *result = 0;
    result[0x12] = 0;
    Camera_SetFieldOfView_33(&g_a4ec60, result);
    result[6] = &result[4];
    result[4] = &result[5];
    result[5] = 0;
    result[0xc] = &result[0xa];
    result[8] = 0;
    result[0xa] = &result[0xb];
    result[0xb] = 0;
    int32_t item_5c = context;
    char* item_60 = &g_a4ed6c;
    result[7] = &result[8];
    result[9] = &result[7];
    void item_40;
    int32_t data_3;
    int32_t temp_val;
    data_3 = Game_DataSymbolLoad(&item_40, "%s%s.mtp");
    void* item_70 = &item_40;
    result[2] = Resource_Load(data_3, temp_val, &item_40, nullptr);
    DynObj_InsertHashItem_14(result, context, 1);
    DynObj_FindSymbol_14();
    return result;
}

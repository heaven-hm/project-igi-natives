#include "gi_platform.h"
#include "004CEFA0-DynObj_RegisterSymbol_14.h"
int32_t* DynObj_RegisterSymbol_14(int32_t a1)

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
    int32_t v_5c = a1;
    char* v_60 = &g_a4ed6c;
    result[7] = &result[8];
    result[9] = &result[7];
    char v_40;
    int32_t valA3;
    int32_t tmpD;
    valA3 = Game_DataSymbolLoad(&v_40, "%s%s.mtp");
    void* v_70 = &v_40;
    result[2] = Resource_Load(valA3, tmpD, &v_40, nullptr);
    DynObj_InsertHashItem_14(result, a1, 1);
    DynObj_FindSymbol_14();
    return result;
}

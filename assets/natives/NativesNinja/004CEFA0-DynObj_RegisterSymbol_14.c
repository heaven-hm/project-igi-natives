#include "004CEFA0-DynObj_RegisterSymbol_14.h"
/* 0x004cefa0 DynObj_RegisterSymbol_14 full linked: callers=2 callees=6 */
int32_t* sub_4cefa0(int32_t a1)

{
    int32_t* result = Mem_Alloc(0x4c, 4);
    result[1] = 0;
    *result = 0;
    result[0x12] = 0;
    sub_4af8f0(&g_a4ec60, result);
    result[6] = &result[4];
    result[4] = &result[5];
    result[5] = 0;
    result[0xc] = &result[0xa];
    result[8] = 0;
    result[0xa] = &result[0xb];
    result[0xb] = 0;
    int32_t var_5c = a1;
    char* var_60 = &g_a4ed6c;
    result[7] = &result[8];
    result[9] = &result[7];
    void var_40;
    int32_t eax_3;
    int32_t edx;
    eax_3 = Game_DataSymbolLoad(&var_40, "%s%s.mtp");
    void* var_70 = &var_40;
    result[2] = Resource_Load(eax_3, edx, &var_40, nullptr);
    sub_4cf080(result, a1, 1);
    sub_4cf050();
    return result;
}

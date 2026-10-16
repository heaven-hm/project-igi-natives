#include "004CF690-DynObj_UpdateDynTree_14.h"
/* 0x004cf690 DynObj_UpdateDynTree_14 full linked: callers=1 callees=7 */
int32_t* sub_4cf690(void* a1)

{
    int32_t* result = Mem_Alloc(0x14, 4);
    void* var_24 = a1;
    char* var_28 = &g_a4ed6c;
    int32_t ebx = 0;
    result[1] = 0;
    *result = 0;
    int32_t eax_1;
    void* ecx;
    int32_t edx;
    eax_1 = Game_DataSymbolLoad(0xa4ec6c, "%smodels/%s.mef");
    int32_t var_38 = 0xa4ec6c;
    int32_t* eax_2 = Resource_Load(eax_1, edx, ecx, nullptr);
    result[4] = eax_2;
    int32_t var_8;
    result[3] = sub_4ceaa0(eax_2, 0x534d4553, &var_8);
    void* edx_2 = result[4];
    result[2] = var_8 / 0x1c;
    void* eax_5 = sub_4ceaa0(edx_2, 0x53464143, nullptr);
    void* eax_7 = sub_4ceaa0(result[4], 0x53565458, nullptr);
    void* eax_8 = sub_4ceaa0(result[4], 0x45444745, nullptr);
    int32_t i = 0;

    if (result[2] > 0)
    {
        do
        {
            void** ecx_8 = result[3] + ebx;
            ebx += 0x1c;
            i += 1;
            *ecx_8 = eax_5 + *ecx_8 * 0x1c;
            int32_t edx_7 = ecx_8[2];
            ecx_8[1] = eax_7 + ecx_8[1] * 0xc;
            ecx_8[2] = eax_8 + (edx_7 << 3);
        } while (i < result[2]);
    }

    return result;
}

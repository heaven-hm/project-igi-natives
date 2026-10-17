// Original IGI.EXE function: DynObj_UpdateDynTree_14 (VA 0x004CF690; static CFG gate PASS, CFG score 1.000).
#include "DynObj_UpdateDynTree_14.h"
int32_t* DynObj_UpdateDynTree_14(void* context)

{
    int32_t* result = Mem_Alloc(0x14, 4);
    void* item_24 = context;
    char* item_28 = &g_a4ed6c;
    int32_t context_val = 0;
    result[1] = 0;
    *result = 0;
    int32_t data_1;
    void* entity_val;
    int32_t temp_val;
    data_1 = Game_DataSymbolLoad(0xa4ec6c, "%smodels/%s.mef");
    int32_t item_38 = 0xa4ec6c;
    int32_t* data_2 = Resource_Load(data_1, temp_val, entity_val, nullptr);
    result[4] = data_2;
    int32_t item_8;
    result[3] = DynObj_CreateMagicObject_13(data_2, 0x534d4553, &item_8);
    void* temp_2 = result[4];
    result[2] = item_8 / 0x1c;
    void* data_5 = DynObj_CreateMagicObject_13(temp_2, 0x53464143, nullptr);
    void* data_7 = DynObj_CreateMagicObject_13(result[4], 0x53565458, nullptr);
    void* data_8 = DynObj_CreateMagicObject_13(result[4], 0x45444745, nullptr);
    int32_t i = 0;

    if (result[2] > 0)
    {
        do
        {
            void** entity_8 = result[3] + context_val;
            context_val += 0x1c;
            i += 1;
            *entity_8 = data_5 + *entity_8 * 0x1c;
            int32_t temp_7 = entity_8[2];
            entity_8[1] = data_7 + entity_8[1] * 0xc;
            entity_8[2] = data_8 + (temp_7 << 3);
        } while (i < result[2]);
    }

    return result;
}

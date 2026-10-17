// Original IGI.EXE function: DynObj_LinkDynamicCube_8 (VA 0x004C7140; static CFG gate PASS, CFG score 1.000).
#include "DynObj_LinkDynamicCube_8.h"
int32_t DynObj_LinkDynamicCube_8(void* context, int32_t* param_2, double* param_3, float param_4, int32_t param_5)

{
    int32_t data_1 = DynObj_InvalidCategory(param_5, param_2[7]);
    int32_t* data_2 = DynObj_InsertHashItem_9(context, data_1);
    int32_t flagP1 = *param_3 + *(context + 0xde0);
    int32_t entity_2 = param_3[1] + *(context + 0xde4);
    void* temp_1 = param_3[2] + *(context + 0xde8);
    int32_t item_14_3 = param_4;
    int32_t data_7 = DynObj_LinkDynamicCube_7(flagP1 - item_14_3, entity_2 - item_14_3, temp_1 - item_14_3,
        item_14_3 + flagP1, item_14_3 + entity_2, temp_1 + item_14_3);
    param_2[8] = *param_3;
    param_2[9] = *(param_3 + 4);
    param_2[0xa] = param_3[1];
    param_2[0xb] = *(param_3 + 0xc);
    param_2[0xc] = param_3[2];
    param_2[0xd] = *(param_3 + 0x14);
    int32_t entity_9 = 0;
    param_2[0x11] = param_4;
    entity_9 = param_2[7];
    param_2[0x17] = *(entity_9 * 0x30 + &g_af5f08);
    param_2[0x18] = 0;
    DynObj_LookupHashItem_8(context, data_2, param_2, data_7, flagP1, entity_2, temp_1);
    int32_t result = 0;
    int32_t i_1 = 0xfe;
    int16_t* context_1 = context + data_1 * 0x1fc + 0x118;
    int32_t i;

    do
    {
        int32_t entity_14 = 0;
        int16_t temp_16 = 0;
        entity_14 = param_2[7];
        temp_16 = *(((entity_14 + result) << 2) + &g_a96ae0);
        *context_1 += temp_16;
        context_1 = &context_1[1];
        result += 0x180;
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return result;
}

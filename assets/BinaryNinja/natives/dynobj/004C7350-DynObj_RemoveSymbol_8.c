// IGI native provenance: DynObj_RemoveSymbol_8 - 0x004C7350 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C7350-DynObj_RemoveSymbol_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_RemoveSymbol_8.h"
int32_t DynObj_RemoveSymbol_8(void* context, int32_t* param_2, double* param_3, double* param_4, double* param_5, int32_t param_6)

{
    int32_t data_1 = DynObj_InvalidCategory(param_6, param_2[7]);
    int32_t* data_2 = DynObj_InsertHashItem_9(context, data_1);
    int32_t flagP2 = *param_3 + *(context + 0xde0);
    int32_t flagP4 = param_3[1] + *(context + 0xde4);
    void* flagP6 = param_3[2] + *(context + 0xde8);
    int32_t flagP8 = *param_4 + *(context + 0xde0);
    int32_t flagP10 = param_4[1] + *(context + 0xde4);
    int32_t flagP12 = param_4[2] + *(context + 0xde8);
    int32_t entity_5 = *param_5 + *(context + 0xde0);
    int32_t flagP14 = param_5[1] + *(context + 0xde4);
    int32_t temp_15 = param_5[2] + *(context + 0xde8);
    param_2[8] = *param_3;
    param_2[9] = *(param_3 + 4);
    param_2[0xa] = param_3[1];
    param_2[0xb] = *(param_3 + 0xc);
    param_2[0xc] = param_3[2];
    param_2[0xd] = *(param_3 + 0x14);
    int32_t data_5 = 0;
    data_5 = param_2[7];
    param_2[0x11] = sqrtl(0.0) * 0.5f;
    int16_t data_8 = *(data_5 * 0x30 + &g_af5f08);
    param_2[0x18] = 0;
    param_2[0x17] = data_8;
    DynObj_LookupHashItem_8(context, data_2, param_2,
        DynObj_LinkDynamicCube_7(flagP8, flagP10, flagP12, entity_5 - 1, flagP14 - 1, temp_15 - 1), flagP2, flagP4, flagP6);
    int32_t result = 0;
    int16_t* dest_1 = context + data_1 * 0x1fc + 0x118;
    int32_t i_1 = 0xfe;
    int32_t i;

    do
    {
        int32_t temp_20 = 0;
        int16_t context_1 = 0;
        temp_20 = param_2[7];
        context_1 = *(((temp_20 + result) << 2) + &g_a96ae0);
        *dest_1 += context_1;
        dest_1 = &dest_1[1];
        result += 0x180;
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return result;
}

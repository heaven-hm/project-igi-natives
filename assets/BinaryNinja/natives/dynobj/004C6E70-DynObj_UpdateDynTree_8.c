// Original IGI.EXE function: DynObj_UpdateDynTree_8 (VA 0x004C6E70; static CFG gate PASS, CFG score 1.000).
#include "DynObj_UpdateDynTree_8.h"
int32_t DynObj_UpdateDynTree_8(void* context, void* param_2, double* param_3, double* param_4, double* param_5)

{
    int32_t* item_4c = *(param_2 + 0x50);
    int32_t result = Sys_ResolveSymbol_11(param_3, param_2 + 0x20);

    if (!result)
    {
        int32_t temp_8 = *(param_2 + 0x20) + *(context + 0xde0);
        int32_t temp_10 = *(param_2 + 0x28) + *(context + 0xde4);
        int32_t temp_12 = *(param_2 + 0x30) + *(context + 0xde8);
        int32_t context_4 = *param_3 + *(context + 0xde0);
        int32_t context_6 = param_3[1] + *(context + 0xde4);
        void* context_8 = param_3[2] + *(context + 0xde8);
        int32_t context_10 = *param_4 + *(context + 0xde0);
        int32_t context_12 = param_4[1] + *(context + 0xde4);
        int32_t context_14 = param_4[2] + *(context + 0xde8);
        int32_t context_16 = *param_5 + *(context + 0xde0);
        int32_t context_18 = param_5[1] + *(context + 0xde4);
        int32_t context_20 = param_5[2] + *(context + 0xde8);
        *(param_2 + 0x20) = *param_3;
        *(param_2 + 0x24) = *(param_3 + 4);
        *(param_2 + 0x28) = param_3[1];
        *(param_2 + 0x2c) = *(param_3 + 0xc);
        *(param_2 + 0x30) = param_3[2];
        *(param_2 + 0x34) = *(param_3 + 0x14);
        long double fpu_val_7_14 = *param_5 - *param_4;
        long double fpu_val_6_2 = param_5[1] - param_4[1];
        long double fpu_val_5_2 = param_5[2] - param_4[2];
        int32_t* data_4 = item_4c;
        *(param_2 + 0x44) =
            sqrtl(fpu_val_5_2 * fpu_val_5_2 + fpu_val_6_2 * fpu_val_6_2 + fpu_val_7_14 * fpu_val_7_14) * 0.5f;
        int32_t entity_5 = *data_4;
        int32_t result_3 = DynObj_LinkDynamicCube_7(temp_8, temp_10, temp_12, context_4, context_6, context_8);
        result = DynObj_LinkDynamicCube_7(context_10, context_12, context_14, context_16 - 1, context_18 - 1, context_20 - 1);
        int32_t result_2 = result_3;

        if (result > result_2)
        {
            int32_t result_1 = result;
            result_2 = result;
        label_4c70f1:
            DynObj_InsertHashItem_8(item_4c, param_2);

            if (entity_5 < result_2)
                DynObj_FindSymbol_8(context, result_2, entity_5, &item_4c);

            return DynObj_LookupHashItem_8(context, item_4c, param_2, result, context_4, context_6, context_8);
        }

        if (entity_5 != result_2 || result_2 != result)
            goto label_4c70f1;
    }

    return result;
}

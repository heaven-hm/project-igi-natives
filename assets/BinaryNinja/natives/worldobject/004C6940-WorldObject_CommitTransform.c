// IGI native provenance: WorldObject_CommitTransform - 0x004C6940 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C6940-WorldObject_CommitTransform.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WorldObject_CommitTransform.h"
int32_t WorldObject_CommitTransform(void* context, void* param_2, double* param_3, float param_4)

{
    int32_t* item_2c = *(param_2 + 0x50);
    int32_t result = Sys_ResolveSymbol_11(param_3, param_2 + 0x20);

    if (!result)
    {
    label_4c697e:
        int32_t item_1c_1 = param_4;
        int32_t temp_2 = *(context + 0xde0);
        int32_t entity_2 = *param_3 + temp_2;
        int32_t item_28_1 = temp_2;
        int32_t temp_3 = *(context + 0xde4);
        int32_t data_4 = *(context + 0xde8);
        int32_t entity_4 = param_3[1] + temp_3;
        void* entity_6 = param_3[2] + data_4;
        int32_t data_6 = *(param_2 + 0x20) + item_28_1;
        int32_t entity_8 = *(param_2 + 0x28) + temp_3;
        item_28_1 = *(param_2 + 0x30);
        *(param_2 + 0x20) = *param_3;
        *(param_2 + 0x24) = *(param_3 + 4);
        *(param_2 + 0x28) = param_3[1];
        *(param_2 + 0x2c) = *(param_3 + 0xc);
        *(param_2 + 0x30) = param_3[2];
        *(param_2 + 0x34) = *(param_3 + 0x14);
        *(param_2 + 0x44) = param_4;
        int32_t temp_13 = *item_2c;
        int32_t result_1 = DynObj_LinkDynamicCube_7(data_6, entity_8, item_28_1 + data_4, entity_2, entity_4, entity_6);
        result = DynObj_LinkDynamicCube_7(entity_2 - item_1c_1, entity_4 - item_1c_1, entity_6 - item_1c_1, entity_2 + item_1c_1,
            entity_4 + item_1c_1, entity_6 + item_1c_1);

        if (result > result_1)
        {
            result_1 = result;
        label_4c6aac:
            DynObj_InsertHashItem_8(item_2c, param_2);

            if (temp_13 >= result_1)
            {
                int32_t* temp_23 = item_2c;
                int32_t entity_14 = 0x8000;
                void* i = temp_23[0xb];

                while (i)
                {
                    result_1 = *(i + 0x5c);
                    i = *(i + 0x58);
                    entity_14 |= result_1;
                }

                temp_23[0xe] = entity_14;
            }
            else
                DynObj_FindSymbol_8(context, result_1, temp_13, &item_2c);

            return DynObj_LookupHashItem_8(context, item_2c, param_2, result, entity_2, entity_4, entity_6);
        }

        if (temp_13 != result_1 || result_1 != result)
            goto label_4c6aac;
    }
    else
    {
        long double fpu_val_7_1 = param_4;
        long double f0_1 = *(param_2 + 0x44);
        fpu_val_7_1 - f0_1;
        result = (fpu_val_7_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f0_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
            goto label_4c697e;
    }

    return result;
}

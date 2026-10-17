// IGI native provenance: DynObj_UpdateDynTree_2 - 0x004C0680 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C0680-DynObj_UpdateDynTree_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_UpdateDynTree_2.h"
void* DynObj_UpdateDynTree_2(void* context, char* param_2, int32_t param_3, int32_t param_4)

{
    int32_t* data_val = Mem_Alloc(0x4910, 4);
    char* dest_val = param_2;
    int32_t i = 0xffffffff;
    data_val[1] = 0;
    *data_val = 0;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_val;
        dest_val = &dest_val[1];
        i -= 1;

        if (!flag_0_1)
            break;
    }

    int32_t entity_val = ~i;
    int32_t source_1;
    int32_t dest_3;
    dest_3 = memcpy(&data_val[2], dest_val - entity_val, entity_val & 0xfffffffc);
    memcpy(dest_3, source_1, entity_val & 3);
    data_val[0x1242] = param_4;
    data_val[0x1243] = param_3;
    void** item_14 = data_val;

    if (!Camera_UpdateViewCone_33(&data_val[0x42], &data_val[0xa42], param_2))
        return Sys_ExecuteBytecode_2(item_14);

    return Camera_SetFieldOfView_33(context, item_14);
}

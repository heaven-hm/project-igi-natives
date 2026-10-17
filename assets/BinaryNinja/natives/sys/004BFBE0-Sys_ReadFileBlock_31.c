// IGI native provenance: Sys_ReadFileBlock_31 - 0x004BFBE0 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004BFBE0-Sys_ReadFileBlock_31.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ReadFileBlock_31.h"
void* Sys_ReadFileBlock_31(void* context, void* param_2)

{
    int32_t i = 0xffffffff;
    int32_t dest_val = *(param_2 + 0x14);

    while (i)
    {
        bool flag_0_1 = 0 != *dest_val;
        dest_val += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    int32_t* data_val = Mem_Alloc(~i + 0x28, 4);
    data_val[1] = 0;
    *data_val = 0;
    data_val[4] = &data_val[0xa];
    data_val[2] = *(param_2 + 0xc);
    data_val[3] = *(param_2 + 0x10);
    data_val[8] = *(param_2 + 0x20);
    data_val[6] = *(param_2 + 0x18);
    data_val[7] = *(param_2 + 0x1c);
    int32_t dest_1 = *(param_2 + 0x14);
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool flag_1_1 = 0 != *dest_1;
        dest_1 += 1;
        i_1 -= 1;

        if (!flag_1_1)
            break;
    }

    int32_t entity_4 = ~i_1;
    int32_t source_2;
    int32_t dest_4;
    dest_4 = memcpy(&data_val[0xa], dest_1 - entity_4, entity_4 & 0xfffffffc);
    memcpy(dest_4, source_2, entity_4 & 3);
    return Camera_SetFieldOfView_33(context, data_val);
}

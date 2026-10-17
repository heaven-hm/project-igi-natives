// IGI native provenance: Menu_LeaveMenus_8 - 0x0041C690 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0041C690-Menu_LeaveMenus_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_LeaveMenus_8.h"
int32_t Menu_LeaveMenus_8(int32_t context, int32_t param_2)

{
    void* temp_2 = g_57bbb0;
    int32_t data_val = *(temp_2 + 0x1254);
    int32_t entity_1 = 0;

    if (data_val > 0)
    {
        int32_t* temp_val = temp_2 + 0x54;

        do
        {
            if (*temp_val == param_2)
                return data_val;

            entity_1 += 1;
            temp_val = &temp_val[0x12];
        } while (entity_1 < data_val);
    }

    *(temp_2 + data_val * 0x48 + 0x54) = param_2;
    int32_t dest_1 = context;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_1;
        dest_1 += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    int32_t entity_2 = ~i;
    int32_t source_2;
    int32_t dest_4;
    dest_4 = memcpy(temp_2 + data_val * 0x48 + 0x58, dest_1 - entity_2, entity_2 & 0xfffffffc);
    memcpy(dest_4, source_2, entity_2 & 3);
    *(temp_2 + 0x1254) += 1;
    return entity_2;
}

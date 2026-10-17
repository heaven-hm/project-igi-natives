// IGI native provenance: Menu_DrawWidget_9 - 0x0041F2D0 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0041F2D0-Menu_DrawWidget_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_DrawWidget_9.h"
int32_t Menu_DrawWidget_9(int32_t context, int32_t param_2)

{
    void* temp_2 = g_57bbd8;
    int32_t data_val = *(temp_2 + 0xbe0);
    int32_t entity_2 = 0;

    if (data_val > 0)
    {
        int32_t* temp_val = temp_2 + 0xe0;

        do
        {
            if (*temp_val == param_2)
                return data_val;

            entity_2 += 1;
            temp_val = &temp_val[0xb];
        } while (entity_2 < data_val);
    }

    *(temp_2 + data_val * 0x2c + 0xe0) = param_2;
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

    int32_t entity_3 = ~i;
    int32_t source_2;
    int32_t dest_4;
    dest_4 = memcpy(temp_2 + data_val * 0x2c + 0xe4, dest_1 - entity_3, entity_3 & 0xfffffffc);
    memcpy(dest_4, source_2, entity_3 & 3);
    *(temp_2 + 0xbe0) += 1;
    return entity_3;
}

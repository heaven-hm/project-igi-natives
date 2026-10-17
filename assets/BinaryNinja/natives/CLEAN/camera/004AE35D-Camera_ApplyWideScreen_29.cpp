// IGI native provenance: Camera_ApplyWideScreen_29 - 0x004AE35D - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AE35D-Camera_ApplyWideScreen_29.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyWideScreen_29.h"
int32_t Camera_ApplyWideScreen_29(int32_t context, int32_t param_2)

{
    int32_t data_val;
    char entity_4;
    char* temp_1;

    if (context < g_c32540)
    {
        data_val = context & 0x1f;
        int32_t entity_3 = (&g_c32440)[context >> 5];
        temp_1 = entity_3 + (data_val << 3) + 4;
        entity_4 = *(entity_3 + (data_val << 3) + 4);
    }

    if (context >= g_c32540 || !(entity_4 & 1))
        g_936064 = 9;
    else
    {
        data_val = entity_4;
        int32_t data_1 = data_val & 0x80;

        if (param_2 == 0x8000)
        {
            entity_4 &= 0x7f;
        label_4ae3aa:
            int32_t data_2 = -(data_1);
            int32_t data_3 = data_2 - data_2;
            *temp_1 = entity_4;
            data_3 &= 0xc000;
            return data_3 + 0x8000;
        }

        if (param_2 == 0x4000)
        {
            entity_4 |= 0x80;
            goto label_4ae3aa;
        }

        g_936064 = 0x16;
    }

    return 0xffffffff;
}

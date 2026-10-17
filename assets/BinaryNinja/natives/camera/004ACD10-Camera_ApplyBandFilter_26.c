// IGI native provenance: Camera_ApplyBandFilter_26 - 0x004ACD10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004ACD10-Camera_ApplyBandFilter_26.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyBandFilter_26.h"
char* Camera_ApplyBandFilter_26(char* context, char param_2, int32_t param_3)

{
    int32_t i_3 = param_3;

    if (!i_3)
        return context;

    int32_t data_val = 0;
    data_val = param_2;
    char* dest_val = context;

    if (i_3 < 4)
    {
    label_4acd5b:
        int32_t i;

        do
        {
            *dest_val = data_val;
            dest_val = &dest_val[1];
            i = i_3;
            i_3 -= 1;
        } while (i != 1);
    }
    else
    {
        int32_t i_2 = -(context) & 3;

        if (i_2)
        {
            i_3 -= i_2;
            int32_t i_1;

            do
            {
                *dest_val = data_val;
                dest_val = &dest_val[1];
                i_1 = i_2;
                i_2 -= 1;
            } while (i_1 != 1);
        }

        data_val *= 0x1010101;
        int32_t i_4 = i_3;
        i_3 &= 3;
        uint32_t entity_4 = i_4 >> 2;

        if (!entity_4)
            goto label_4acd5b;

        int32_t entity_5;
        dest_val = __memfill_u32(dest_val, data_val, entity_4);

        if (i_3)
            goto label_4acd5b;
    }

    return context;
}

// IGI native provenance: DynObj_InsertHashItem_2 - 0x004C04B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C04B0-DynObj_InsertHashItem_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_InsertHashItem_2.h"
uint32_t DynObj_InsertHashItem_2(int32_t* context, int32_t** param_2, char* param_3)

{
    uint32_t data_1 = DynObj_LookupHashItem_2(param_3, context[1]);
    int32_t* flagP = *(*context + data_1 * 0xc);
    int32_t* dest_val = *flagP;

    if (dest_val)
    {
        while (true)
        {
            char* source_1 = flagP[2];
            char* data_2 = param_3;

            while (true)
            {
                char temp_1 = *data_2;
                char f0_1 = *source_1;
                bool c_1 = temp_1 < f0_1;

                if (temp_1 == f0_1)
                {
                    if (!temp_1)
                    {
                        data_1 = 0;
                        break;
                    }

                    temp_1 = data_2[1];
                    char f3_1 = source_1[1];
                    c_1 = temp_1 < f3_1;

                    if (temp_1 == f3_1)
                    {
                        data_2 = &data_2[2];
                        source_1 = &source_1[2];

                        if (temp_1)
                            continue;

                        data_1 = 0;
                        break;
                    }
                }

                data_1 = data_2 - data_2 + 1;
                break;
            }

            if (!data_1)
            {
                int32_t** data_4 = param_2;
                *data_4 = flagP;
                data_4 = 1;
                return data_4;
            }

            flagP = dest_val;
            dest_val = *dest_val;

            if (!dest_val)
                break;
        }
    }

    *param_2 = nullptr;
    data_1 = 0;
    return data_1;
}

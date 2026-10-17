// IGI native provenance: DynObj_ParseConfigFile_12 - 0x004CE910 - CFG score 91.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 004CE910-DynObj_ParseConfigFile_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_ParseConfigFile_12.h"
int32_t* DynObj_ParseConfigFile_12(int32_t context, int32_t* param_2, int32_t param_3, int32_t param_4)

{
    int32_t* source_val = param_2;
    int32_t i = 0;
    int32_t* item_1c = &source_val[3];
    int32_t result_1;

    do
    {
        int32_t* temp_1 = *item_1c;

        if (temp_1)
        {
            int32_t data_1 = *temp_1;
            double item_18;
            memcpy(&item_18, param_4, 0x18);
            item_18 = ((i & 1) * 2 - 1) * data_1 + item_18;
            double item_10 = ((i & 2) - 1) * data_1 + item_10;
            result_1 = &item_18;
            double item_8 = ((i >> 1 & 2) - 1) * data_1 + item_8;
            DynObj_ParseConfigFile_12(context, temp_1, param_3, result_1);
            source_val = param_2;
        }

        i += 1;
        item_1c = &item_1c[1];
    } while (i < 8);

    int32_t* result = source_val[0xf];

    if (result)
    {
        result_1 = result;
        result = DynCubeObj_Action(result_1);
    }

    if (*source_val == 0x100000)
    {
        result_1 = 0x49800000;
        result = DynCubeObj_OnEvent(0x100, context, param_3, param_4, result_1);
        source_val[0xf] = result;
    }

    return result;
}

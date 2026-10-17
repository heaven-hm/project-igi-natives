// IGI native provenance: PictureBox_LoadParameters - 0x0041B590 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041B590-PictureBox_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PictureBox_LoadParameters.h"
int32_t* PictureBox_LoadParameters(long double context , void* param_2)

{
    int32_t* result = Script_FormatString_6(param_2 + 0x9ac);

    if (result)
    {
        Script_SpawnNewTask_7(param_2 + 0x9ac, param_2);
        int32_t entity_1 = *(param_2 + 0x958);
        result = nullptr;

        if (entity_1 > 0)
        {
            int32_t* temp_1 = param_2 + 0x94;

            while (context != *temp_1)
            {
                result += 1;
                temp_1 = &temp_1[0x12];

                if (result >= entity_1)
                    return result;
            }

            *(param_2 + 0x954) = result;
        }
    }

    return result;
}

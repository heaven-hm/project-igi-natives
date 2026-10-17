// IGI native provenance: TextBox_LoadParameters - 0x0041AE20 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041AE20-TextBox_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "TextBox_LoadParameters.h"
int32_t TextBox_LoadParameters(long double context , void* param_2)

{
    if (Script_FormatString_6(param_2 + 0x21f4))
    {
        Script_SpawnNewTask_7(param_2 + 0x21f4, param_2);
        int32_t entity_1 = *(param_2 + 0x21a0);
        int32_t data_1 = 0;

        if (entity_1 > 0)
        {
            int32_t* temp_1 = param_2 + 0x19c;

            do
            {
                if (context == *temp_1)
                {
                    *(param_2 + 0x219c) = data_1;
                    break;
                }

                data_1 += 1;
                temp_1 = &temp_1[0x42];
            } while (data_1 < entity_1);
        }
    }

    return (*((Menu_PlayMusic_13() << 2) + &g_a970e0))(param_2);
}

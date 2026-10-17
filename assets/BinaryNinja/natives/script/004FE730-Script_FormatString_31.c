// IGI native provenance: Script_FormatString_31 - 0x004FE730 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004FE730-Script_FormatString_31.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_FormatString_31.h"
int32_t* Script_FormatString_31(void* context, char* param_2)

{
    int32_t context_val;
    int32_t item_4 = context_val;
    int32_t* result_1 = *(context + 8);

    if (*result_1)
    {
        int32_t* result = result_1;

        if (result)
        {
            while (true)
            {
                int32_t temp_val;
                temp_val = result[7];
                char data_val;
                int16_t entity_val;
                data_val = TaskType_IsDerivedFrom(temp_val, g_a7a4fc);

                if (data_val)
                {
                    char* source_1 = param_2;
                    char* data_1 = &result[8];
                    int32_t data_3;

                    while (true)
                    {
                        temp_val = *data_1;
                        char context_1 = *source_1;
                        entity_val = temp_val;
                        bool c_1 = temp_val < context_1;

                        if (temp_val == context_1)
                        {
                            if (!entity_val)
                            {
                                data_3 = 0;
                                break;
                            }

                            temp_val = data_1[1];
                            context_1 = source_1[1];
                            entity_val = temp_val;
                            c_1 = temp_val < context_1;

                            if (temp_val == context_1)
                            {
                                data_1 = &data_1[2];
                                source_1 = &source_1[2];

                                if (entity_val)
                                    continue;

                                data_3 = 0;
                                break;
                            }
                        }

                        data_3 = data_1 - data_1 + 1;
                        break;
                    }

                    if (!data_3)
                        return result;
                }

                int32_t* result_2 = *result;

                if (!result_2)
                    break;

                if (!*result_2)
                    break;

                result = result_2;

                if (!result)
                    break;
            }
        }
    }

    return 0;
}

// IGI native provenance: QTask_QtaskTypeSNotDefined - 0x00401A70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00401A70-QTask_QtaskTypeSNotDefined.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_QtaskTypeSNotDefined.h"
int32_t QTask_QtaskTypeSNotDefined(char* context)

{
    int32_t flagP = 0;
    char* dest_val = &g_af5f05;

    while (true)
    {
        if (*dest_val)
        {
            char* source_1 = context;
            char* data_1 = QTask_RegisterEventCallback_2(flagP);
            int32_t result;

            while (true)
            {
                char temp_1 = *data_1;
                char f0_1 = *source_1;
                bool c_1 = temp_1 < f0_1;

                if (temp_1 == f0_1)
                {
                    if (!temp_1)
                    {
                        result = 0;
                        break;
                    }

                    temp_1 = data_1[1];
                    char f3_1 = source_1[1];
                    c_1 = temp_1 < f3_1;

                    if (temp_1 == f3_1)
                    {
                        data_1 = &data_1[2];
                        source_1 = &source_1[2];

                        if (temp_1)
                            continue;

                        result = 0;
                        break;
                    }
                }

                result = data_1 - data_1 + 1;
                break;
            }

            if (!result)
            {
                result = flagP;
                return result;
            }
        }

        dest_val = &dest_val[0x30];
        flagP += 1;

        if (dest_val >= 0xafa705)
            break;
    }

    char* item_14_2 = context;
    Error_Show("QTask type "%s" not defined");

    while (true)
        /* nop */
}

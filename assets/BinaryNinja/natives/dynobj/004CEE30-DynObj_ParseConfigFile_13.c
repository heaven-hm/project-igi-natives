// Original IGI.EXE function: DynObj_ParseConfigFile_13 (VA 0x004CEE30; static CFG gate PASS, CFG score 1.000).
#include "DynObj_ParseConfigFile_13.h"
int32_t* DynObj_ParseConfigFile_13(char* context)

{
    int32_t* data_val = g_a4ec60;
    int32_t* context_val = *data_val;

    if (context_val)
    {
        while (true)
        {
            int32_t* result = data_val[0xa];
            int32_t* result_1 = *result;

            if (result_1)
            {
                while (true)
                {
                    char* source_1 = result[2];
                    char* entity_1 = context;
                    int32_t entity_3;

                    while (true)
                    {
                        char data_1 = *entity_1;
                        char f0_1 = *source_1;
                        bool c_1 = data_1 < f0_1;

                        if (data_1 == f0_1)
                        {
                            if (!data_1)
                            {
                                entity_3 = 0;
                                break;
                            }

                            data_1 = entity_1[1];
                            char f3_1 = source_1[1];
                            c_1 = data_1 < f3_1;

                            if (data_1 == f3_1)
                            {
                                entity_1 = &entity_1[2];
                                source_1 = &source_1[2];

                                if (data_1)
                                    continue;

                                entity_3 = 0;
                                break;
                            }
                        }

                        entity_3 = entity_1 - entity_1 + 1;
                        break;
                    }

                    if (!entity_3)
                        return result;

                    result = result_1;
                    result_1 = *result_1;

                    if (!result_1)
                        break;
                }
            }

            data_val = context_val;
            context_val = *context_val;

            if (!context_val)
                break;
        }
    }

    return 0;
}

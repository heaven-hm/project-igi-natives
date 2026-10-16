/* LOGIC NOTE (QTask_QtaskTypeSNotDefined @ 0x00401A70)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : Error_
   called by : Task_New
   data refs : none
   strings   : QTask type ;  not defined
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_QtaskTypeSNotDefined.h"

int32_t QTask_QtaskTypeSNotDefined(char* arg1)

{
    int32_t frame = 0;
    char* dst = &data_af5f05;

    while (true)
    {
        if (*dst)
        {
            char* src_1 = arg1;
            char* result_1 = QTask_RegisterEventCallback_2(frame);
            int32_t result;

            while (true)
            {
                char tmp_1 = *result_1;
                char f0_1 = *src_1;
                bool c_1 = tmp_1 < f0_1;

                if (tmp_1 == f0_1)
                {
                    if (!tmp_1)
                    {
                        result = 0;
                        break;
                    }

                    tmp_1 = result_1[1];
                    char f3_1 = src_1[1];
                    c_1 = tmp_1 < f3_1;

                    if (tmp_1 == f3_1)
                    {
                        result_1 = &result_1[2];
                        src_1 = &src_1[2];

                        if (tmp_1)
                            continue;

                        result = 0;
                        break;
                    }
                }

                result = result_1 - result_1 + 1;
                break;
            }

            if (!result)
            {
                result = frame;
                return result;
            }
        }

        dst = &dst[0x30];
        frame += 1;

        if (dst >= 0xafa705)
            break;
    }

    char* v_14_2 = arg1;
    Error_Show("QTask type "%s" not defined");

    while (true)
        /* nop */
}

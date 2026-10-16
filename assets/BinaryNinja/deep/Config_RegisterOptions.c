/* LOGIC NOTE (Config_RegisterOptions @ 0x00404390)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : none
   called by : none
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "Config_RegisterOptions.h"

void* Config_RegisterOptions(void* arg1)

{
    void* result = arg1 + 0x1c;

    if (result && *(arg1 + 4) >= 0x280 && *(arg1 + 8) >= 0x1e0)
    {
        result = data_567c90;
        int32_t tmp_1 = 0;

        if (result > 0)
        {
            int32_t obj;
            int32_t v_8_1 = obj;
            int32_t dst_1 = 0;

            while (true)
            {
                char* src_1 = dst_1 + &data_567c98;
                char* result = arg1 + 0x1c;
                int32_t result_2;

                while (true)
                {
                    char obj_1 = *result;
                    char f0_1 = *src_1;
                    bool c_1 = obj_1 < f0_1;

                    if (obj_1 == f0_1)
                    {
                        if (!obj_1)
                        {
                            result_2 = 0;
                            break;
                        }

                        obj_1 = result[1];
                        char f3_1 = src_1[1];
                        c_1 = obj_1 < f3_1;

                        if (obj_1 == f3_1)
                        {
                            result = &result[2];
                            src_1 = &src_1[2];

                            if (obj_1)
                                continue;

                            result_2 = 0;
                            break;
                        }
                    }

                    result_2 = result - result + 1;
                    break;
                }

                if (!result_2)
                {
                    int32_t result_3 = *(dst_1 + &data_568098);
                    *(dst_1 + result_3 * 0xc + 0x567d98) = *(arg1 + 4);
                    *(dst_1 + result_3 * 0xc + 0x567d9c) = *(arg1 + 8);
                    *(dst_1 + result_3 * 0xc + 0x567da0) = *(arg1 + 0x10);
                    *(dst_1 + &data_568098) += 1;
                }

                result = data_567c90;
                tmp_1 += 1;
                dst_1 += 0x404;

                if (tmp_1 >= result)
                    break;
            }
        }
    }

    return result;
}

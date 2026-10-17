// Original IGI.EXE function: Display_SoundInvalidFilename (VA 0x00497390; static CFG gate PASS, CFG score 1.000).
#include "Display_SoundInvalidFilename.h"
char* Display_SoundInvalidFilename(char* context, char* param_2)

{
    char* result = param_2;
    *context = 0;
    char i = *param_2;

    if (i)
    {
        while (i != 0x2e)
        {
            i = result[1];
            result = &result[1];

            if (!i)
            {
                char* item_c_1 = param_2;
                return Warning_Show("SOUND - Invalid filename %s");
            }
        }

        char* result_1 = result;

        if (result)
        {
            if (result >= param_2)
            {
                while (true)
                {
                    i = *result;

                    if (i == 0x2f || i == 0x5c || i == 0x3a)
                    {
                        char* source_1 = result_1 - &result[1];
                        result = Camera_ApplyLineFilter_5(context, &result[1], source_1);
                        *(source_1 + context) = 0;
                        break;
                    }

                    result -= 1;

                    if (result < param_2)
                        return result;

                    continue;
                }
            }

            return result;
        }
    }

    char* item_c_2 = param_2;
    return Warning_Show("SOUND - Invalid filename %s");
}

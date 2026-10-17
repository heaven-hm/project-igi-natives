// Original IGI.EXE function: Display_SoundInvalidFilename (VA 0x00497390; static CFG gate PASS, CFG score 1.000).
#include "Display_SoundInvalidFilename.h"
char* Display_SoundInvalidFilename(char* a1, char* a2)

{
    char* result = a2;
    *a1 = 0;
    char i = *a2;

    if (i)
    {
        while (i != 0x2e)
        {
            i = result[1];
            result = &result[1];

            if (!i)
            {
                char* v_c_1 = a2;
                return Warning_Show("SOUND - Invalid filename %s");
            }
        }

        char* result_1 = result;

        if (result)
        {
            if (result >= a2)
            {
                while (true)
                {
                    i = *result;

                    if (i == 0x2f || i == 0x5c || i == 0x3a)
                    {
                        char* srcS1 = result_1 - &result[1];
                        result = Camera_ApplyLineFilter_5(a1, &result[1], srcS1);
                        *(srcS1 + a1) = 0;
                        break;
                    }

                    result -= 1;

                    if (result < a2)
                        return result;

                    continue;
                }
            }

            return result;
        }
    }

    char* v_c_2 = a2;
    return Warning_Show("SOUND - Invalid filename %s");
}

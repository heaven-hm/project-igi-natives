#include "00497390-Display_SoundInvalidFilename.h"
/* 0x00497390 Display_SoundInvalidFilename full linked: callers=4 callees=3 */
char* sub_497390(char* a1, char* a2)

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
                char* var_c_1 = a2;
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
                        char* esi_1 = result_1 - &result[1];
                        result = sub_4a5500(a1, &result[1], esi_1);
                        *(esi_1 + a1) = 0;
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

    char* var_c_2 = a2;
    return Warning_Show("SOUND - Invalid filename %s");
}

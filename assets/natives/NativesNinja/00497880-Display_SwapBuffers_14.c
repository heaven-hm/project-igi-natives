#include "00497880-Display_SwapBuffers_14.h"
/* 0x00497880 Display_SwapBuffers_14 full linked: callers=3 callees=0 */
int32_t* sub_497880(int32_t* a1, int32_t a2)

{
    int32_t* result = a1;

    if (a2)
    {
        int32_t i_1 = a2 - 1;
        *result = 0;
        result[1] = 0xffffffff;

        if (a2 != 1)
        {
            int32_t i;

            do
            {
                result[3] = result;
                result[4] = 0xffffffff;
                result = &result[3];
                i = i_1;
                i_1 -= 1;
            } while (i != 1);
        }
    }

    return result;
}

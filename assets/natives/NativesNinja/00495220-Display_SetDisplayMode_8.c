#include "00495220-Display_SetDisplayMode_8.h"
/* 0x00495220 Display_SetDisplayMode_8 full linked: callers=3 callees=0 */
int32_t* sub_495220(int32_t a1, int32_t* a2)

{
    int32_t* i_1 = nullptr;
    int32_t* i;

    for (i = *a2; i; i = *i)
    {
        if (i[1] == a1)
        {
            if (!i_1)
            {
                *a2 = *i;
                i = 1;
                return i;
            }

            int32_t eax = *i;
            *i_1 = eax;
            eax = 1;
            return eax;
        }

        i_1 = i;
    }

    i = 0;
    return i;
}

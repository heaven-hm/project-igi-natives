#include "Display_SetDisplayMode_8.h"
int32_t* Display_SetDisplayMode_8(int32_t a1, int32_t* a2)

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

            int32_t valA = *i;
            *i_1 = valA;
            valA = 1;
            return valA;
        }

        i_1 = i;
    }

    i = 0;
    return i;
}

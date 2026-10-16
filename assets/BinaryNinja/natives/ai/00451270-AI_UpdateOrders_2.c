#include "AI_UpdateOrders_2.h"
int32_t AI_UpdateOrders_2(void* a1, int32_t a2)

{
    int32_t result = 0;
    int32_t i_1 = *(a1 + 0x128);

    if (i_1 > 0)
    {
        int32_t* objC = a1 + 0x90;
        int32_t i;

        do
        {
            if (*objC == a2)
                result += 1;

            objC = &objC[1];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    return result;
}

#include "00451270-AI_UpdateOrders_2.h"
/* 0x00451270 AI_UpdateOrders_2 full linked: callers=5 callees=0 */
int32_t sub_451270(void* a1, int32_t a2)

{
    int32_t result = 0;
    int32_t i_1 = *(a1 + 0x128);

    if (i_1 > 0)
    {
        int32_t* ecx = a1 + 0x90;
        int32_t i;

        do
        {
            if (*ecx == a2)
                result += 1;

            ecx = &ecx[1];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    return result;
}

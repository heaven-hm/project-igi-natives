#include "004500C0-AI_CombatTarget.h"
/* 0x004500c0 AI_CombatTarget full linked: callers=1 callees=1 */
int32_t* sub_4500c0(void* a1)

{
    int32_t i_1 = 0x18;
    int32_t* ebx = a1 + 0x6f0;
    int32_t* result;
    int32_t i;

    do
    {
        result = *ebx;

        for (int32_t* j = *result; j; j = *j)
        {
            sub_44fe50(a1, result);
            result = j;
        }

        ebx = &ebx[3];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    *(a1 + 0x8e0) = 0;
    return result;
}

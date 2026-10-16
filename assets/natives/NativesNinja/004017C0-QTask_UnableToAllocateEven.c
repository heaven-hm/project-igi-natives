#include "004017C0-QTask_UnableToAllocateEven.h"
/* 0x004017c0 QTask_UnableToAllocateEven full linked: callers=150 callees=1 */
int32_t QTask_UnableToAllocateEven(int16_t a1)

{
    int32_t result = 0x20;
    char* i = &g_54f9f2;

    do
    {
        if (!*i)
        {
            int32_t ecx_1 = result * 6;
            *(ecx_1 + &g_54f932) = 1;
            *(ecx_1 + 0x54f930) = a1;
            *(ecx_1 + 0x54f933) = 1;
            return result;
        }

        i = &i[6];
        result += 1;
    } while (i < &*(g_54ff24 + 2));

    Error_Show("Unable to allocate event");

    while (true)
        /* nop */
}

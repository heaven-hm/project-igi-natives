#include "00504A30-Physics_UnableToRegisterArea.h"
/* 0x00504a30 Physics_UnableToRegisterArea full linked: callers=3 callees=2 */
int32_t sub_504a30(int32_t* a1, int32_t a2)

{
    int32_t ecx = 0;

    for (char* i = &g_a7a640; i < &g_a7a7b4; )
    {
        if (!*i)
        {
            int32_t eax_1 = ecx * 0xc;
            *(eax_1 + &g_a7a640) = 1;
            *(eax_1 + 0xa7a644) = a1;
            *(eax_1 + 0xa7a648) = a2;
            int32_t result = 1 << (ecx & 0x1f);
            TaskType_Set(a1, result);
            return result;
        }

        i = &i[0xc];
        ecx += 1;
    }

    Error_Show("Unable to register AreaActivate criteria");

    while (true)
        /* nop */
}

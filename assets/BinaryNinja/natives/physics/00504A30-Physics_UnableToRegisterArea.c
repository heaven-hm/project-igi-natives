#include "Physics_UnableToRegisterArea.h"
int32_t Physics_UnableToRegisterArea(int32_t* a1, int32_t a2)

{
    int32_t objC = 0;

    for (char* i = &g_a7a640; i < &g_a7a7b4; )
    {
        if (!*i)
        {
            int32_t valA1 = objC * 0xc;
            *(valA1 + &g_a7a640) = 1;
            *(valA1 + 0xa7a644) = a1;
            *(valA1 + 0xa7a648) = a2;
            int32_t result = 1 << (objC & 0x1f);
            TaskType_Set(a1, result);
            return result;
        }

        i = &i[0xc];
        objC += 1;
    }

    Error_Show("Unable to register AreaActivate criteria");

    while (true)
        /* nop */
}

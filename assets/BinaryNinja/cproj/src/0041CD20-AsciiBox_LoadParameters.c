#include "gi_platform.h"
#include "0041CD20-AsciiBox_LoadParameters.h"
int32_t AsciiBox_LoadParameters(void* a1)

{
    if ((*(int32_t*)(uintptr_t)(a1 + 0xdc)))
    {
        int32_t valA2 = Menu_FormatScreen_10((*(int32_t*)(uintptr_t)(a1 + 0xf4)));
        int32_t objC1 = (*(int32_t*)(uintptr_t)(a1 + 0xe8));
        bool cond_0_1 = valA2 <= objC1;
        int32_t tmpD;

        if (valA2 < objC1)
        {
            do
            {
                int32_t objC3 = (*(int32_t*)(uintptr_t)(a1 + 0xe0)) - 1;
                (*(int32_t*)(uintptr_t)(a1 + 0xe0)) = objC3;
                char* objC4 = objC3 - 1;

                if (*objC4)
                {
                    char i;

                    do
                    {
                        (*(int32_t*)(uintptr_t)(a1 + 0xe0)) = objC4;
                        i = objC4[0xffffffff];
                        objC4 -= 1;
                    } while (i);
                }

                tmpD = (*(int32_t*)(uintptr_t)(a1 + 0xe8)) - 1;
                (*(int32_t*)(uintptr_t)(a1 + 0xe8)) = tmpD;
            } while (valA2 < tmpD);

            cond_0_1 = valA2 <= tmpD;
        }

        if (!cond_0_1)
        {
            do
            {
                void* objC7 = (*(int32_t*)(uintptr_t)(a1 + 0xe0)) + 1;
                (*(int32_t*)(uintptr_t)(a1 + 0xe0)) = objC7;

                while (*(objC7 - 1))
                {
                    objC7 += 1;
                    (*(int32_t*)(uintptr_t)(a1 + 0xe0)) = objC7;
                }

                tmpD = (*(int32_t*)(uintptr_t)(a1 + 0xe8)) + 1;
                (*(int32_t*)(uintptr_t)(a1 + 0xe8)) = tmpD;
            } while (valA2 > tmpD);
        }
    }

    void* valA3 = (*(int32_t*)(uintptr_t)(a1 + 0xf4));
    int32_t objC9 = 0;
    objC9 = *(valA3 + 0x1c);
    ((int(*)())(uintptr_t)(*((objC9 << 2) + &g_a970e0)))(valA3);
    return ((int(*)())(uintptr_t)(*((Menu_PlayMusic_13() << 2) + &g_a970e0)))(a1);
}

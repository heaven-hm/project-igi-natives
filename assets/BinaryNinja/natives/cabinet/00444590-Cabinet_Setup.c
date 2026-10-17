// Original IGI.EXE function: Cabinet_Setup (VA 0x00444590; static CFG gate FAIL, CFG score 0.667).
#include "Cabinet_Setup.h"
void* Cabinet_Setup(void* a1)

{
    int32_t* i = *(a1 + 8);

    if (*i && i)
    {
        int32_t tmpD1 = g_afa7e0;

        do
        {
            int32_t* srcS1 = *i;
            void* valA4;

            if (!srcS1)
                valA4 = nullptr;
            else
            {
                int32_t valA1 = *srcS1;
                int32_t valA2 = -(valA1);
                valA4 = (valA2 - valA2) & srcS1;
            }

            *((tmpD1 << 2) + &g_afa6e0) = valA4;
            int32_t tmpD2 = tmpD1 + 1;
            int32_t valA5 = 0;
            g_afa7e0 = tmpD2;
            valA5 = i[7];
            int32_t valA6 = *((valA5 << 2) + &g_a970e0);

            if (valA6)
            {
                valA6(i);
                tmpD2 = g_afa7e0;
            }

            i = *((tmpD2 << 2) + &g_afa6dc);
            tmpD1 = tmpD2 - 1;
            g_afa7e0 = tmpD1;
        } while (i);
    }

    void* valA7 = *(a1 + 0xe8);

    if (valA7 && *(a1 + 0x130))
    {
        int32_t objC1 = 0;
        objC1 = *(valA7 + 0x1c);
        (*((objC1 << 2) + &g_a970e0))(valA7);
    }

    void* result = g_bc2360;

    if (*(result + 0x68) <= *(a1 + 0x124) + 2)
    {
        *(a1 + 0x120) = *(a1 + 0x11f);
        return result;
    }

    *(a1 + 0x11f) = 0;
    *(a1 + 0x120) = *(a1 + 0x11f);
    return result;
}

// Original IGI.EXE function: Menu_RequestScreen_21 (VA 0x00429EF0; static CFG gate FAIL, CFG score 0.667).
#include "Menu_RequestScreen_21.h"
void* Menu_RequestScreen_21(void* a1)

{
    void* tmpD1 = a1;
    int32_t i = 0;
    void* flagP = *(*(tmpD1 + 0x1b4) + 0x2d4);

    if (*(flagP + 0x28) > 0)
    {
        void* tmpD = tmpD1 + 0x748;
        void* valA2 = flagP + 0x2c;

        do
        {
            i += 1;
            memcpy(tmpD, valA2, 0x1c);
            valA2 += 0x1c;
            tmpD += 0x1c;
        } while (i < *(flagP + 0x28));

        tmpD1 = a1;
    }

    memcpy(tmpD1 + 0x780, tmpD1 + 0x748, 0x1c);
    *(a1 + 0x794) = -(*(a1 + 0x794));
    memcpy(a1 + 0x79c, a1 + 0x764, 0x1c);
    *(a1 + 0x7b0) = -(*(a1 + 0x7b0));
    return a1;
}

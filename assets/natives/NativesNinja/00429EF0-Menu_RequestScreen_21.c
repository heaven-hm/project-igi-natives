#include "00429EF0-Menu_RequestScreen_21.h"
/* 0x00429ef0 Menu_RequestScreen_21 full linked: callers=1 callees=3 */
void* Menu_RequestScreen_21(void* a1)

{
    void* edx_1 = a1;
    int32_t i = 0;
    void* ebp = *(*(edx_1 + 0x1b4) + 0x2d4);

    if (*(ebp + 0x28) > 0)
    {
        void* edx = edx_1 + 0x748;
        void* eax_2 = ebp + 0x2c;

        do
        {
            i += 1;
            memcpy(edx, eax_2, 0x1c);
            eax_2 += 0x1c;
            edx += 0x1c;
        } while (i < *(ebp + 0x28));

        edx_1 = a1;
    }

    memcpy(edx_1 + 0x780, edx_1 + 0x748, 0x1c);
    *(a1 + 0x794) = -(*(a1 + 0x794));
    memcpy(a1 + 0x79c, a1 + 0x764, 0x1c);
    *(a1 + 0x7b0) = -(*(a1 + 0x7b0));
    return a1;
}

#include "ComputerStartup_Setup.h"
void ComputerStartup_Setup(void* a1)

{
    if (!(*(a1 + 0x70) & 1))
        return;

    long double x87_r7_2 = *(a1 + 0x40) + 1f;
    int32_t objC1 = *(a1 + 0x20);
    *(a1 + 0x40) = x87_r7_2;
    long double f0_1 = *(a1 + (objC1 << 2) + 0x44);
    x87_r7_2 - f0_1;

    if (*(&((x87_r7_2 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_2 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41)
        return;

    int32_t valA2 = *(a1 + (objC1 << 2) + 0x74);

    if (valA2)
        valA2(*(a1 + 0x14), objC1);

    int32_t valA3 = *(a1 + 0x20);

    if (valA3 < *(a1 + 0x24) - 1)
    {
        *(a1 + 0x40) = 0;
        *(a1 + 0x20) = valA3 + 1;
        return;
    }

    int32_t valA5 = *(a1 + 0x70);
    valA5 &= 0xfe;
    valA5 |= 2;
    *(a1 + 0x70) = valA5;
}

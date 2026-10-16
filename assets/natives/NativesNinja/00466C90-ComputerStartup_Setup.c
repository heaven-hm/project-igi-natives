#include "00466C90-ComputerStartup_Setup.h"
/* 0x00466c90 ComputerStartup_Setup full linked: callers=0 callees=0 */
void sub_466c90(void* a1)

{
    if (!(*(a1 + 0x70) & 1))
        return;

    long double x87_r7_2 = *(a1 + 0x40) + 1f;
    int32_t ecx_1 = *(a1 + 0x20);
    *(a1 + 0x40) = x87_r7_2;
    long double temp0_1 = *(a1 + (ecx_1 << 2) + 0x44);
    x87_r7_2 - temp0_1;

    if (*(&((x87_r7_2 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_2 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x41)
        return;

    int32_t eax_2 = *(a1 + (ecx_1 << 2) + 0x74);

    if (eax_2)
        eax_2(*(a1 + 0x14), ecx_1);

    int32_t eax_3 = *(a1 + 0x20);

    if (eax_3 < *(a1 + 0x24) - 1)
    {
        *(a1 + 0x40) = 0;
        *(a1 + 0x20) = eax_3 + 1;
        return;
    }

    int32_t eax_5 = *(a1 + 0x70);
    eax_5 &= 0xfe;
    eax_5 |= 2;
    *(a1 + 0x70) = eax_5;
}

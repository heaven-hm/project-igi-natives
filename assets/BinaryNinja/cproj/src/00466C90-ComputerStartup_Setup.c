#include "gi_platform.h"
#include "00466C90-ComputerStartup_Setup.h"
void ComputerStartup_Setup(void* a1)

{
    if (!((*(int32_t*)(uintptr_t)(a1 + 0x70)) & 1))
        return;

    long double x87_r7_2 = (*(int32_t*)(uintptr_t)(a1 + 0x40)) + 1.0f;
    int32_t objC1 = (*(int32_t*)(uintptr_t)(a1 + 0x20));
    (*(int32_t*)(uintptr_t)(a1 + 0x40)) = x87_r7_2;
    long double f0_1 = (*(int32_t*)(uintptr_t)(a1 + (objC1 << 2) + 0x44));
    x87_r7_2 - f0_1;

    if (*(&((x87_r7_2 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_2 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41)
        return;

    int32_t valA2 = (*(int32_t*)(uintptr_t)(a1 + (objC1 << 2) + 0x74));

    if (valA2)
        valA2((*(int32_t*)(uintptr_t)(a1 + 0x14)), objC1);

    int32_t valA3 = (*(int32_t*)(uintptr_t)(a1 + 0x20));

    if (valA3 < (*(int32_t*)(uintptr_t)(a1 + 0x24)) - 1)
    {
        (*(int32_t*)(uintptr_t)(a1 + 0x40)) = 0;
        (*(int32_t*)(uintptr_t)(a1 + 0x20)) = valA3 + 1;
        return;
    }

    int32_t valA5 = (*(int32_t*)(uintptr_t)(a1 + 0x70));
    valA5 &= 0xfe;
    valA5 |= 2;
    (*(int32_t*)(uintptr_t)(a1 + 0x70)) = valA5;
}

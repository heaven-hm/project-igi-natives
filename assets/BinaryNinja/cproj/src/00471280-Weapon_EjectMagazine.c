#include "gi_platform.h"
#include "00471280-Weapon_EjectMagazine.h"
int32_t Weapon_EjectMagazine(void* a1, int32_t a2)

{
    void* valA = a1 + 0xe00;
    int32_t i_1 = 0x40;
    int32_t i;

    do
    {
        memcpy(valA + 0xe00, 0x534038, 0x38);
        memcpy(valA, 0x534038, 0x38);
        void* dstD3 = valA - 0xe00;
        valA += 0x38;
        i = i_1;
        i_1 -= 1;
        memcpy(dstD3, 0x534038, 0x38);
    } while (i != 1);
    (*(int32_t*)(uintptr_t)(a1 + 0x2a00)) = a2;
    return a2;
}

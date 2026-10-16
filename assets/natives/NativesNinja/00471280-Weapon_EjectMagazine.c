#include "00471280-Weapon_EjectMagazine.h"
/* 0x00471280 Weapon_EjectMagazine full linked: callers=1 callees=3 */
int32_t sub_471280(void* a1, int32_t a2)

{
    void* eax = a1 + 0xe00;
    int32_t i_1 = 0x40;
    int32_t i;

    do
    {
        memcpy(eax + 0xe00, 0x534038, 0x38);
        memcpy(eax, 0x534038, 0x38);
        void* edi_3 = eax - 0xe00;
        eax += 0x38;
        i = i_1;
        i_1 -= 1;
        memcpy(edi_3, 0x534038, 0x38);
    } while (i != 1);
    *(a1 + 0x2a00) = a2;
    return a2;
}

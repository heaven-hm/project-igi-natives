#include "0047B190-GunShot_TakeSlot.h"
/* 0x0047b190 GunShot_TakeSlot full linked: callers=1 callees=1 */
int32_t sub_47b190(void* a1, int32_t a2, int32_t* a3, void* a4, int32_t a5, int32_t a6)

{
    int32_t edi = *(a1 + 0x94);

    if (edi >= 0xf)
    {
        int32_t eax_5 = *(a1 + 0x90) + 1;
        *(a1 + 0x90) = eax_5;
        return eax_5;
    }

    int32_t i = 0;
    long double x87_r7_1 = *(a4 + 0x650) * 4096f;
    void* ecx = *(a4 + 0x658);
    void* eax = *(a4 + 0x654);
    int32_t* ecx_1 = a1 + 0xe0;
    int32_t* eax_1;

    do
    {
        eax_1 = ecx_1;

        if (!*ecx_1)
            break;

        i += 1;
        ecx_1 = &ecx_1[0x12];
    } while (i < 0xf);

    *(a1 + (edi << 2) + 0xa4) = eax_1;
    *eax_1 = 1;
    memcpy(&eax_1[2], a2, 0x18);
    eax_1[8] = *a3;
    eax_1[9] = a3[1];
    int32_t esi_2 = a3[2];
    eax_1[0x10] = 0;
    eax_1[0xa] = esi_2;
    eax_1[0xe] = eax;
    eax_1[0xd] = x87_r7_1;
    eax_1[0xf] = ecx;
    eax_1[0x11] = a6;
    *(eax_1 + 0x41) = 0;
    eax_1[0xb] = a4;
    eax_1[0xc] = a5;
    int32_t eax_3 = *(a1 + 0x90) + 1;
    *(a1 + 0x94) += 1;
    *(a1 + 0x90) = eax_3;
    return eax_3;
}

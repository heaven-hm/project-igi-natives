#include "004AB49E-Camera_ResetMatrix_21.h"
/* 0x004ab49e Camera_ResetMatrix_21 full linked: callers=1 callees=1 */
int32_t sub_4ab49e(void* a1)

{
    int32_t ecx;
    int32_t var_8 = ecx;
    void* esi = *(a1 + 0x10);
    int32_t i = *(a1 + 8);
    int32_t result = 0;

    while (i >= 0)
    {
        i <<= 1;
        result += 1;
    }

    int32_t i_2 = 0x3f;
    void* eax_2 = result * 0x204 + esi + 0x144;
    void* var_8_1 = eax_2;
    int32_t i_1;

    do
    {
        *(eax_2 + 8) = eax_2;
        *(eax_2 + 4) = eax_2;
        eax_2 += 8;
        i_1 = i_2;
        i_2 -= 1;
    } while (i_1 != 1);
    void* lpAddress = (result << 0xf) + *(a1 + 0xc);

    if (!VirtualAlloc(lpAddress, 0x8000, MEM_COMMIT, PAGE_READWRITE))
        return 0xffffffff;

    if (lpAddress <= lpAddress + 0x7000)
    {
        void** eax_5 = lpAddress + 0x10;

        do
        {
            eax_5[-2] = 0xffffffff;
            eax_5[0x3fb] = 0xffffffff;
            eax_5[-1] = 0xff0;
            *eax_5 = &eax_5[0x3ff];
            eax_5[1] = &eax_5[-0x401];
            eax_5[0x3fa] = 0xff0;
            eax_5 = &eax_5[0x400];
        } while (&eax_5[-4] <= lpAddress + 0x7000);
    }

    *(var_8_1 + 0x1fc) = lpAddress + 0xc;
    *(lpAddress + 0x14) = var_8_1 + 0x1f8;
    *(var_8_1 + 0x200) = lpAddress + 0x700c;
    *(lpAddress + 0x7010) = var_8_1 + 0x1f8;
    *(esi + (result << 2) + 0x44) = 0;
    *(esi + (result << 2) + 0xc4) = 1;
    char eax_8 = *(esi + 0x43);
    *(esi + 0x43) = eax_8 + 1;

    if (!eax_8)
        *(a1 + 4) |= 1;

    *(a1 + 8) &= ~(0x80000000 >> (result & 0x1f));
    return result;
}

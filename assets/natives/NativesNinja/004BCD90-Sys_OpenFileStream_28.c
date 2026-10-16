#include "004BCD90-Sys_OpenFileStream_28.h"
/* 0x004bcd90 Sys_OpenFileStream_28 full linked: callers=4 callees=6 */
int32_t sub_4bcd90(char* a1, int32_t* a2)

{
    char* esi = a1;
    int32_t* eax_1 = *(*(esi + 0x28) + (*(esi + 0x1c) << 2));

    if (eax_1 == 6)
    {
        sub_4bccc0(esi, a2, nullptr, nullptr);
        return 1;
    }

    if (eax_1 == 4)
    {
        int32_t __saved_ecx;
        sub_4bcc00(esi, &a1, &__saved_ecx, eax_1);

        if (sub_4bab80(a1, a2))
            return 1;

        char* edx_3 = a1;
        int32_t ecx_1 = *(esi + 0x14);
        *(esi + 0x20) = 7;
        *(esi + 0x10) = ecx_1;
        sub_4bce40(esi, edx_3, 4);
        char* edi_1 = a1;
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond:0_1 = 0 != *edi_1;
            edi_1 = &edi_1[1];
            i -= 1;

            if (!cond:0_1)
                break;
        }

        int32_t ecx_2 = ~i;
        int32_t esi_2;
        int32_t edi_4;
        edi_4 = memcpy(&esi[0x68], edi_1 - ecx_2, ecx_2 & 0xfffffffc);
        memcpy(edi_4, esi_2, ecx_2 & 3);
    }

    return 0;
}

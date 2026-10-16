#include "004EA600-SoundDefGraph_LoadParameters.h"
/* 0x004ea600 SoundDefGraph_LoadParameters full linked: callers=0 callees=14 */
int32_t sub_4ea600(void* a1, int32_t* a2)

{
    sub_4ea7b0(a1);

    if (!a2)
        *(a1 + 0xd4) = 1;
    else
    {
        void* edx_1 = *a2;
        memcpy(a1 + 0xa0, edx_1 + 0xa0, 0x18);
        memcpy(a1 + 0x88, edx_1 + 0xa0, 0x18);
        *(a1 + 0xb8) = *(edx_1 + 0xb8);
        *(a1 + 0xbc) = *(edx_1 + 0xbc);
        *(a1 + 0xc0) = *(edx_1 + 0xc0);
        *(a1 + 0xc8) = *(edx_1 + 0xc8);
        *(a1 + 0xcc) = *(edx_1 + 0xcc);
        *(a1 + 0xd0) = *(edx_1 + 0xd0);
        *(a1 + 0xd8) = *(edx_1 + 0xd8);
        *(a1 + 0xdc) = *(edx_1 + 0xdc);
        *(a1 + 0xe0) = *(edx_1 + 0xe0);
        *(a1 + 0xe4) = *(edx_1 + 0xe4);
        memcpy(a1 + 0xe8, edx_1 + 0xe8, 0x2c);
        memcpy(a1 + 0x114, edx_1 + 0x114, 0x2c);
        void* edi_5 = edx_1 + 0x140;
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond:0_1 = 0 != *edi_5;
            edi_5 += 1;
            i -= 1;

            if (!cond:0_1)
                break;
        }

        int32_t ecx_6 = ~i;
        int32_t esi_6;
        int32_t edi_8;
        edi_8 = memcpy(a1 + 0x140, edi_5 - ecx_6, ecx_6 & 0xfffffffc);
        memcpy(edi_8, esi_6, ecx_6 & 3);
        void* edi_9 = edx_1 + 0x160;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool cond:1_1 = 0 != *edi_9;
            edi_9 += 1;
            i_1 -= 1;

            if (!cond:1_1)
                break;
        }

        int32_t ecx_10 = ~i_1;
        int32_t esi_8;
        int32_t edi_12;
        edi_12 = memcpy(a1 + 0x160, edi_9 - ecx_10, ecx_10 & 0xfffffffc);
        memcpy(edi_12, esi_8, ecx_10 & 3);
        *(a1 + 0xd4) = a2[1];
        *(a1 + 0x180) = sub_497450(a1 + 0x160);
        *(a1 + 0x184) = sub_497410(a1 + 0x160);
    }

    *(a1 + 0xd5) = 0;
    *(a1 + 0x20) = 0;
    *(a1 + 0x24) = 0;
    *(a1 + 0x28) = 0;
    *(a1 + 0x2c) = 0x12;
    sub_4974a0(a1 + 0x30);

    if (!*(a1 + 0xd4))
        sub_4e6d20(a1);

    return sub_4eaeb0(a1);
}

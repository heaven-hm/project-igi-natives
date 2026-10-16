#include "004E9830-SoundDefTriggerOnce_LoadParameters.h"
/* 0x004e9830 SoundDefTriggerOnce_LoadParameters full linked: callers=0 callees=12 */
int32_t sub_4e9830(void* a1, int32_t* a2)

{
    sub_4e99d0(a1);

    if (!a2)
        *(a1 + 0xe2) = 1;
    else
    {
        void* edx_1 = *a2;
        memcpy(a1 + 0xa0, edx_1 + 0xa0, 0x18);
        memcpy(a1 + 0x88, edx_1 + 0x88, 0x18);
        void* edi_3 = edx_1 + 0xe3;
        *(a1 + 0xb8) = *(edx_1 + 0xb8);
        *(a1 + 0xc4) = *(edx_1 + 0xc4);
        *(a1 + 0xc8) = *(edx_1 + 0xc8);
        *(a1 + 0xcc) = *(edx_1 + 0xcc);
        *(a1 + 0x12c) = *(edx_1 + 0x12c);
        *(a1 + 0xd0) = *(edx_1 + 0xd0);
        *(a1 + 0xd4) = *(edx_1 + 0xd4);
        *(a1 + 0xd8) = *(edx_1 + 0xd8);
        *(a1 + 0xdc) = *(edx_1 + 0xdc);
        *(a1 + 0xe0) = *(edx_1 + 0xe0);
        *(a1 + 0xe1) = *(edx_1 + 0xe1);
        *(a1 + 0xe2) = a2[1];
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond:0_1 = 0 != *edi_3;
            edi_3 += 1;
            i -= 1;

            if (!cond:0_1)
                break;
        }

        int32_t ecx_11 = ~i;
        int32_t esi_4;
        int32_t edi_6;
        edi_6 = memcpy(a1 + 0xe3, edi_3 - ecx_11, ecx_11 & 0xfffffffc);
        memcpy(edi_6, esi_4, ecx_11 & 3);
        char* edi_7 = edx_1 + 0x103;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool cond:1_1 = 0 != *edi_7;
            edi_7 = &edi_7[1];
            i_1 -= 1;

            if (!cond:1_1)
                break;
        }

        int32_t ecx_15 = ~i_1;
        int32_t esi_6;
        int32_t edi_10;
        edi_10 = memcpy(a1 + 0x103, edi_7 - ecx_15, ecx_15 & 0xfffffffc);
        memcpy(edi_10, esi_6, ecx_15 & 3);
        *(a1 + 0x130) = sub_497450(edx_1 + 0x103);
        *(a1 + 0x134) = sub_497410(edx_1 + 0x103);
    }

    *(a1 + 0x128) = 0;
    *(a1 + 0x20) = 0;
    *(a1 + 0x24) = 0;
    *(a1 + 0x28) = 0;
    *(a1 + 0x123) = 0;
    *(a1 + 0x124) = 0;
    *(a1 + 0x2c) = 2;
    sub_4974a0(a1 + 0x30);

    if (!*(a1 + 0xe2))
        sub_4e6d20(a1);

    return sub_4ea040(a1);
}

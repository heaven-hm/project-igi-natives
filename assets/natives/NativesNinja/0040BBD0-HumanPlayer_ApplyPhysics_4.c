#include "0040BBD0-HumanPlayer_ApplyPhysics_4.h"
/* 0x0040bbd0 HumanPlayer_ApplyPhysics_4 full linked: callers=0 callees=5 */
int32_t HumanPlayer_ApplyPhysics_4(void* a1, float a2)

{
    int32_t result = FallLanding(a2);
    int16_t ebx = *(a1 + 8);

    if (!(ebx & 4))
        return result;

    void* eax = *(a2 + 0x6ec);

    if (eax)
    {
        struct status_msg* eax_3 = sub_4e6b00(sub_4f0ee0(), eax + 0x114);

        if (eax_3)
            sub_4e6c30(eax_3, a2 + 0x6a8);
    }

    __builtin_memset(a2 + 0x664, 0, 0x18);

    if (!(*(a1 + 8) & 0x40000))
    {
        if (ebx & 0x80)
        {
            void* edx_3 = *(a1 + 4);
            *(a1 + 0xc) = *(a1 + 0x10);
            *(a1 + 0x10) = 1;
            int32_t eax_15 = *(edx_3 + 4);
            *(a1 + 0x14) = eax_15;
            return eax_15(a1, a2);
        }

        if (*(&ebx + 1) & 1)
        {
            void* ecx_5 = *(a1 + 4);
            *(a1 + 0xc) = *(a1 + 0x10);
            *(a1 + 0x10) = 4;
            int32_t eax_18 = *(ecx_5 + 0x10);
            *(a1 + 0x14) = eax_18;
            return eax_18(a1, a2);
        }

        if (ebx & 0x40)
        {
            void* eax_20 = *(a1 + 4);
            *(a1 + 0xc) = *(a1 + 0x10);
            *(a1 + 0x10) = 7;
            int32_t eax_21 = *(eax_20 + 0x1c);
            *(a1 + 0x14) = eax_21;
            return eax_21(a1, a2);
        }

        if (ebx & 0x20)
        {
            void* edx_5 = *(a1 + 4);
            *(a1 + 0xc) = *(a1 + 0x10);
            *(a1 + 0x10) = 8;
            int32_t eax_23 = *(edx_5 + 0x20);
            *(a1 + 0x14) = eax_23;
            return eax_23(a1, a2);
        }
    }
    else
    {
        if (ebx & 0x80)
        {
            void* eax_4 = *(a1 + 4);
            *(a1 + 0xc) = *(a1 + 0x10);
            *(a1 + 0x10) = 9;
            int32_t eax_5 = *(eax_4 + 0x24);
            *(a1 + 0x14) = eax_5;
            return eax_5(a1, a2);
        }

        if (*(&ebx + 1) & 1)
        {
            void* edx_1 = *(a1 + 4);
            *(a1 + 0xc) = *(a1 + 0x10);
            *(a1 + 0x10) = 0xc;
            int32_t eax_7 = *(edx_1 + 0x30);
            *(a1 + 0x14) = eax_7;
            return eax_7(a1, a2);
        }

        if (ebx & 0x40)
        {
            void* ecx_3 = *(a1 + 4);
            *(a1 + 0xc) = *(a1 + 0x10);
            *(a1 + 0x10) = 0xf;
            int32_t eax_10 = *(ecx_3 + 0x3c);
            *(a1 + 0x14) = eax_10;
            return eax_10(a1, a2);
        }

        if (ebx & 0x20)
        {
            void* eax_12 = *(a1 + 4);
            *(a1 + 0xc) = *(a1 + 0x10);
            *(a1 + 0x10) = 0x10;
            int32_t eax_13 = *(eax_12 + 0x40);
            *(a1 + 0x14) = eax_13;
            return eax_13(a1, a2);
        }
    }

    int32_t* ecx_7 = *(a1 + 4);
    *(a1 + 0xc) = *(a1 + 0x10);
    *(a1 + 0x10) = 0;
    int32_t eax_26 = *ecx_7;
    *(a1 + 0x14) = eax_26;
    return eax_26(a1, a2);
}

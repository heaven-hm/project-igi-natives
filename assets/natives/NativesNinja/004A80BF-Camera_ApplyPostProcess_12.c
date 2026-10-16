#include "004A80BF-Camera_ApplyPostProcess_12.h"
/* 0x004a80bf Camera_ApplyPostProcess_12 full linked: callers=2 callees=3 */
void sub_4a80bf(uint32_t a1, int32_t* a2, char a3, int32_t a4, double* a5, double* a6) __noreturn

{
    *(a1 + 4) = 0;
    *(a1 + 8) = 0;
    *(a1 + 0xc) = 0;
    char ecx_3 = a3;

    if (ecx_3 & 0x10)
    {
        uint32_t eax_1 = a1;
        a3 = 0xc000008f;
        *(eax_1 + 4) |= 1;
    }

    if (ecx_3 & 2)
    {
        uint32_t eax_2 = a1;
        a3 = 0xc0000093;
        *(eax_2 + 4) |= 2;
    }

    if (1 & ecx_3)
    {
        uint32_t eax_3 = a1;
        a3 = 0xc0000091;
        *(eax_3 + 4) |= 4;
    }

    if (ecx_3 & 4)
    {
        uint32_t eax_4 = a1;
        a3 = 0xc000008e;
        *(eax_4 + 4) |= 8;
    }

    if (ecx_3 & 8)
    {
        uint32_t eax_5 = a1;
        a3 = 0xc0000090;
        *(eax_5 + 4) |= 0x10;
    }

    uint32_t eax_6 = a1;
    *(eax_6 + 8) = (~*a2 & 1) << 4 | (*(eax_6 + 8) & 0xffffffef);
    uint32_t eax_7 = a1;
    *(eax_7 + 8) = (~*a2 & 4) << 1 | (*(eax_7 + 8) & 0xfffffff7);
    uint32_t eax_8 = a1;
    *(eax_8 + 8) = (~*a2 >> 1 & 4) | (*(eax_8 + 8) & 0xfffffffb);
    uint32_t eax_9 = a1;
    *(eax_9 + 8) = (~*a2 >> 3 & 2) | (*(eax_9 + 8) & 0xfffffffd);
    uint32_t eax_10 = a1;
    *(eax_10 + 8) = (~*a2 >> 5 & 1) | (*(eax_10 + 8) & 0xfffffffe);
    char eax_11 = sub_4a87df();

    if (1 & eax_11)
    {
        uint32_t ecx_29 = a1;
        *(ecx_29 + 0xc) |= 0x10;
    }

    if (eax_11 & 4)
    {
        uint32_t ecx_30 = a1;
        *(ecx_30 + 0xc) |= 8;
    }

    if (eax_11 & 8)
    {
        uint32_t ecx_31 = a1;
        *(ecx_31 + 0xc) |= 4;
    }

    if (eax_11 & 0x10)
    {
        uint32_t ecx_32 = a1;
        *(ecx_32 + 0xc) |= 2;
    }

    if (eax_11 & 0x20)
    {
        uint32_t eax_12 = a1;
        *(eax_12 + 0xc) |= 1;
    }

    int32_t eax_14 = *a2 & 0xc00;

    if (!eax_14)
    {
        uint32_t eax_17 = a1;
        *eax_17 &= 0xfffffffc;
    }
    else
    {
        uint32_t eax_16;

        if (eax_14 == 0x400)
        {
            eax_16 = a1;
            *eax_16 = (*eax_16 & 0xfffffffd) | 1;
        }
        else if (eax_14 == 0x800)
        {
            eax_16 = a1;
            *eax_16 = (*eax_16 & 0xfffffffe) | 2;
        }
        else if (eax_14 == 0xc00)
        {
            uint32_t eax_15 = a1;
            *eax_15 |= 3;
        }
    }

    int32_t eax_19 = *a2 & 0x300;
    uint32_t eax_21;

    if (!eax_19)
    {
        eax_21 = a1;
        *eax_21 = (*eax_21 & 0xffffffeb) | 8;
    }
    else if (eax_19 == 0x200)
    {
        eax_21 = a1;
        *eax_21 = (*eax_21 & 0xffffffe7) | 4;
    }
    else if (eax_19 == 0x300)
    {
        uint32_t eax_20 = a1;
        *eax_20 &= 0xffffffe3;
    }
    uint32_t eax_22 = a1;
    *eax_22 = (a4 & 0xfff) << 5 | (*eax_22 & 0xfffe001f);
    uint32_t eax_23 = a1;
    *(eax_23 + 0x20) |= 1;
    uint32_t eax_24 = a1;
    *(eax_24 + 0x20) = (*(eax_24 + 0x20) & 0xffffffe3) | 2;
    *(a1 + 0x10) = *a5;
    uint32_t eax_27 = a1;
    *(eax_27 + 0x50) |= 1;
    uint32_t eax_28 = a1;
    *(eax_28 + 0x50) = (*(eax_28 + 0x50) & 0xffffffe3) | 2;
    *(a1 + 0x40) = *a6;
    sub_4a87ed();
    RaiseException(a3, 0, 1, &a1);
    /* no return */
}

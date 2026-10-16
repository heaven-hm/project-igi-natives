#include "gi_platform.h"
#include "004A80BF-Camera_ApplyPostProcess_12.h"
void Camera_ApplyPostProcess_12(uint32_t a1, int32_t* a2, char a3, int32_t a4, double* a5, double* a6) __noreturn

{
    (*(int32_t*)(uintptr_t)(a1 + 4)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 8)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0xc)) = 0;
    char objC3 = a3;

    if (objC3 & 0x10)
    {
        uint32_t valA1 = a1;
        a3 = 0xc000008f;
        *(valA1 + 4) |= 1;
    }

    if (objC3 & 2)
    {
        uint32_t valA2 = a1;
        a3 = 0xc0000093;
        *(valA2 + 4) |= 2;
    }

    if (1 & objC3)
    {
        uint32_t valA3 = a1;
        a3 = 0xc0000091;
        *(valA3 + 4) |= 4;
    }

    if (objC3 & 4)
    {
        uint32_t valA4 = a1;
        a3 = 0xc000008e;
        *(valA4 + 4) |= 8;
    }

    if (objC3 & 8)
    {
        uint32_t valA5 = a1;
        a3 = 0xc0000090;
        *(valA5 + 4) |= 0x10;
    }

    uint32_t valA6 = a1;
    *(valA6 + 8) = (~*a2 & 1) << 4 | (*(valA6 + 8) & 0xffffffef);
    uint32_t valA7 = a1;
    *(valA7 + 8) = (~*a2 & 4) << 1 | (*(valA7 + 8) & 0xfffffff7);
    uint32_t valA8 = a1;
    *(valA8 + 8) = (~*a2 >> 1 & 4) | (*(valA8 + 8) & 0xfffffffb);
    uint32_t valA9 = a1;
    *(valA9 + 8) = (~*a2 >> 3 & 2) | (*(valA9 + 8) & 0xfffffffd);
    uint32_t valA10 = a1;
    *(valA10 + 8) = (~*a2 >> 5 & 1) | (*(valA10 + 8) & 0xfffffffe);
    char valA11 = Camera_UpdateViewCone_13();

    if (1 & valA11)
    {
        uint32_t objC29 = a1;
        *(objC29 + 0xc) |= 0x10;
    }

    if (valA11 & 4)
    {
        uint32_t objC30 = a1;
        *(objC30 + 0xc) |= 8;
    }

    if (valA11 & 8)
    {
        uint32_t objC31 = a1;
        *(objC31 + 0xc) |= 4;
    }

    if (valA11 & 0x10)
    {
        uint32_t objC32 = a1;
        *(objC32 + 0xc) |= 2;
    }

    if (valA11 & 0x20)
    {
        uint32_t valA12 = a1;
        *(valA12 + 0xc) |= 1;
    }

    int32_t valA14 = *a2 & 0xc00;

    if (!valA14)
    {
        uint32_t valA17 = a1;
        *valA17 &= 0xfffffffc;
    }
    else
    {
        uint32_t valA16;

        if (valA14 == 0x400)
        {
            valA16 = a1;
            *valA16 = (*valA16 & 0xfffffffd) | 1;
        }
        else if (valA14 == 0x800)
        {
            valA16 = a1;
            *valA16 = (*valA16 & 0xfffffffe) | 2;
        }
        else if (valA14 == 0xc00)
        {
            uint32_t valA15 = a1;
            *valA15 |= 3;
        }
    }

    int32_t valA19 = *a2 & 0x300;
    uint32_t valA21;

    if (!valA19)
    {
        valA21 = a1;
        *valA21 = (*valA21 & 0xffffffeb) | 8;
    }
    else if (valA19 == 0x200)
    {
        valA21 = a1;
        *valA21 = (*valA21 & 0xffffffe7) | 4;
    }
    else if (valA19 == 0x300)
    {
        uint32_t valA20 = a1;
        *valA20 &= 0xffffffe3;
    }
    uint32_t valA22 = a1;
    *valA22 = (a4 & 0xfff) << 5 | (*valA22 & 0xfffe001f);
    uint32_t valA23 = a1;
    *(valA23 + 0x20) |= 1;
    uint32_t valA24 = a1;
    *(valA24 + 0x20) = (*(valA24 + 0x20) & 0xffffffe3) | 2;
    (*(int32_t*)(uintptr_t)(a1 + 0x10)) = *a5;
    uint32_t valA27 = a1;
    *(valA27 + 0x50) |= 1;
    uint32_t valA28 = a1;
    *(valA28 + 0x50) = (*(valA28 + 0x50) & 0xffffffe3) | 2;
    (*(int32_t*)(uintptr_t)(a1 + 0x40)) = *a6;
    Camera_ResetMatrix_13();
    RaiseException(a3, 0, 1, &a1);
    /* no return */
}

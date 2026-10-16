#include "Env_ActivateEntity_12.h"
void* Env_ActivateEntity_12(void* a1)

{
    int32_t i = 0;
    *(a1 + 0x818) = a1 + 0x810;
    int32_t* dstD = a1 + 0x87c;
    *(a1 + 0x810) = a1 + 0x814;
    *(a1 + 0x814) = 0;
    int32_t* valA1 = a1 + 0x6f0;

    do
    {
        i += 1;
        *valA1 = &valA1[1];
        valA1[2] = valA1;
        valA1[1] = 0;
        *(a1 + i + 0x8e3) = 0;
        *dstD = 0;
        dstD = &dstD[1];
        valA1 = &valA1[3];
    } while (i < 0x18);

    int32_t* dstD1 = a1 + 0xf0;
    int32_t i_2 = 0x20;
    void* result;
    int32_t i_1;

    do
    {
        dstD1[1] = 0;
        *dstD1 = 0;
        result = Camera_SetFieldOfView_33(a1 + 0x810, dstD1);
        dstD1 = &dstD1[0xc];
        i_1 = i_2;
        i_2 -= 1;
    } while (i_1 != 1);
    *(a1 + 0x8e0) = 0;
    return result;
}

#include "GunShot_TakeSlot.h"
int32_t GunShot_TakeSlot(void* a1, int32_t a2, int32_t* a3, void* a4, int32_t a5, int32_t a6)

{
    int32_t dstD = *(a1 + 0x94);

    if (dstD >= 0xf)
    {
        int32_t valA5 = *(a1 + 0x90) + 1;
        *(a1 + 0x90) = valA5;
        return valA5;
    }

    int32_t i = 0;
    long double x87_r7_1 = *(a4 + 0x650) * 4096f;
    void* objC = *(a4 + 0x658);
    void* valA = *(a4 + 0x654);
    int32_t* objC1 = a1 + 0xe0;
    int32_t* valA1;

    do
    {
        valA1 = objC1;

        if (!*objC1)
            break;

        i += 1;
        objC1 = &objC1[0x12];
    } while (i < 0xf);

    *(a1 + (dstD << 2) + 0xa4) = valA1;
    *valA1 = 1;
    memcpy(&valA1[2], a2, 0x18);
    valA1[8] = *a3;
    valA1[9] = a3[1];
    int32_t srcS2 = a3[2];
    valA1[0x10] = 0;
    valA1[0xa] = srcS2;
    valA1[0xe] = valA;
    valA1[0xd] = x87_r7_1;
    valA1[0xf] = objC;
    valA1[0x11] = a6;
    *(valA1 + 0x41) = 0;
    valA1[0xb] = a4;
    valA1[0xc] = a5;
    int32_t valA3 = *(a1 + 0x90) + 1;
    *(a1 + 0x94) += 1;
    *(a1 + 0x90) = valA3;
    return valA3;
}

#include "gi_platform.h"
#include "00508E40-Sync_Setup.h"
int32_t Sync_Setup(int32_t* a1)

{
    int32_t* ctxB = a1;
    int32_t valA = ctxB[8];
    int32_t* srcS;

    if (!valA)
    {
        a1 = &ctxB[0x19b];
        srcS = &ctxB[0x19b];
    }
    else
    {
        srcS = &ctxB[0xd2];
        a1 = srcS;
    }

    int32_t i = 0;
    ctxB[8] = valA ^ 1;
    int32_t valA2 = *srcS;

    if (valA2 <= 0)
    {
        *srcS = 0;
        return valA2;
    }

    int32_t* srcS1 = &srcS[2];
    int32_t valA8;

    do
    {
        int32_t* valA3 = ctxB[0x264];
        int32_t objC2 = valA3[2] + ((*srcS1 * *valA3 + srcS1[-1]) << 1);
        char v_28;
        __builtin_memset(&v_28, 0, 0x28);
        int32_t v_24_1 = Display_CreateSurface_4();
        int32_t v_4_1 = 0;
        int32_t v_8_1 = objC2;
        int32_t v_14_1 = *srcS1;
        int32_t v_1c_1 = *ctxB[0x264] << 2;
        int32_t v_18_1 = srcS1[-1];
        int32_t v_10_1 = srcS1[1];
        int32_t v_c_1 = srcS1[2];
        valA8 = Display_RestoreDevice_4(&v_28);
        i += 1;
        srcS1 = &srcS1[4];
    } while (i < *a1);

    *a1 = 0;
    return valA8;
}

#include "gi_platform.h"
#include "00490C40-Display_SyncVSync_2.h"
bool Display_SyncVSync_2(void* a1, int32_t a2, int32_t a3)

{
    int32_t v_430 = 0x400;
    char v_400;
    Sys_CloseFileStream_7(&v_400, a2);
    char* dstD = ".qsc";
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD = &dstD[1];
        i -= 1;

        if (!cond_0_1)
            break;
    }

    int32_t objC = ~i;
    void* dstD2 = &v_400;
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool cond_1_1 = 0 != *dstD2;
        dstD2 += 1;
        i_1 -= 1;

        if (!cond_1_1)
            break;
    }

    int32_t srcS1;
    int32_t dstD4;
    dstD4 = memcpy(dstD2 - 1, dstD - objC, objC & 0xfffffffc);
    memcpy(dstD4, srcS1, objC & 3);
    (*(int32_t*)(uintptr_t)(a1 + 0x168)) = 1;
    Display_SyncVSync_13(0x5c8fb4, 1);
    void* valA1 = (*(int32_t*)(uintptr_t)(a1 + 0x154));
    int32_t v_418 = 0;
    int32_t v_414 = 0;
    float v_410 = *(valA1 + 4);
    int32_t valA2 = *(valA1 + 8);

    if (valA2 < 0)
        valA2 = -(valA2);

    float v_40c = valA2;
    Display_CheckCapabilities_13(0x5c8fb4, &v_418);
    return a3(a1, &v_400);
}

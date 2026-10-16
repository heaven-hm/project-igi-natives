#include "Sys_DuplicateLabelS.h"
int32_t* Sys_DuplicateLabelS(void* a1, int32_t a2)

{
    int32_t dstD = a2;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    int32_t objC = ~i;
    int32_t* v_84 = nullptr;
    void v_80;
    int32_t srcS1;
    int32_t dstD2;
    dstD2 = memcpy(&v_80, dstD - objC, objC & 0xfffffffc);
    memcpy(dstD2, srcS1, objC & 3);
    void* dstD3 = &v_80;
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool cond_1_1 = 0 != *dstD3;
        dstD3 += 1;
        i_1 -= 1;

        if (!cond_1_1)
            break;
    }

    int32_t saved_dst;

    if (*((&v_84 + 3) + ~i_1 - 1) == 0x3a)
        *(&saved_dst + ~i_1 - 1 + 0xb) = 0;
    DynObj_CreateMagicObject_2(*(a1 + 0x1c), &v_84, &v_80);
    int32_t* valA3 = v_84;

    if (valA3)
    {
        if (!valA3[5])
            return valA3;

        *(a1 + 4) = 1;
        void* __saved_ebp_1 = &v_80;
        void* v_98_1 = a1;
        Sys_FreeMemory_26("Duplicate label: '%s'");
        return 0;
    }

    int32_t* valA5 = Mem_Alloc(0x9c, 4);
    Symbol_CheckRegister(*(a1 + 0x1c), &v_80, valA5);
    valA5[1] = 0;
    *valA5 = 0;
    Camera_SetFieldOfView_33(a1 + 0x20, valA5);
    void* dstD4 = &v_80;
    int32_t i_2 = 0xffffffff;
    valA5[5] = 0;

    while (i_2)
    {
        bool cond_2_1 = 0 != *dstD4;
        dstD4 += 1;
        i_2 -= 1;

        if (!cond_2_1)
            break;
    }

    int32_t objC8 = ~i_2;
    int32_t srcS5;
    int32_t dstD7;
    dstD7 = memcpy(&valA5[7], dstD4 - objC8, objC8 & 0xfffffffc);
    memcpy(dstD7, srcS5, objC8 & 3);
    valA5[3] = 0;
    valA5[4] = &valA5[2];
    valA5[2] = &valA5[3];
    return valA5;
}

// Original IGI.EXE function: Menu_LocalSS (VA 0x00418EA0; static CFG gate PASS, CFG score 0.939).
#include "Menu_LocalSS.h"
int32_t* Menu_LocalSS(void* a1, int32_t a2)

{
    int32_t saved_frame = a2;
    void* v_114 = Config_English_2(*(a1 + 0x27e4));
    char v_100[0x100];
    Game_DataSymbolLoad(&v_100, "LOCAL:%s/%s");
    int32_t valA2;
    void* objC;
    int32_t tmpD;
    valA2 = Sys_CheckHeap_16(&v_100);

    if (valA2)
    {
        char (* __saved_ebp_1)[0x100] = &v_100;
        return Resource_Load(&v_100, tmpD, objC, nullptr);
    }

    for (char* i = *(a1 + 0x260); i; i = *(i + 0x84))
    {
        valA2 = Camera_UpdateTransform_6(valA2, tmpD, &v_100, &v_100, i);

        if (!valA2)
            return &i[0x40];
    }

    Qhash_Init(1);
    void* valA5 = Mem_Alloc(0x88, 4);
    int32_t v_120_1 = a2;
    Game_DataSymbolLoad(valA5 + 0x40, "RM: %s");
    char (* dstD1)[0x100] = &v_100;
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool cond_0_1 = 0 != *dstD1;
        dstD1 = &(*dstD1)[1];
        i_1 -= 1;

        if (!cond_0_1)
            break;
    }

    int32_t objC2 = ~i_1;
    int32_t srcS2;
    int32_t dstD4;
    dstD4 = memcpy(valA5, dstD1 - objC2, objC2 & 0xfffffffc);
    memcpy(dstD4, srcS2, objC2 & 3);
    Qhash_Reset();
    *(valA5 + 0x84) = *(a1 + 0x260);
    *(a1 + 0x260) = valA5;
    return valA5 + 0x40;
}

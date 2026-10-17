// Original IGI.EXE function: Level_LoadObjects_2 (VA 0x00416010; static CFG gate FAIL, CFG score 0.833).
#include "Level_LoadObjects_2.h"
uint32_t Level_LoadObjects_2()

{
    void* valA = Config_GetActivePlayerProfileRecord();
    void v_11c;
    __builtin_memset(&v_11c, 0, 0x11c);
    int32_t v_104 = Display_CheckCapabilities_7();
    char v_106 = 1;
    int32_t v_110 = 1;
    int32_t v_10c = 0x10;
    int32_t v_118 = *(valA + 0xc);
    int32_t v_114 = *(valA + 0x10);
    char v_108 = 1;
    int32_t v_110_1 = 1;
    int32_t v_10c_1 = *(valA + 0x14);
    int32_t v_104_1 = Display_CheckCapabilities_7();
    char* valA4 = valA + 0x11f;
    char v_106_1 = 1;

    if (!valA4)
        valA4 = &g_567c74;

    char* dstD = valA4;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond_1_1 = 0 != *dstD;
        dstD = &dstD[1];
        i -= 1;

        if (!cond_1_1)
            break;
    }

    int32_t objC1 = ~i;
    void v_80;
    int32_t srcS1;
    int32_t dstD2;
    dstD2 = memcpy(&v_80, dstD - objC1, objC1 & 0xfffffffc);
    char* valA6 = valA + 0x1f;
    memcpy(dstD2, srcS1, objC1 & 3);

    if (!valA6)
        valA6 = &g_567c74;

    char* dstD3 = valA6;
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool cond_3_1 = 0 != *dstD3;
        dstD3 = &dstD3[1];
        i_1 -= 1;

        if (!cond_3_1)
            break;
    }

    int32_t objC5 = ~i_1;
    void v_100;
    int32_t srcS3;
    int32_t dstD5;
    dstD5 = memcpy(&v_100, dstD3 - objC5, objC5 & 0xfffffffc);
    memcpy(dstD5, srcS3, objC5 & 3);
    Display_SetMode(&v_11c);
    return Display_SetBackgroundColourFn(-0x56, -0x7c, -0x7c);
}

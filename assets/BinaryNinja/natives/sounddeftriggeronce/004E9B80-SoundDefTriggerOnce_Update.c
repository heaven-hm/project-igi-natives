// Original IGI.EXE function: SoundDefTriggerOnce_Update (VA 0x004E9B80; static CFG gate FAIL, CFG score 0.714).
#include "SoundDefTriggerOnce_Update.h"
int32_t SoundDefTriggerOnce_Update(void* a1, int32_t* a2)

{
    int32_t* ctxB = a2;
    int32_t i = 0;

    if (ctxB[1] > 0)
    {
        do
        {
            void* dstD1 = &g_54da30;
            int32_t j = 0xffffffff;

            while (j)
            {
                bool cond_0_1 = 0 != *dstD1;
                dstD1 += 1;
                j -= 1;

                if (!cond_0_1)
                    break;
            }

            int32_t objC1 = ~j;
            int32_t dstD3 = *ctxB;
            int32_t j_1 = 0xffffffff;

            while (j_1)
            {
                bool cond_1_1 = 0 != *dstD3;
                dstD3 += 1;
                j_1 -= 1;

                if (!cond_1_1)
                    break;
            }

            ctxB = a2;
            int32_t srcS2;
            int32_t dstD5;
            dstD5 = memcpy(dstD3 - 1, dstD1 - objC1, objC1 & 0xfffffffc);
            i += 1;
            memcpy(dstD5, srcS2, objC1 & 3);
        } while (i < ctxB[1]);
    }

    char* objC6 = "TRUE";

    if (!*(a1 + 0xe1))
        objC6 = "FALSE";

    char* valA3 = "TRUE";

    if (!*(a1 + 0xe0))
        valA3 = "FALSE";

    char* v_41c = objC6;
    char* v_420 = valA3;
    int32_t v_424 = *(a1 + 0xdc);
    int32_t v_428 = *(a1 + 0xd8);
    int32_t v_42c = *(a1 + 0xd4);
    int32_t v_430 = *(a1 + 0xd0);
    double v_438 = *(a1 + 0x12c);
    double v_440 = *(a1 + 0xc8);
    double v_448 = *(a1 + 0xc4);
    double v_450 = *(a1 + 0xb8);
    int32_t v_454 = *(a1 + 0xb4);
    int32_t v_458 = *(a1 + 0xb0);
    int32_t v_45c = *(a1 + 0xac);
    int32_t v_460 = *(a1 + 0xa8);
    int32_t v_464 = *(a1 + 0xa4);
    int32_t v_468 = *(a1 + 0xa0);
    void* v_46c = a1 + 0x103;
    void* v_470 = a1 + 0xe3;
    char* v_474 = "DefineTriggerOnce";
    void v_408;
    Game_DataSymbolLoad(&v_408,
        "%s("%s", "%s", %8.08f, %8.08f, %8.08f, %8.08f, %8.08f, %8.08f, %8.08f, %d, %d, %d, %d, %s, %s");
    void* dstD6 = &v_408;
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool cond_3_1 = 0 != *dstD6;
        dstD6 += 1;
        i_1 -= 1;

        if (!cond_3_1)
            break;
    }

    int32_t objC11 = ~i_1;
    int32_t dstD8 = *a2;
    int32_t i_2 = 0xffffffff;

    while (i_2)
    {
        bool cond_4_1 = 0 != *dstD8;
        dstD8 += 1;
        i_2 -= 1;

        if (!cond_4_1)
            break;
    }

    int32_t srcS4;
    int32_t dstD10;
    dstD10 = memcpy(dstD8 - 1, dstD6 - objC11, objC11 & 0xfffffffc);
    memcpy(dstD10, srcS4, objC11 & 3);
    char* dstD11;

    if (!a2[1])
        dstD11 = ");\r\n";
    else
    {
        void* objC17 = *(*(a1 + 0x14) + 0x10);
        int32_t valA10 = *(objC17 + 4);
        int32_t valA11 = -(valA10);

        dstD11 = a1 == ((valA11 - valA11) & objC17) ? &g_547a40 : "),\r\n";
    }

    int32_t i_3 = 0xffffffff;

    while (i_3)
    {
        bool cond_5_1 = 0 != *dstD11;
        dstD11 = &dstD11[1];
        i_3 -= 1;

        if (!cond_5_1)
            break;
    }

    int32_t objC18 = ~i_3;
    int32_t dstD13 = *a2;
    int32_t i_4 = 0xffffffff;

    while (i_4)
    {
        bool cond_6_1 = 0 != *dstD13;
        dstD13 += 1;
        i_4 -= 1;

        if (!cond_6_1)
            break;
    }

    int32_t srcS6;
    int32_t dstD15;
    dstD15 = memcpy(dstD13 - 1, dstD11 - objC18, objC18 & 0xfffffffc);
    memcpy(dstD15, srcS6, objC18 & 3);
    return 0;
}

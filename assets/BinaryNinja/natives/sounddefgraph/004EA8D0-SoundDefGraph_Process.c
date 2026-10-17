// Original IGI.EXE function: SoundDefGraph_Process (VA 0x004EA8D0; static CFG gate FAIL, CFG score 0.744).
#include "SoundDefGraph_Process.h"
int32_t SoundDefGraph_Process(void* a1, int32_t* a2)

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
                bool cond_2_1 = 0 != *dstD1;
                dstD1 += 1;
                j -= 1;

                if (!cond_2_1)
                    break;
            }

            int32_t objC1 = ~j;
            int32_t dstD3 = *ctxB;
            int32_t j_1 = 0xffffffff;

            while (j_1)
            {
                bool cond_3_1 = 0 != *dstD3;
                dstD3 += 1;
                j_1 -= 1;

                if (!cond_3_1)
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

    int32_t v_424 = *(a1 + 0xe0);
    int32_t v_428 = *(a1 + 0xe4);
    int32_t v_42c = *(a1 + 0xdc);
    int32_t v_430 = *(a1 + 0xd8);
    double v_438 = *(a1 + 0xcc);
    double v_440 = *(a1 + 0xc8);
    double v_448 = *(a1 + 0xb8);
    int32_t v_44c = *(a1 + 0xb4);
    int32_t v_450 = *(a1 + 0xb0);
    int32_t v_454 = *(a1 + 0xac);
    int32_t v_458 = *(a1 + 0xa8);
    int32_t v_45c = *(a1 + 0xa4);
    int32_t v_460 = *(a1 + 0xa0);
    void* v_464 = a1 + 0x160;
    void* v_468 = a1 + 0x140;
    char* v_46c = "DefineGraph";
    void v_408;
    Game_DataSymbolLoad(&v_408,
        "%s("%s", "%s", %8.08f, %8.08f, %8.08f, %8.08f, %8.08f, %8.08f, %d, %d, %d, %d");
    void* dstD6 = &v_408;
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool cond_0_1 = 0 != *dstD6;
        dstD6 += 1;
        i_1 -= 1;

        if (!cond_0_1)
            break;
    }

    int32_t v_410_2 = 0xb;
    int32_t objC10 = ~i_1;
    int32_t dstD8 = *a2;
    int32_t i_2 = 0xffffffff;

    while (i_2)
    {
        bool cond_1_1 = 0 != *dstD8;
        dstD8 += 1;
        i_2 -= 1;

        if (!cond_1_1)
            break;
    }

    int32_t srcS4;
    int32_t dstD10;
    dstD10 = memcpy(dstD8 - 1, dstD6 - objC10, objC10 & 0xfffffffc);
    memcpy(dstD10, srcS4, objC10 & 3);
    float* v_40c = a1 + 0xe8;
    bool cond_6_1;

    do
    {
        v_428 = *v_40c;
        Game_DataSymbolLoad(&v_408, ", %8.08f");
        void* dstD11 = &v_408;
        int32_t i_3 = 0xffffffff;

        while (i_3)
        {
            bool cond_4_1 = 0 != *dstD11;
            dstD11 += 1;
            i_3 -= 1;

            if (!cond_4_1)
                break;
        }

        int32_t objC16 = ~i_3;
        int32_t dstD13 = *a2;
        int32_t i_4 = 0xffffffff;

        while (i_4)
        {
            bool cond_5_1 = 0 != *dstD13;
            dstD13 += 1;
            i_4 -= 1;

            if (!cond_5_1)
                break;
        }

        int32_t srcS6;
        int32_t dstD15;
        dstD15 = memcpy(dstD13 - 1, dstD11 - objC16, objC16 & 0xfffffffc);
        memcpy(dstD15, srcS6, objC16 & 3);
        cond_6_1 = v_410_2 != 1;
        v_40c = &v_40c[1];
        v_410_2 -= 1;
    } while (cond_6_1);
    int32_t v_410_3 = 0xb;
    float* v_40c_1 = a1 + 0x114;
    bool cond_9_1;

    do
    {
        v_428 = *v_40c_1;
        Game_DataSymbolLoad(&v_408, ", %8.08f");
        void* dstD16 = &v_408;
        int32_t i_5 = 0xffffffff;

        while (i_5)
        {
            bool cond_7_1 = 0 != *dstD16;
            dstD16 += 1;
            i_5 -= 1;

            if (!cond_7_1)
                break;
        }

        int32_t objC24 = ~i_5;
        int32_t dstD18 = *a2;
        int32_t i_6 = 0xffffffff;

        while (i_6)
        {
            bool cond_8_1 = 0 != *dstD18;
            dstD18 += 1;
            i_6 -= 1;

            if (!cond_8_1)
                break;
        }

        int32_t srcS8;
        int32_t dstD20;
        dstD20 = memcpy(dstD18 - 1, dstD16 - objC24, objC24 & 0xfffffffc);
        memcpy(dstD20, srcS8, objC24 & 3);
        cond_9_1 = v_410_3 != 1;
        v_40c_1 = &v_40c_1[1];
        v_410_3 -= 1;
    } while (cond_9_1);
    char* dstD21;

    if (!a2[1])
        dstD21 = ");\r\n";
    else
    {
        void* objC32 = *(*(a1 + 0x14) + 0x10);
        int32_t valA15 = *(objC32 + 4);
        int32_t valA16 = -(valA15);

        dstD21 = a1 == ((valA16 - valA16) & objC32) ? &g_547a40 : "),\r\n";
    }

    int32_t i_7 = 0xffffffff;

    while (i_7)
    {
        bool cond_10_1 = 0 != *dstD21;
        dstD21 = &dstD21[1];
        i_7 -= 1;

        if (!cond_10_1)
            break;
    }

    int32_t objC33 = ~i_7;
    int32_t dstD23 = *a2;
    int32_t i_8 = 0xffffffff;

    while (i_8)
    {
        bool cond_11_1 = 0 != *dstD23;
        dstD23 += 1;
        i_8 -= 1;

        if (!cond_11_1)
            break;
    }

    int32_t srcS10;
    int32_t dstD25;
    dstD25 = memcpy(dstD23 - 1, dstD21 - objC33, objC33 & 0xfffffffc);
    memcpy(dstD25, srcS10, objC33 & 3);
    return 0;
}

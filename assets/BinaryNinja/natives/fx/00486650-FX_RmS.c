#include "FX_RmS.h"
char* FX_RmS(char (** a1)[0x16], void* a2)

{
    char (** ctxB)[0x16] = a1;
    int32_t dstD = 0;
    char* result = &ctxB[0x10];
    int32_t v_28 = 0;

    while (*result)
    {
        dstD += 1;
        result = &result[0x102c];

        if (dstD >= 0x18)
            break;
    }

    if (dstD != 0x18)
    {
        void* srcS1 = a2;
        int32_t flagP2 = dstD * 0x102c;
        ctxB[dstD * 0x40b + 0x10] = 1;
        int32_t* valA4;
        int32_t objC1;
        valA4 = QTask_LinkEventHandler_2(srcS1);
        ctxB[dstD * 0x40b + 8] = valA4;
        ctxB[dstD * 0x40b + 9] = 0;
        ctxB[dstD * 0x40b + 0xa] = 0;
        ctxB[dstD * 0x40b + 0x11] = 0;
        ctxB[dstD * 0x40b + 0x12] = 0;
        ctxB[dstD * 0x40b + 0xf] = 0;

        if (*(srcS1 + 0xb4))
        {
            char (** srcS2)[0x16] = &g_540b60;
            int32_t valA7 = StatusScreen_Get();
            int32_t tmpD1 = 0;
            a1 = &g_540b60;

            while (true)
            {
                char* srcS3 = *srcS2;
                char* dstD1 = a2 + 0xb4;

                while (true)
                {
                    char valA9 = *dstD1;
                    objC1 = valA9;
                    char f1_1 = *srcS3;
                    bool c_1 = valA9 < f1_1;

                    if (valA9 == f1_1)
                    {
                        if (!objC1)
                        {
                            objC1 = 0;
                            break;
                        }

                        valA9 = dstD1[1];
                        objC1 = valA9;
                        char f4_1 = srcS3[1];
                        c_1 = valA9 < f4_1;

                        if (valA9 == f4_1)
                        {
                            dstD1 = &dstD1[2];
                            srcS3 = &srcS3[2];

                            if (objC1)
                                continue;

                            objC1 = 0;
                            break;
                        }
                    }

                    objC1 = objC1 - objC1 + 1;
                    break;
                }

                if (!objC1)
                {
                    ctxB[dstD * 0x40b + 0xf] = valA7 + tmpD1 * 0x18 + 0x38c;
                    break;
                }

                tmpD1 += 1;
                srcS2 = &a1[1];
                a1 = srcS2;

                if (tmpD1 >= 4)
                    break;
            }

            srcS1 = a2;
        }

        Qhash_Init(1);
        void* valA11 = FX_Font4Fnt(ctxB, dstD);
        int32_t* dstD2 = &ctxB[dstD * 0x40b + 0xc];
        a1 = 3;
        bool cond_1_1;

        do
        {
            *dstD2 = Sys_OpenFileStream_18(valA11, 0, 0, &g_567c74);
            dstD2 = &dstD2[1];
            cond_1_1 = a1 != 1;
            a1 -= 1;
        } while (cond_1_1);
        Qhash_Reset();

        if (*(srcS1 + 0x1b4))
        {
            int32_t v_20 = 0x3f800000;
            int32_t v_1c_1 = 0x3f800000;
            int32_t v_18_1 = 0;
            Sound_EventTrigger(srcS1 + 0x1b4, 1, &v_20);
        }

        void* tmpD3 = *(srcS1 + 0xb0);
        int32_t i = 0xffffffff;
        void* dstD3 = tmpD3;

        while (i)
        {
            bool cond_2_1 = 0 != *dstD3;
            dstD3 += 1;
            i -= 1;

            if (!cond_2_1)
                break;
        }

        int32_t valA16;
        void* objC9;
        int32_t tmpD4;

        if (~i - 1 < 0x80)
            valA16 = Sys_CheckHeap_16(tmpD3);

        if (~i - 1 >= 0x80 || !valA16)
        {
            int32_t v_3c_5 = *(srcS1 + 0xb0);
            Game_DataSymbolLoad(&ctxB[dstD * 0x40b + 0x13], "RM: %s");
        }
        else
        {
            int32_t valA17 = *(srcS1 + 0xb0);
            int32_t v_40_2 = valA17;
            int32_t* valA18 = Resource_Load(valA17, tmpD4, objC9, nullptr);
            int32_t i_1 = 0xffffffff;
            int32_t* dstD4 = valA18;

            while (i_1)
            {
                bool cond_4_1 = 0 != *dstD4;
                dstD4 += 1;
                i_1 -= 1;

                if (!cond_4_1)
                    break;
            }

            int32_t objC10 = ~i_1;
            int32_t srcS6;
            int32_t dstD7;
            dstD7 = memcpy(&ctxB[dstD * 0x40b + 0x13], dstD4 - objC10, objC10 & 0xfffffffc);
            memcpy(dstD7, srcS6, objC10 & 3);

            if (!*(a2 + 0x1c6))
                AI_CheckHearing_26(valA18);

            srcS1 = a2;
        }

        if (*(srcS1 + 0x1c6))
        {
            void* dstD8 = &ctxB[dstD * 0x40b + 0x13];
            int32_t i_2 = 0xffffffff;

            while (i_2)
            {
                bool cond_5_1 = 0 != *dstD8;
                dstD8 += 1;
                i_2 -= 1;

                if (!cond_5_1)
                    break;
            }

            ctxB[dstD * 0x40b + 0xb] = ~i_2 - 1 + flagP2 + ctxB + 0x4c;
            return ~i_2 - 1 + flagP2 + ctxB + 0x4c;
        }

        result = &ctxB[dstD * 0x40b + 0x13];
        ctxB[dstD * 0x40b + 0xb] = result;
    }

    return result;
}

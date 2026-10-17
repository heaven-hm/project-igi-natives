// Original IGI.EXE function: Physics_EvaluateAreaCriteria_13 (VA 0x0050D7E0; static CFG gate FAIL, CFG score 0.667).
#include "Physics_EvaluateAreaCriteria_13.h"
❓  int32_t Physics_EvaluateAreaCriteria_13(void* a1)
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    int32_t ctxB;
    int32_t v_10 = ctxB;
    void* ctxB1 = a1;
    int32_t flagP;
    int32_t v_14 = flagP;
    int32_t srcS1 = *(ctxB1 + 0x14);
    int32_t dstD;
    int32_t v_1c = dstD;
    int32_t dstD1 = g_a7da00;
    int32_t objC1 = dstD1 & 0x8000003c;
    void* flagP1 = *(ctxB1 + 0x24);
    int32_t objC2 = -(objC1);
    int32_t tmpD1 = srcS1 & 0x8000003c;
    void* v_4 = *(ctxB1 + 0xc);
    int32_t tmpD2 = -(tmpD1);
    int32_t v_8 = srcS1;

    if (objC2 - objC2 + 1 != tmpD2 - tmpD2 + 1 || (dstD1 ^ srcS1) & 0x60000)
    {
        *(g_bcadac + 4) = 0xffffffff;
        srcS1 = v_8;
        dstD1 = g_a7da00;
    }

    if ((dstD1 ^ srcS1) & 0x8000003c)
    {
        *(g_bcad7c + 4) = 0xffffffff;
        srcS1 = v_8;
        dstD1 = g_a7da00;
    }

    int32_t valA1 = 0;
    valA1 = !g_a7da04;
    int32_t objC11 = 0;
    objC11 = !v_4;

    if (valA1 != objC11 || (dstD1 ^ srcS1) & 0x1400000)
    {
        *(g_bcade8 + 4) = 0xffffffff;
        srcS1 = v_8;
    }

    int32_t objC12 = g_a7ced8;
    g_a7da04 = v_4;
    void* valA4 = g_bcade8;
    g_a7da00 = srcS1;

    if (*(valA4 + 4) != objC12)
    {
        *(valA4 + 4) = objC12;
        (*(g_bcade8 + (g_a7ced8 << 2) + 0x14))(&v_8);
    }

    void* valA6 = g_bcad7c;
    int32_t objC13 = g_a7d9f8;

    if (*(valA6 + 4) != objC13)
    {
        *(valA6 + 4) = objC13;
        (*(g_bcad7c + (g_a7d9f8 << 2) + 0x14))(&v_8);
    }

    void* valA8 = g_bcadac;
    int32_t objC14 = g_a7d9f4;

    if (*(valA8 + 4) != objC14)
    {
        *(valA8 + 4) = objC14;
        (*(g_bcadac + (g_a7d9f4 << 2) + 0x14))(&v_8);
    }

    void* valA10 = g_bcadc4;
    int32_t objC15 = g_bcacec;

    if (*(valA10 + 4) != objC15)
    {
        *(valA10 + 4) = objC15;
        (*(g_bcadc4 + (g_bcacec << 2) + 0x14))(&v_8);
    }

    void** v_24;

    if (v_4)
    {
        int32_t* valA13 = g_5ca114;
        int32_t tmpD14 = *(*(ctxB1 + 0xc) + 0x20);
        int32_t objC16 = *valA13;
        v_24 = nullptr;
        (*(objC16 + 0x8c))(valA13, v_24, tmpD14);
    }

    int32_t valA15 = *(ctxB1 + 0x1c);
    int32_t result;
    void*** esp;
    void** v_30;

    if (!*(ctxB1 + 0x20))
    {
        int32_t tmpD21 = g_bcad08;
        int32_t* valA26;

        if (valA15 <= 2)
        {
            bool cond_2_1 = tmpD21 + 4 > g_bcad04;
            int32_t* valA28 = g_bcad00;
            int32_t v_20_8 = 0;
            int32_t objC46 = *valA28;
            v_24 = &a1;
            void* tmpD30;
            void** ctxB3;

            if (cond_2_1)
            {
                result = (*(objC46 + 0xc))(valA28, 0x2020);
                esp = &v_24;
                ctxB3 = nullptr;
                g_bcad08 = 4;

                if (!result)
                {
                    tmpD30 = v_4;
                label_50db91:

                    if (tmpD30)
                    {
                        memcpy(tmpD30, flagP1, 0x1c);
                        memcpy(v_4 + 0x54, flagP1 + 0x1c, 0x1c);
                        memcpy(v_4 + 0x1c, flagP1, 0x1c);
                        *(v_4 + 0x1c) = *(flagP1 + 0x1c);
                        *(v_4 + 0x30) = *(flagP1 + 0x30);
                        memcpy(v_4 + 0x38, flagP1, 0x1c);
                        *(v_4 + 0x3c) = *(flagP1 + 0x20);
                        *(v_4 + 0x50) = *(flagP1 + 0x34);
                        int32_t* valA33 = g_bcad00;
                        (*(*valA33 + 0x10))(valA33);
                        valA26 = g_5ca114;
                        int32_t v_28_12 = 0;
                        int32_t v_2c_8 = 4;
                        v_30 = ctxB3;
                        result = (*(*valA26 + 0x7c))(valA26, 5, g_bcad00);
                        esp = &v_30;
                    }
                }
            }
            else
            {
                result = (*(objC46 + 0xc))(valA28, 0x20);
                esp = &v_24;
                void** objC47 = g_bcad08;
                ctxB3 = objC47;
                g_bcad08 = &objC47[1];
                tmpD30 = v_4 + objC47 * 0x1c;
                v_4 = tmpD30;

                if (!result)
                    goto label_50db91;
            }
        }
        else
        {
            bool cond_3_1 = valA15 + tmpD21 > g_bcad04;
            int32_t* valA23 = g_bcad00;
            int32_t v_20_7 = 0;
            int32_t objC33 = *valA23;
            v_24 = &a1;
            void** v_14_3;
            void* tmpD24;

            if (cond_3_1)
            {
                result = (*(objC33 + 0xc))(valA23, 0x2020);
                esp = &v_24;
                v_14_3 = nullptr;
                g_bcad08 = *(ctxB1 + 0x1c);

                if (!result)
                {
                    tmpD24 = v_4;
                label_50dad7:

                    if (tmpD24)
                    {
                        int32_t objC39 = *(ctxB1 + 0x1c) * 0x1c;
                        int32_t srcS6;
                        int32_t dstD11;
                        dstD11 = memcpy(tmpD24, flagP1, objC39 & 0xfffffffc);
                        memcpy(dstD11, srcS6, objC39 & 3);
                        int32_t* valA25 = g_bcad00;
                        (*(*valA25 + 0x10))(valA25);
                        valA26 = g_5ca114;
                        int32_t v_28_8 = 0;
                        int32_t v_2c_5 = *(ctxB1 + 0x1c);
                        int32_t tmpD26 = *valA26;
                        v_30 = v_14_3;
                        result = (*(tmpD26 + 0x7c))(valA26, 5, g_bcad00);
                        esp = &v_30;
                    }
                }
            }
            else
            {
                result = (*(objC33 + 0xc))(valA23, 0x20);
                esp = &v_24;
                void** objC34 = g_bcad08;
                v_14_3 = objC34;
                tmpD24 = v_4 + objC34 * 0x1c;
                void* v_4_2 = tmpD24;
                g_bcad08 = objC34 + *(ctxB1 + 0x1c);

                if (!result)
                    goto label_50dad7;
            }
        }
    }
    else
    {
        bool cond_1_1 = valA15 + g_bcad08 > g_bcad04;
        int32_t* valA17 = g_bcad00;
        int32_t v_20_6 = 0;
        v_24 = &a1;
        int32_t objC18 = *valA17;
        void* tmpD18;

        if (cond_1_1)
        {
            result = (*(objC18 + 0xc))(valA17, 0x2020);
            esp = &v_24;
            int32_t v_14_2 = 0;
            g_bcad08 = *(ctxB1 + 0x1c);

            if (!result)
            {
                tmpD18 = v_4;
            label_50d9f9:

                if (tmpD18)
                {
                    int32_t objC24 = *(ctxB1 + 0x1c) * 0x1c;
                    int32_t srcS3;
                    int32_t dstD6;
                    dstD6 = memcpy(tmpD18, flagP1, objC24 & 0xfffffffc);
                    memcpy(dstD6, srcS3, objC24 & 3);
                    int32_t* valA19 = g_bcad00;
                    (*(*valA19 + 0x10))(valA19);
                    int32_t* valA20 = g_5ca114;
                    int32_t v_2c_2 = 0;
                    v_30 = *(ctxB1 + 0x1c);
                    int32_t srcS;
                    int32_t v_34_1 = srcS;
                    return (*(*valA20 + 0x7c))(valA20, 3, g_bcad00);
                }
            }
        }
        else
        {
            result = (*(objC18 + 0xc))(valA17, 0x20);
            esp = &v_24;
            int32_t objC19 = g_bcad08;
            int32_t v_14_1 = objC19;
            tmpD18 = v_4 + objC19 * 0x1c;
            void* v_4_1 = tmpD18;
            g_bcad08 = objC19 + *(ctxB1 + 0x1c);

            if (!result)
                goto label_50d9f9;
        }
    }
❓️    *esp;
    esp[1];
    esp[2];
    esp[3];
    return result;
}

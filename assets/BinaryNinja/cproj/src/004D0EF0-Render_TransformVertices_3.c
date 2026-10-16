#include "gi_platform.h"
#include "004D0EF0-Render_TransformVertices_3.h"
void** Render_TransformVertices_3()

{
    g_b16c98 = Mem_Alloc(0x3e80, 4);
    int32_t valA1 = 0;
    int32_t v_10 = 0;

    while (true)
    {
        int32_t objC1 = 0;
        int32_t v_18_1 = 0xffffffff;
        int32_t tmpD4 = valA1 & 3;
        bool cond_6_1;

        do
        {
            int32_t i_7 = 0xffffffff;
            int32_t i_5 = 1;
            bool cond_5_1;

            do
            {
                int32_t i_6 = 0xffffffff;

                for (int32_t i = 1; i > 0xfffffffe; )
                {
                    int32_t i_4 = i_6;
                    int32_t i_8 = i_7;

                    if (valA1 & 4)
                        i_4 = i;

                    if (tmpD4 == 1)
                    {
                        i_8 = i_4;
                        i_4 = i_5;
                    }
                    else if (tmpD4 == 2)
                    {
                        i_8 = i_5;
                        i_4 = -(i_4);
                    }
                    else if (tmpD4 == 3)
                    {
                        int32_t i_9 = i_4;
                        i_4 = i_7;
                        i_8 = -(i_9);
                    }

                    int32_t tmpD7 = 0;

                    if (i_4 < 0)
                        tmpD7 = 1;

                    if (i_4 > 0)
                        tmpD7 |= 2;

                    bool cond_1_1 = i_8 <= 0;

                    if (i_8 < 0)
                    {
                        tmpD7 |= 4;
                        cond_1_1 = i_8 <= 0;
                    }

                    if (!cond_1_1)
                        tmpD7 |= 8;

                    bool cond_2_1 = v_18_1 <= 0;

                    if (v_18_1 < 0)
                    {
                        tmpD7 |= 0x10;
                        cond_2_1 = v_18_1 <= 0;
                    }

                    if (!cond_2_1)
                        tmpD7 |= 0x20;

                    int32_t valA4 = 1 << (objC1 & 0x1f);
                    objC1 += 1;
                    i_6 += 1;
                    i -= 1;
                    *((((valA1 << 6) + tmpD7) << 2) + &g_a50ffc) = valA4;
                }

                i_7 += 1;
                cond_5_1 = i_5 - 1 > 0xfffffffe;
                i_5 -= 1;
            } while (cond_5_1);
            cond_6_1 = v_18_1 + 1 < 2;
            v_18_1 += 1;
        } while (cond_6_1);
        bool cond_7_1 = v_10 + 1 < 8;
        v_10 += 1;

        if (!cond_7_1)
            break;

        valA1 = v_10;
    }

    int32_t objC2 = 0;

    for (char* i_1 = &g_b12be0; i_1 < &g_b12c20; )
    {
        for (int32_t j = 0; j < 8; j += 1)
        {
            char tmpD8;
            char ctxB1;

            if (i_1 >= 0xb12c00)
            {
                tmpD8 = (objC2 - j) & 3;
                ctxB1 = ~j;
            }
            else
            {
                ctxB1 = j;
                tmpD8 = (j + objC2) & 3;
            }

            i_1[j] = tmpD8 + (ctxB1 & 4);
        }

        i_1 = &i_1[8];
        objC2 += 1;
    }

    int32_t dstD1 = 0;

    for (int32_t i_2 = 0xb12340; i_2 < &g_b12b40; )
    {
        for (int32_t j_1 = 0; j_1 < 0x100; j_1 += 1)
        {
            char* srcS3 = nullptr;

            for (int32_t k = 0; k < 8; k += 1)
            {
                if (j_1 & 1 << (k & 0x1f))
                    srcS3 |= 1 << (*(((dstD1 + k) << 2) + &g_548060) & 0x1f);
            }

            srcS3[i_2] = j_1;
        }

        i_2 += 0x100;
        dstD1 += 8;
    }

    void* tmpD9 = nullptr;
    int32_t v_18_2 = 0;
    bool cond_9_1;

    do
    {
        int32_t v_14_1 = 0;
        bool cond_8_1;

        do
        {
            for (int32_t i_3 = 0; i_3 < 3; i_3 += 1)
            {
                *(tmpD9 + 0xa4ef14) = 0;

                for (int32_t j_2 = 0; j_2 < 8; j_2 += 1)
                {
                    char valA17;

                    valA17 = (i_3 == 1 || i_3 >> 1 == (j_2 & 1))
                        && (v_14_1 == 1 || v_14_1 == (j_2 & 2))
                        && (v_18_2 == 1 || v_18_2 * 2 == (j_2 & 4)) ? 1 : 0;

                    *(tmpD9 + 0xa4ef14) |= valA17 << (j_2 & 0x1f);
                }

                if (!(i_3 & 1) && !(v_14_1 & 1) && !(v_18_2 & 1))
                    *(tmpD9 + 0xa4ef14) = 0;

                tmpD9 += 1;
            }

            cond_8_1 = v_14_1 + 1 < 3;
            v_14_1 += 1;
        } while (cond_8_1);
        cond_9_1 = v_18_2 + 1 < 3;
        v_18_2 += 1;
    } while (cond_9_1);
    QTask_CleanupEvents(0, 0xf);
    QTask_CleanupEvents(0, 0x10);
    QTask_CleanupEvents(0, 0x11);
    QTask_CleanupEvents(0, 0x12);
    QTask_CleanupTypes_2(0xf, 7);
    QTask_CleanupTypes_2(0x10, 8);
    g_548441 = QTask_UnableToAllocateEvent(0x181);
    g_548440 = QTask_UnableToAllocateEvent(0x181);
    Render_NoMoreQcubeCallbacks(1);
    return Render_CallbackNotFound(1);
}

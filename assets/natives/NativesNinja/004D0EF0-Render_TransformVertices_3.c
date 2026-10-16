#include "004D0EF0-Render_TransformVertices_3.h"
/* 0x004d0ef0 Render_TransformVertices_3 full linked: callers=1 callees=11 */
void** sub_4d0ef0()

{
    g_b16c98 = Mem_Alloc(0x3e80, 4);
    int32_t eax_1 = 0;
    int32_t var_10 = 0;

    while (true)
    {
        int32_t ecx_1 = 0;
        int32_t var_18_1 = 0xffffffff;
        int32_t edx_4 = eax_1 & 3;
        bool cond:6_1;

        do
        {
            int32_t i_7 = 0xffffffff;
            int32_t i_5 = 1;
            bool cond:5_1;

            do
            {
                int32_t i_6 = 0xffffffff;

                for (int32_t i = 1; i > 0xfffffffe; )
                {
                    int32_t i_4 = i_6;
                    int32_t i_8 = i_7;

                    if (eax_1 & 4)
                        i_4 = i;

                    if (edx_4 == 1)
                    {
                        i_8 = i_4;
                        i_4 = i_5;
                    }
                    else if (edx_4 == 2)
                    {
                        i_8 = i_5;
                        i_4 = -(i_4);
                    }
                    else if (edx_4 == 3)
                    {
                        int32_t i_9 = i_4;
                        i_4 = i_7;
                        i_8 = -(i_9);
                    }

                    int32_t edx_7 = 0;

                    if (i_4 < 0)
                        edx_7 = 1;

                    if (i_4 > 0)
                        edx_7 |= 2;

                    bool cond:1_1 = i_8 <= 0;

                    if (i_8 < 0)
                    {
                        edx_7 |= 4;
                        cond:1_1 = i_8 <= 0;
                    }

                    if (!cond:1_1)
                        edx_7 |= 8;

                    bool cond:2_1 = var_18_1 <= 0;

                    if (var_18_1 < 0)
                    {
                        edx_7 |= 0x10;
                        cond:2_1 = var_18_1 <= 0;
                    }

                    if (!cond:2_1)
                        edx_7 |= 0x20;

                    int32_t eax_4 = 1 << (ecx_1 & 0x1f);
                    ecx_1 += 1;
                    i_6 += 1;
                    i -= 1;
                    *((((eax_1 << 6) + edx_7) << 2) + &g_a50ffc) = eax_4;
                }

                i_7 += 1;
                cond:5_1 = i_5 - 1 > 0xfffffffe;
                i_5 -= 1;
            } while (cond:5_1);
            cond:6_1 = var_18_1 + 1 < 2;
            var_18_1 += 1;
        } while (cond:6_1);
        bool cond:7_1 = var_10 + 1 < 8;
        var_10 += 1;

        if (!cond:7_1)
            break;

        eax_1 = var_10;
    }

    int32_t ecx_2 = 0;

    for (char* i_1 = &g_b12be0; i_1 < &g_b12c20; )
    {
        for (int32_t j = 0; j < 8; j += 1)
        {
            char edx_8;
            char ebx_1;

            if (i_1 >= 0xb12c00)
            {
                edx_8 = (ecx_2 - j) & 3;
                ebx_1 = ~j;
            }
            else
            {
                ebx_1 = j;
                edx_8 = (j + ecx_2) & 3;
            }

            i_1[j] = edx_8 + (ebx_1 & 4);
        }

        i_1 = &i_1[8];
        ecx_2 += 1;
    }

    int32_t edi_1 = 0;

    for (int32_t i_2 = 0xb12340; i_2 < &g_b12b40; )
    {
        for (int32_t j_1 = 0; j_1 < 0x100; j_1 += 1)
        {
            char* esi_3 = nullptr;

            for (int32_t k = 0; k < 8; k += 1)
            {
                if (j_1 & 1 << (k & 0x1f))
                    esi_3 |= 1 << (*(((edi_1 + k) << 2) + &g_548060) & 0x1f);
            }

            esi_3[i_2] = j_1;
        }

        i_2 += 0x100;
        edi_1 += 8;
    }

    void* edx_9 = nullptr;
    int32_t var_18_2 = 0;
    bool cond:9_1;

    do
    {
        int32_t var_14_1 = 0;
        bool cond:8_1;

        do
        {
            for (int32_t i_3 = 0; i_3 < 3; i_3 += 1)
            {
                *(edx_9 + 0xa4ef14) = 0;

                for (int32_t j_2 = 0; j_2 < 8; j_2 += 1)
                {
                    char eax_17;

                    eax_17 = (i_3 == 1 || i_3 >> 1 == (j_2 & 1))
                        && (var_14_1 == 1 || var_14_1 == (j_2 & 2))
                        && (var_18_2 == 1 || var_18_2 * 2 == (j_2 & 4)) ? 1 : 0;

                    *(edx_9 + 0xa4ef14) |= eax_17 << (j_2 & 0x1f);
                }

                if (!(i_3 & 1) && !(var_14_1 & 1) && !(var_18_2 & 1))
                    *(edx_9 + 0xa4ef14) = 0;

                edx_9 += 1;
            }

            cond:8_1 = var_14_1 + 1 < 3;
            var_14_1 += 1;
        } while (cond:8_1);
        cond:9_1 = var_18_2 + 1 < 3;
        var_18_2 += 1;
    } while (cond:9_1);
    QTask_CleanupEvents(0, 0xf);
    QTask_CleanupEvents(0, 0x10);
    QTask_CleanupEvents(0, 0x11);
    QTask_CleanupEvents(0, 0x12);
    QTask_CleanupTypes_2(0xf, 7);
    QTask_CleanupTypes_2(0x10, 8);
    g_548441 = QTask_UnableToAllocateEven(0x181);
    g_548440 = QTask_UnableToAllocateEven(0x181);
    sub_4d2b80(1);
    return sub_4d2bd0(1);
}

#include "00517C90-Terrain_RenderQuadtree_7.h"
/* 0x00517c90 Terrain_RenderQuadtree_7 full linked: callers=1 callees=0 */
int16_t* sub_517c90(char* a1, int32_t a2, int16_t* a3, int16_t* a4, int32_t a5, int32_t a6, int32_t* a7)

{
    int32_t ecx;
    int32_t var_4 = ecx;
    int32_t eax;
    int32_t ecx_1;
    int32_t esi;

    if (!a7)
    {
        ecx_1 = a5;
        esi = 0;
        eax = 0;
        a5 = ecx_1;
        a6 = a6;
    }
    else
    {
        ecx_1 = a5;
        esi = *a7;
        int32_t ebx_1 = a7[2];
        eax = a7[1];
        a5 = ebx_1;
        int32_t edi_2 = ecx_1 - esi;

        if (ebx_1 >= edi_2)
            a5 = edi_2;

        int32_t edx_1 = a7[3];
        int32_t edi_4 = a6 - eax;

        a6 = edx_1 < edi_4 ? edx_1 : edi_4;
    }

    a7 = nullptr;
    int16_t* result = &a4[eax * ecx_1 + esi];

    if (a3 > 0)
    {
        int32_t edx_4 = a2;
        int16_t* result_1 = result;
        char* esi_1 = &a1[2];
        a4 = result_1;
        a1 = esi_1;
        bool cond:0_1;

        do
        {
            int32_t ebp_1 = 0;

            if (edx_4 > 0)
            {
                do
                {
                    int32_t ecx_3;

                    if (ebp_1 < a5)
                        ecx_3 = a6;

                    char eax_9;
                    char ecx_5;
                    char edx_7;
                    char ebx_4;

                    if (ebp_1 >= a5 || a7 >= ecx_3)
                    {
                        ecx_5 = 0;
                        edx_7 = 0;
                        ebx_4 = 0;
                        eax_9 = 0;
                    }
                    else
                    {
                        ecx_3 = *result_1;
                        int32_t eax_6 = ecx_3 & 0x8000;
                        int32_t eax_7 = -(eax_6);
                        eax_9 = eax_7 - eax_7;
                        ebx_4 = ecx_3 >> 7 & 0xf8;
                        edx_7 = ecx_3 >> 2 & 0xf8;
                        ecx_5 = (ecx_3 & 0x1f) << 3;
                    }

                    esi_1[1] = eax_9;
                    *esi_1 = ebx_4;
                    esi_1[0xffffffff] = edx_7;
                    esi_1[0xfffffffe] = ecx_5;
                    ebp_1 += 1;
                    result_1 = &result_1[1];
                    esi_1 = &esi_1[4];
                } while (ebp_1 < a2);

                edx_4 = a2;
            }

            esi_1 = &a1[edx_4 << 2];
            result = a3;
            result_1 = &a4[ecx_1];
            cond:0_1 = a7 + 1 < result;
            a7 += 1;
            a4 = result_1;
            a1 = esi_1;
        } while (cond:0_1);
    }

    return result;
}

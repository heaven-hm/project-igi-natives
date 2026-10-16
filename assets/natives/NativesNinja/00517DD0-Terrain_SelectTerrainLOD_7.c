#include "00517DD0-Terrain_SelectTerrainLOD_7.h"
/* 0x00517dd0 Terrain_SelectTerrainLOD_7 full linked: callers=1 callees=0 */
int16_t* sub_517dd0(char* a1, int32_t a2, int16_t* a3, int16_t* a4, int32_t a5, int32_t a6, int32_t* a7)

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
                    int32_t* eax_4;

                    if (ebp_1 < a5)
                        eax_4 = a7;

                    char eax_6;
                    char ecx_6;
                    char edx_6;
                    char ebx_2;

                    if (ebp_1 >= a5 || eax_4 >= a6)
                    {
                        eax_6 = 0;
                        ecx_6 = 0;
                        edx_6 = 0;
                        ebx_2 = 0;
                    }
                    else
                    {
                        eax_4 = *result_1;
                        edx_6 = *(&eax_4 + 1) & 0xf8;
                        ecx_6 = eax_4 >> 3 & 0xfc;
                        ebx_2 = -1;
                        eax_6 = (eax_4 & 0x1f) << 3;
                    }

                    esi_1[1] = ebx_2;
                    *esi_1 = edx_6;
                    esi_1[0xffffffff] = ecx_6;
                    esi_1[0xfffffffe] = eax_6;
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

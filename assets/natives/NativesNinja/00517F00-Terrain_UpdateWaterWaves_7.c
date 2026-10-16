#include "00517F00-Terrain_UpdateWaterWaves_7.h"
/* 0x00517f00 Terrain_UpdateWaterWaves_7 full linked: callers=1 callees=0 */
int32_t* sub_517f00(int32_t* a1, int32_t a2, int32_t* a3, int32_t a4, int32_t a5, int32_t a6, int32_t* a7)

{
    int32_t eax;
    int32_t edx;
    int32_t edi;

    if (!a7)
    {
        edx = a5;
        edi = 0;
        eax = 0;
        a5 = edx;
        a6 = a6;
    }
    else
    {
        edx = a5;
        edi = *a7;
        int32_t ebx_1 = a7[2];
        eax = a7[1];
        a5 = ebx_1;
        int32_t esi_2 = edx - edi;

        if (ebx_1 >= esi_2)
            a5 = esi_2;

        int32_t ecx = a7[3];
        int32_t ebx_3 = a6 - eax;

        a6 = ecx < ebx_3 ? ecx : ebx_3;
    }

    int32_t ebx_4 = 0;
    int32_t* result = ((eax * edx + edi) << 4) + a4;

    if (a3 > 0)
    {
        int32_t* esi_4 = a1;
        int32_t* result_1 = result;
        a7 = result_1;

        do
        {
            int32_t edx_2 = 0;

            if (a2 > 0)
            {
                int32_t* eax_4 = esi_4;

                do
                {
                    int32_t ecx_2;

                    if (edx_2 >= a5 || ebx_4 >= a6)
                        ecx_2 = 0;
                    else
                        ecx_2 = *(result_1 - esi_4 + eax_4);

                    *eax_4 = ecx_2;
                    edx_2 += 1;
                    eax_4 = &eax_4[1];
                } while (edx_2 < a2);
            }

            ebx_4 += 1;
            esi_4 = &esi_4[a2];
            result = a3;
            result_1 = &a7[edx];
            a7 = result_1;
        } while (ebx_4 < result);
    }

    return result;
}

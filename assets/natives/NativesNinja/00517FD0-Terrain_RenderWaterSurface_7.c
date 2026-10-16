#include "00517FD0-Terrain_RenderWaterSurface_7.h"
/* 0x00517fd0 Terrain_RenderWaterSurface_7 full linked: callers=1 callees=0 */
void* sub_517fd0(void* a1, int32_t a2, int32_t a3, int32_t a4, char* a5, int32_t a6, int32_t* a7, int32_t a8, int32_t* a9)

{
    int32_t* edx_12 = a9;
    int32_t eax;
    int32_t ecx;
    int32_t* ebx;

    if (!edx_12)
    {
        ebx = a7;
        ecx = 0;
        eax = 0;
        a9 = ebx;
        a8 = a8;
    }
    else
    {
        ebx = a7;
        ecx = *edx_12;
        int32_t* edi_1 = edx_12[2];
        eax = edx_12[1];
        a9 = edi_1;
        int32_t* esi_2 = ebx - ecx;

        if (edi_1 >= esi_2)
            a9 = esi_2;

        int32_t edx = edx_12[3];
        int32_t edi_3 = a8 - eax;

        a8 = edx < edi_3 ? edx : edi_3;
    }

    int32_t ebp = a4;
    void* var_8;

    if (ebp)
        var_8 = eax * ebx + ecx + ebp;

    int32_t edx_5 = 0;
    int32_t var_4 = 0;
    char* ecx_1 = eax * ebx + ecx + a5;
    void* result = a1;
    a5 = ecx_1;
    a1 = result;

    if (a3 > 0)
    {
        do
        {
            int32_t edi_5 = 0;

            if (a2 > 0)
            {
                char* eax_4 = result + 3;
                void* ebp_2 = var_8 - ecx_1;

                do
                {
                    if (edi_5 >= a9 || edx_5 >= a8)
                    {
                        *eax_4 = 0;
                        eax_4[0xffffffff] = 0;
                        eax_4[0xfffffffe] = 0;
                        eax_4[0xfffffffd] = 0;
                    }
                    else
                    {
                        char edx_7;

                        if (!a4)
                        {
                            char edx_8 = *ecx_1;
                            char temp0_1 = edx_8;
                            edx_8 = -(edx_8);
                            edx_7 = (edx_8 - edx_8) & 0xff;
                        }
                        else
                            edx_7 = *(ecx_1 + ebp_2);

                        *eax_4 = edx_7;
                        int32_t edx_9 = 0;
                        edx_9 = *ecx_1;
                        eax_4[0xffffffff] = *(a6 + (edx_9 << 2) + 2);
                        int32_t ebx_3 = 0;
                        ebx_3 = *ecx_1;
                        eax_4[0xfffffffe] = *(a6 + (ebx_3 << 2) + 1);
                        int32_t ebx_5 = 0;
                        ebx_5 = *ecx_1;
                        eax_4[0xfffffffd] = *(a6 + (ebx_5 << 2));
                        edx_5 = var_4;
                    }

                    edi_5 += 1;
                    ecx_1 = &ecx_1[1];
                    eax_4 = &eax_4[4];
                } while (edi_5 < a2);

                ebx = a7;
                ebp = a4;
                ecx_1 = a5;
                result = a1;
            }

            if (ebp)
                var_8 += ebx;

            ecx_1 += ebx;
            edx_5 += 1;
            result += a2 << 2;
            a5 = ecx_1;
            a1 = result;
            var_4 = edx_5;
        } while (edx_5 < a3);
    }

    return result;
}

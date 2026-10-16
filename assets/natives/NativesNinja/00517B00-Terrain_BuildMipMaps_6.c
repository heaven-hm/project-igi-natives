#include "00517B00-Terrain_BuildMipMaps_6.h"
/* 0x00517b00 Terrain_BuildMipMaps_6 full linked: callers=1 callees=0 */
int32_t sub_517b00(int32_t a1, int32_t* a2, int32_t* a3, int32_t a4)

{
    int32_t* ecx = a3;
    int32_t result = a4 >> 1;
    int32_t ebx_1 = ecx >> 1;
    int32_t var_8 = ebx_1;

    if (result > 0)
    {
        int32_t edx_1 = a1;
        int32_t esi_1 = ecx << 3;
        a3 = a2;
        int32_t var_4_1 = esi_1;
        int32_t* edi_2 = &a2[ecx];
        a1 = result;
        a2 = edi_2;
        bool cond:1_1;

        do
        {
            int32_t* eax_1 = a3;
            int32_t ecx_1 = edx_1 + (ebx_1 << 2);
            a4 = edx_1;
            int32_t var_c_1 = ecx_1;

            if (edx_1 < ecx_1)
            {
                while (true)
                {
                    int32_t ecx_2 = *eax_1;
                    int32_t edx_2 = eax_1[1];
                    int32_t esi_2 = *edi_2;
                    int32_t eax_4 = edi_2[1];
                    int32_t edi_11 = (((esi_2 & 0xff00) + (edx_2 & 0xff00) + (ecx_2 & 0xff00)
                        + (eax_4 & 0xff00) + 2) & 0x3fc00) | (((eax_4 & 0xff0000) + (esi_2 & 0xff0000)
                        + (edx_2 & 0xff0000) + (ecx_2 & 0xff0000) + 2) & 0x3fc0000);
                    ecx_1 = var_c_1;
                    int32_t edi_14 = (edi_11 | (eax_4 + esi_2 + edx_2 + ecx_2 + 2)) >> 2 | (((
                        eax_4 >> 2 & 0x3fc00000) + (esi_2 >> 2 & 0x3fc00000) + (edx_2 >> 2 & 0x3fc00000)
                        + (ecx_2 >> 2 & 0x3fc00000) + 0x800000) & 0xff000000);
                    *a4 = edi_14;
                    bool cond:3_1 = a4 + 4 < ecx_1;
                    a4 += 4;

                    if (!cond:3_1)
                        break;

                    eax_1 = &eax_1[2];
                    edi_2 = &edi_2[2];
                }

                ebx_1 = var_8;
                esi_1 = var_4_1;
            }

            edx_1 = ecx_1;
            a3 += esi_1;
            edi_2 = a2 + esi_1;
            result = a1 - 1;
            cond:1_1 = a1 != 1;
            a2 = edi_2;
            a1 = result;
        } while (cond:1_1);
    }

    return result;
}

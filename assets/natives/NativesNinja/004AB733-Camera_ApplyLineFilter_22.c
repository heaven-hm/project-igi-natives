#include "004AB733-Camera_ApplyLineFilter_22.h"
/* 0x004ab733 Camera_ApplyLineFilter_22 full linked: callers=1 callees=2 */
void sub_4ab733(int32_t a1)

{
    int32_t ecx;
    int32_t var_8 = ecx;
    int32_t* esi = g_5446b4;

    do
    {
        if (esi[4] != 0xffffffff)
        {
            int32_t var_8_1 = 0;
            int32_t* edi_1 = &esi[0x804];
            BOOL eax;

            for (int32_t j = 0x3ff000; j >= 0; )
            {
                if (*edi_1 == 0xf0 && VirtualFree(j + esi[4], 0x1000, MEM_DECOMMIT))
                {
                    *edi_1 = 0xffffffff;
                    g_936200 -= 1;
                    eax = esi[3];

                    if (!eax || eax > edi_1)
                        esi[3] = edi_1;

                    var_8_1 += 1;
                    int32_t temp0_1 = a1;
                    a1 -= 1;

                    if (temp0_1 == 1)
                        break;
                }

                j -= 0x1000;
                edi_1 -= 8;
            }

            int32_t* ecx_1 = esi;
            esi = esi[1];

            if (var_8_1 && ecx_1[6] == 0xffffffff)
            {
                eax = &ecx_1[8];
                int32_t edx_1 = 1;

                while (*eax == 0xffffffff)
                {
                    edx_1 += 1;
                    eax += 8;

                    if (edx_1 >= 0x400)
                        break;
                }

                if (edx_1 == 0x400)
                    sub_4ab6dd(ecx_1);
            }
        }

        if (esi == g_5446b4)
            break;
    } while (a1 > 0);
}

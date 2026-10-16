#include "004A6F6F-Camera_SetFieldOfView_10.h"
/* 0x004a6f6f Camera_SetFieldOfView_10 full linked: callers=1 callees=1 */
int32_t* sub_4a6f6f(PSTR a1, char* a2, int32_t a3, int32_t* a4)

{
    int32_t ecx;
    int32_t var_8 = ecx;
    int32_t var_c = ecx;
    int32_t esi = g_936214;
    char* edi = a2;
    int32_t var_c_1 = 0;
    int32_t var_8_1 = 0;
    char eax = *edi;
    int32_t ecx_1;
    int32_t esi_1;

    if (eax == 0x61)
    {
        ecx_1 = 0x109;
    label_4a6fad:
        esi_1 = esi | 2;
    label_4a6fb2:
        int32_t edx_1 = 1;

        while (true)
        {
            eax = edi[1];
            edi = &edi[1];

            if (!eax)
                break;

            if (!edx_1)
                break;

            int32_t eax_1 = eax;

            if (eax_1 > 0x54)
            {
                if (eax_1 == 0x62)
                {
                    if (!(*(&ecx_1 + 1) & 0xc0))
                    {
                        *(&ecx_1 + 1) |= 0x80;
                        continue;
                    }
                }
                else if (eax_1 == 0x63)
                {
                    if (!var_c_1)
                    {
                        var_c_1 = 1;
                        esi_1 |= 0x4000;
                        continue;
                    }
                }
                else if (eax_1 == 0x6e)
                {
                    if (!var_c_1)
                    {
                        var_c_1 = 1;
                        esi_1 &= 0xffffbfff;
                        continue;
                    }
                }
                else if (eax_1 == 0x74 && !(*(&ecx_1 + 1) & 0xc0))
                {
                    *(&ecx_1 + 1) |= 0x40;
                    continue;
                }
            }
            else if (eax_1 == 0x54)
            {
                if (!(0x1000 & ecx_1))
                {
                    ecx_1 |= 0x1000;
                    continue;
                }
            }
            else if (eax_1 == 0x2b)
            {
                if (!(ecx_1 & 2))
                {
                    ecx_1 = (ecx_1 & 0xfffffffe) | 2;
                    esi_1 = (esi_1 & 0xfffffffc) | 0x80;
                    continue;
                }
            }
            else if (eax_1 == 0x44)
            {
                if (!(ecx_1 & 0x40))
                {
                    ecx_1 |= 0x40;
                    continue;
                }
            }
            else if (eax_1 == 0x52)
            {
                if (!var_8_1)
                {
                    var_8_1 = 1;
                    ecx_1 |= 0x10;
                    continue;
                }
            }
            else if (eax_1 == 0x53 && !var_8_1)
            {
                var_8_1 = 1;
                ecx_1 |= 0x20;
                continue;
            }

            edx_1 = 0;
        }

        int32_t var_20_1 = a3;
        int32_t eax_3 = sub_4ac367(a1, ecx_1, 0xa4);

        if (eax_3 >= 0)
        {
            g_936210 += 1;
            a4[3] = esi_1;
            a4[1] = 0;
            *a4 = 0;
            a4[2] = 0;
            a4[7] = 0;
            a4[4] = eax_3;
            return a4;
        }
    }
    else
    {
        if (eax == 0x72)
        {
            ecx_1 = 0;
            esi_1 = esi | 1;
            goto label_4a6fb2;
        }

        if (eax == 0x77)
        {
            ecx_1 = 0x301;
            goto label_4a6fad;
        }
    }
    return nullptr;
}

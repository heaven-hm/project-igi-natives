#include "004A5E53-Camera_ApplyPostProcess_7.h"
/* 0x004a5e53 Camera_ApplyPostProcess_7 full linked: callers=1 callees=2 */
int32_t sub_4a5e53(int32_t a1, EXCEPTION_POINTERS* a2)

{
    int32_t* eax = sub_4a5f94(a1);

    if (eax)
    {
        int32_t ebx_1 = eax[2];

        if (ebx_1)
        {
            if (ebx_1 == 5)
            {
                eax[2] = 0;
                return 1;
            }

            if (ebx_1 != 1)
            {
                int32_t ecx_1 = g_9360b0;
                g_9360b0 = a2;
                int32_t ecx_3 = eax[1];

                if (ecx_3 != 8)
                {
                    eax[2] = 0;
                    ebx_1(ecx_3);
                }
                else
                {
                    int32_t ecx_4 = g_543fa0;
                    int32_t edx_2 = g_543fa4 + ecx_4;

                    if (ecx_4 < edx_2)
                    {
                        int32_t i_1 = edx_2 - ecx_4;
                        int32_t* esi_2 = ecx_4 * 0xc + &g_543f30;
                        int32_t i;

                        do
                        {
                            *esi_2 = 0;
                            esi_2 = &esi_2[3];
                            i = i_1;
                            i_1 -= 1;
                        } while (i != 1);
                    }

                    int32_t esi_3 = g_543fac;

                    switch (*eax)
                    {
                        case 0xc000008d:
                        {
                            g_543fac = 0x82;
                            break;
                        }
                        case 0xc000008e:
                        {
                            g_543fac = 0x83;
                            break;
                        }
                        case 0xc000008f:
                        {
                            g_543fac = 0x86;
                            break;
                        }
                        case 0xc0000090:
                        {
                            g_543fac = 0x81;
                            break;
                        }
                        case 0xc0000091:
                        {
                            g_543fac = 0x84;
                            break;
                        }
                        case 0xc0000092:
                        {
                            g_543fac = 0x8a;
                            break;
                        }
                        case 0xc0000093:
                        {
                            g_543fac = 0x85;
                            break;
                        }
                    }

                    ebx_1(8, g_543fac);
                    g_543fac = esi_3;
                }

                g_9360b0 = ecx_1;
            }

            return 0xffffffff;
        }
    }

    return UnhandledExceptionFilter(a2);
}

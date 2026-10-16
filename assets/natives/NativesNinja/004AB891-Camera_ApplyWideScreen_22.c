#include "004AB891-Camera_ApplyWideScreen_22.h"
/* 0x004ab891 Camera_ApplyWideScreen_22 full linked: callers=2 callees=5 */
void* sub_4ab891(int32_t a1)

{
    int32_t ecx;
    int32_t var_8 = ecx;
    int32_t var_c = ecx;
    void** esi = g_5466d0;
    void* result;

    while (true)
    {
        int32_t edx_1 = esi[4];
        int32_t ebx_1;

        if (edx_1 == 0xffffffff)
            ebx_1 = a1;
        else
        {
            int32_t* edi_1 = esi[2];
            int32_t* eax_6 = ((edi_1 - esi - 0x18) >> 3 << 0xc) + edx_1;
            int32_t* var_8_1 = eax_6;

            if (edi_1 < &esi[0x806])
            {
                while (true)
                {
                    int32_t ecx_2 = *edi_1;
                    ebx_1 = a1;

                    if (ecx_2 >= ebx_1 && edi_1[1] > ebx_1)
                    {
                        result = sub_4aba99(eax_6, ecx_2, ebx_1);

                        if (result)
                            break;

                        eax_6 = var_8_1;
                        edi_1[1] = ebx_1;
                    }

                    edi_1 = &edi_1[2];
                    eax_6 = &eax_6[0x400];
                    var_8_1 = eax_6;

                    if (edi_1 >= &esi[0x806])
                        goto label_4ab907;
                }

                goto label_4ab95c;
            }

            ebx_1 = a1;
        label_4ab907:
            int32_t eax_7 = esi[2];
            edi_1 = &esi[6];
            int32_t* var_8_2 = esi[4];

            if (edi_1 < eax_7)
            {
                while (true)
                {
                    int32_t eax_8 = *edi_1;

                    if (eax_8 >= ebx_1 && edi_1[1] > ebx_1)
                    {
                        result = sub_4aba99(var_8_2, eax_8, ebx_1);

                        if (result)
                            break;

                        edi_1[1] = ebx_1;
                    }

                    var_8_2 = &var_8_2[0x400];
                    edi_1 = &edi_1[2];

                    if (edi_1 >= eax_7)
                        goto label_4ab94d;
                }

            label_4ab95c:
                g_5466d0 = esi;
                *edi_1 -= ebx_1;
                esi[2] = edi_1;
                break;
            }
        }

    label_4ab94d:
        esi = *esi;

        if (esi == g_5466d0)
        {
            void** edi_2 = &g_5446b0;
            int32_t i;
            int32_t dwSize;
            int32_t* ebx_2;
            int32_t* lpAddress;

            while (true)
            {
                if (edi_2[4] == 0xffffffff || !edi_2[3])
                {
                    edi_2 = *edi_2;

                    if (edi_2 == &g_5446b0)
                    {
                        void** eax_17 = sub_4ab599();

                        if (eax_17)
                        {
                            void** ecx_7 = eax_17[4];
                            ecx_7[2] = ebx_1;
                            g_5466d0 = eax_17;
                            *ecx_7 = ecx_7 + ebx_1 + 8;
                            ecx_7[1] = 0xf0 - ebx_1;
                            eax_17[6] -= ebx_1;
                            return &ecx_7[0x40];
                        }
                    }
                    else
                        continue;
                }
                else
                {
                    ebx_2 = edi_2[3];
                    i = 0;
                    int32_t* eax_9 = ebx_2;
                    lpAddress = ((ebx_2 - edi_2 - 0x18) >> 3 << 0xc) + edi_2[4];

                    if (*ebx_2 == 0xffffffff)
                    {
                        while (i < 0x10)
                        {
                            eax_9 = &eax_9[2];
                            i += 1;

                            if (*eax_9 != 0xffffffff)
                                break;
                        }
                    }

                    dwSize = i << 0xc;

                    if (VirtualAlloc(lpAddress, dwSize, MEM_COMMIT, PAGE_READWRITE) == lpAddress)
                        break;
                }

                return nullptr;
            }

            sub_4acd10(lpAddress, dwSize, 0);
            int32_t* ecx_5 = ebx_2;

            if (i > 0)
            {
                int32_t* eax_12 = &lpAddress[1];
                int32_t i_2 = i;
                int32_t i_1;

                do
                {
                    eax_12[0x3d] = 0xff;
                    eax_12[-1] = &eax_12[1];
                    *eax_12 = 0xf0;
                    *ecx_5 = 0xf0;
                    ecx_5[1] = 0xf1;
                    eax_12 = &eax_12[0x400];
                    ecx_5 = &ecx_5[2];
                    i_1 = i_2;
                    i_2 -= 1;
                } while (i_1 != 1);
            }

            g_5466d0 = edi_2;
            bool c_1;

            while (true)
            {
                c_1 = ecx_5 < &edi_2[0x806];

                if (!c_1)
                    break;

                if (*ecx_5 == 0xffffffff)
                {
                    c_1 = ecx_5 < &edi_2[0x806];
                    break;
                }

                ecx_5 = &ecx_5[2];
            }

            edi_2[3] = (&edi_2[0x806] - &edi_2[0x806]) & ecx_5;
            lpAddress[2] = a1;
            edi_2[2] = ebx_2;
            *ebx_2 -= a1;
            lpAddress[1] -= a1;
            result = &lpAddress[0x40];
            *lpAddress = lpAddress + a1 + 8;
            break;
        }
    }

    return result;
}

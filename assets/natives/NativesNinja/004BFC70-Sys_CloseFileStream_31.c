#include "004BFC70-Sys_CloseFileStream_31.h"
/* 0x004bfc70 Sys_CloseFileStream_31 full linked: callers=24 callees=11 */
int32_t sub_4bfc70(int32_t* a1, int32_t* a2)

{
    int32_t* ebp = a2;
    int32_t* ebx = *ebp;

    if (*ebx)
    {
        ebp[3] = ebx[2];
        ebp[4] = ebx[3];
        ebp[8] = ebx[8];
        ebp[6] = ebx[6];
        ebp[7] = ebx[7];
        int32_t edi = ebx[4];
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond:0_1 = 0 != *edi;
            edi += 1;
            i -= 1;

            if (!cond:0_1)
                break;
        }

        int32_t ecx_3 = ~i;
        int32_t esi_1;
        int32_t edi_3;
        edi_3 = memcpy(ebp[5], edi - ecx_3, ecx_3 & 0xfffffffc);
        memcpy(edi_3, esi_1, ecx_3 & 3);
        sub_4af960(ebx);
        sub_4b0d10(ebx);
        return 1;
    }

    a2 = 1;
    void* const esi_2 = nullptr;
    int32_t* edi_4 = *a1;

    while (true)
    {
        char* ecx_7 = *edi_4;
        char eax_4 = *ecx_7;

        if (eax_4 != 0x20 && eax_4 != 9 && eax_4 != 0xa && eax_4 != 0xd)
        {
            while (!**edi_4)
            {
                if (!sub_4bf1e0(edi_4))
                    return 0;

                while (true)
                {
                    char* ecx_10 = *edi_4;
                    char eax_6 = *ecx_10;

                    if (eax_6 != 0x20 && eax_6 != 9 && eax_6 != 0xa && eax_6 != 0xd)
                        break;

                    *edi_4 = &ecx_10[1];
                }
            }

            char* eax_7 = ebp[5];
            ebp[3] = 8;
            ebp[4] = 0;
            *eax_7 = 0;
            char* eax_8 = *edi_4;
            int32_t ecx_13 = *eax_8 - 0x21;

            if (ecx_13 > 0x5d)
            {
            label_4c0065:

                if (sub_517260(eax_8, edi_4, ebp[5], ebp[9]))
                {
                    ebp[3] = 5;
                    a2 = nullptr;
                }
            }
            else
            {
                int32_t edx_4 = 0;
                edx_4 = lookup_table_4c0108[ecx_13];
                char* i_4;

                switch (edx_4)
                {
                    case 0:
                    {
                        ebp[3] = 1;

                        if (*(*edi_4 + 1) != 0x3d)
                        {
                            i_4 = 2;
                            ebp[4] = 0x14;
                            ebp[3] = 2;
                        }
                        else
                        {
                            i_4 = 2;
                            ebp[3] = 1;
                            ebp[4] = 0xf;
                            a2 = 2;
                        }

                        goto label_4bfecc;
                    }
                    case 1:
                    {
                        if (sub_517260(eax_8, edi_4, ebp[5], ebp[9]))
                        {
                            ebp[3] = 4;
                            a2 = nullptr;
                        }
                        break;
                    }
                    case 2:
                    {
                        ebp[3] = 1;
                        ebp[4] = 0xa;
                        i_4 = 1;

                        if (*(*edi_4 + 1) == 0x26)
                        {
                            i_4 = 2;
                            ebp[4] = 0x1c;
                            a2 = 2;
                        }

                        goto label_4bfecc;
                    }
                    case 3:
                    {
                        ebp[3] = 1;
                        ebp[4] = 0x15;
                        i_4 = 1;
                        goto label_4bfecc;
                    }
                    case 4:
                    {
                        ebp[3] = 0;
                        ebp[4] = 0x16;
                        i_4 = 1;
                    label_4bfecc:

                        if (i_4 < ebp[9])
                            i_4[ebp[5]] = 0;

                        if (i_4)
                        {
                            char* i_1;

                            do
                            {
                                if (i_4 < ebp[9])
                                    i_4[ebp[5] - 1] = i_4[*edi_4 - 1];

                                i_1 = i_4;
                                i_4 -= 1;
                            } while (i_1 != 1);
                        }
                        break;
                    }
                    case 5:
                    {
                        ebp[3] = 1;
                        ebp[4] = 5;
                        i_4 = 1;
                        goto label_4bfecc;
                    }
                    case 6:
                    {
                        ebp[3] = 1;
                        ebp[4] = 1;
                        i_4 = 1;
                        goto label_4bfecc;
                    }
                    case 7:
                    {
                        ebp[3] = 1;
                        ebp[4] = 0x18;
                        i_4 = 1;
                        goto label_4bfecc;
                    }
                    case 8:
                    {
                        ebp[3] = 1;
                        ebp[4] = 2;
                        i_4 = 1;
                        goto label_4bfecc;
                    }
                    case 9:
                    {
                        ebp[3] = 1;
                        ebp[4] = 6;
                        i_4 = 1;
                        goto label_4bfecc;
                    }
                    case 0xa:
                    {
                        ebp[3] = 3;
                        ebp[4] = 0x1e;
                        i_4 = 1;
                        goto label_4bfecc;
                    }
                    case 0xb:
                    {
                        ebp[3] = 0;
                        ebp[4] = 0x17;
                        i_4 = 1;
                        goto label_4bfecc;
                    }
                    case 0xc:
                    {
                        char eax_11 = eax_8[1];

                        if (eax_11 == 0x3c)
                        {
                            ebp[3] = 1;
                            ebp[4] = 0xb;
                        label_4bfeba:
                            a2 = 2;
                            esi_2 = 1;
                            goto label_4bfec4;
                        }

                        ebp[3] = 1;

                        if (eax_11 != 0x3d)
                        {
                            ebp[4] = 0x10;
                            goto label_4bfec4;
                        }

                        ebp[4] = 0x12;
                        goto label_4bfeba;
                    }
                    case 0xd:
                    {
                        char ecx_20 = eax_8[1];
                        ebp[3] = 1;

                        if (ecx_20 == 0x3d)
                        {
                            ebp[4] = 0xe;
                            goto label_4bfeba;
                        }

                        ebp[4] = 0x19;
                    label_4bfec4:
                        i_4 = esi_2 + 1;

                        if (i_4)
                            goto label_4bfecc;
                        break;
                    }
                    case 0xe:
                    {
                        char eax_21 = eax_8[1];

                        if (eax_21 == 0x3e)
                        {
                            ebp[3] = 1;
                            ebp[4] = 0xc;
                            goto label_4bfeba;
                        }

                        ebp[3] = 1;

                        if (eax_21 == 0x3d)
                        {
                            ebp[4] = 0x13;
                            goto label_4bfeba;
                        }

                        char* ecx_19 = ebp[5];
                        ebp[4] = 0x11;
                        *ecx_19 = **edi_4;
                        goto label_4bfec4;
                    }
                    case 0xf:
                    {
                        ebp[3] = 3;
                        ebp[4] = 0x1d;
                        i_4 = 1;
                        goto label_4bfecc;
                    }
                    case 0x10:
                    {
                        ebp[3] = 1;
                        ebp[4] = 9;
                        i_4 = 1;
                        goto label_4bfecc;
                    }
                    case 0x11:
                    {
                        ebp[4] = 0x1f;
                        ebp[3] = 0;
                        i_4 = 1;
                        goto label_4bfecc;
                    }
                    case 0x12:
                    {
                        ebp[3] = 1;
                        ebp[4] = 8;
                        i_4 = 1;

                        if (*(*edi_4 + 1) == 0x7c)
                        {
                            i_4 = 2;
                            ebp[4] = 0x1b;
                            a2 = 2;
                        }

                        goto label_4bfecc;
                    }
                    case 0x13:
                    {
                        ebp[4] = 0x20;
                        ebp[3] = 0;
                        i_4 = 1;
                        goto label_4bfecc;
                    }
                    case 0x14:
                    {
                        ebp[3] = 2;
                        ebp[4] = 0xd;
                        i_4 = 1;
                        goto label_4bfecc;
                    }
                    case 0x15:
                    {
                        goto label_4c0065;
                    }
                }
            }

            if (a2)
            {
                void* i_3 = a2;
                void* i_2;

                do
                {
                    char* eax_14 = *edi_4;

                    if (*eax_14)
                        *edi_4 = &eax_14[1];

                    i_2 = i_3;
                    i_3 -= 1;
                } while (i_2 != 1);
            }

            if (ebp[3] == 5 && sub_4c0170(ebp))
            {
                if (sub_4c01d0(ebp))
                {
                    int32_t eax_19 = sub_517510(ebp[5]);
                    ebp[3] = 7;
                    int32_t ecx_18 = ebp[3];
                    ebp[8] = eax_19;
                    int32_t eax_20 = 0;
                    eax_20 = ecx_18 != 8;
                    return eax_20;
                }

                *(ebp + 0x18) = sub_517570(ebp[5]);
                ebp[3] = 6;
            }

            int32_t eax_25 = 0;
            eax_25 = ebp[3] != 8;
            return eax_25;
        }

        *edi_4 = &ecx_7[1];
    }
}

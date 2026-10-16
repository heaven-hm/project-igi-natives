#include "004AA7B0-Camera_ResetMatrix_20.h"
/* 0x004aa7b0 Camera_ResetMatrix_20 full linked: callers=3 callees=8 */
char* sub_4aa7b0(char* a1, char* a2, void* a3)

{
    char* esi = a2;
    char* edi = a1;

    if (edi > esi && edi < a3 + esi)
    {
        void* esi_1 = a3 + esi - 4;
        void* edi_1 = a3 + edi - 4;
        uint32_t ecx_4;

        if (!(edi_1 & 3))
        {
            ecx_4 = a3 >> 2;

            if (ecx_4 < 8)
❓                /* jump -> (&jump_table_4aaa40)[-(ecx_4)] */

            edi_1 = memcpy(edi_1 - (ecx_4 << 2), esi_1 - (ecx_4 << 2), ecx_4 << 2);

            switch (a3 & 3)
            {
                case nullptr:
                {
                    return a1;
                    break;
                }
                case 1:
                {
                    *(edi_1 + 3) = *(esi_1 + 3);
                    return a1;
                    break;
                }
                case 2:
                {
                    goto label_4aaabb;
                }
                case 3:
                {
                    goto label_4aaacf;
                }
            }
        }
        else if (a3 < 4)
            switch (a3)
            {
                case nullptr:
                {
                    return a1;
                    break;
                }
                case 1:
                {
                    *(edi_1 + 3) = *(esi_1 + 3);
                    return a1;
                    break;
                }
                case 2:
                {
                label_4aaabb:
                    *(edi_1 + 3) = *(esi_1 + 3);
                    *(edi_1 + 2) = *(esi_1 + 2);
                    return a1;
                    break;
                }
                case 3:
                {
                label_4aaacf:
                    *(edi_1 + 3) = *(esi_1 + 3);
                    *(edi_1 + 2) = *(esi_1 + 2);
                    *(edi_1 + 1) = *(esi_1 + 1);
                    return a1;
                    break;
                }
            }
        else
        {
            void* eax_21 = edi_1 & 3;
            void* ecx_6 = a3 - eax_21;

            switch (jump_table_4aa998[eax_21])
            {
                case 0x4aa9a8:
                {
                    *(edi_1 + 3) = *(esi_1 + 3);
                    ecx_4 = ecx_6 >> 2;

                    if (ecx_4 < 8)
                        /* jump -> (&jump_table_4aaa40)[-(ecx_4)] */

                    edi_1 = memcpy(edi_1 - 1 - (ecx_4 << 2), esi_1 - 1 - (ecx_4 << 2),
                        ecx_4 << 2);

                    switch (3 & ecx_6)
                    {
                        case nullptr:
                        {
                            return a1;
                            break;
                        }
                        case 1:
                        {
                            *(edi_1 + 3) = *(esi_1 + 3);
                            return a1;
                            break;
                        }
                        case 2:
                        {
                            goto label_4aaabb;
                        }
                        case 3:
                        {
                            goto label_4aaacf;
                        }
                    }
                    break;
                }
                case 0x4aa9c8:
                {
                    *(edi_1 + 3) = *(esi_1 + 3);
                    ecx_4 = ecx_6 >> 2;
                    *(edi_1 + 2) = *(esi_1 + 2);

                    if (ecx_4 < 8)
                        /* jump -> (&jump_table_4aaa40)[-(ecx_4)] */

                    edi_1 = memcpy(edi_1 - 2 - (ecx_4 << 2), esi_1 - 2 - (ecx_4 << 2),
                        ecx_4 << 2);

                    switch (3 & ecx_6)
                    {
                        case nullptr:
                        {
                            return a1;
                            break;
                        }
                        case 1:
                        {
                            *(edi_1 + 3) = *(esi_1 + 3);
                            return a1;
                            break;
                        }
                        case 2:
                        {
                            goto label_4aaabb;
                        }
                        case 3:
                        {
                            goto label_4aaacf;
                        }
                    }
                    break;
                }
                case 0x4aa9f0:
                {
                    *(edi_1 + 3) = *(esi_1 + 3);
                    *(edi_1 + 2) = *(esi_1 + 2);
                    ecx_4 = ecx_6 >> 2;
                    *(edi_1 + 1) = *(esi_1 + 1);

                    if (ecx_4 < 8)
                        /* jump -> (&jump_table_4aaa40)[-(ecx_4)] */

                    edi_1 = memcpy(edi_1 - 3 - (ecx_4 << 2), esi_1 - 3 - (ecx_4 << 2),
                        ecx_4 << 2);

                    switch (3 & ecx_6)
                    {
                        case nullptr:
                        {
                            return a1;
                            break;
                        }
                        case 1:
                        {
                            *(edi_1 + 3) = *(esi_1 + 3);
                            return a1;
                            break;
                        }
                        case 2:
                        {
                            goto label_4aaabb;
                        }
                        case 3:
                        {
                            goto label_4aaacf;
                        }
                    }
                    break;
                }
            }
        }
    }

    uint32_t ecx_1;
    void* edx_1;

    if (edi & 3)
    {
        if (a3 < 4)
❓            /* jump -> *(((a3 - 4) << 2) + &g_4aa908) */

        void* eax_3 = edi & 3;
        void* ecx_3 = a3 - 4 + eax_3;

        switch (jump_table_4aa810[eax_3])
        {
            case 0x4aa820:
            {
                edx_1 = 3 & ecx_3;
                *edi = *esi;
                edi[1] = esi[1];
                ecx_1 = ecx_3 >> 2;
                edi[2] = esi[2];
                esi = &esi[3];
                edi = &edi[3];

                if (ecx_1 >= 8)
                {
                    edi = memcpy(edi, esi, ecx_1 << 2);

                    switch (edx_1)
                    {
                        case nullptr:
                        {
                            return a1;
                            break;
                        }
                        case 1:
                        {
                            *edi = *esi;
                            return a1;
                            break;
                        }
                        case 2:
                        {
                            goto label_4aa91e;
                        }
                        case 3:
                        {
                            goto label_4aa932;
                        }
                    }
                }
                break;
            }
            case 0x4aa84c:
            {
                edx_1 = 3 & ecx_3;
                *edi = *esi;
                ecx_1 = ecx_3 >> 2;
                edi[1] = esi[1];
                esi = &esi[2];
                edi = &edi[2];

                if (ecx_1 >= 8)
                {
                    edi = memcpy(edi, esi, ecx_1 << 2);

                    switch (edx_1)
                    {
                        case nullptr:
                        {
                            return a1;
                            break;
                        }
                        case 1:
                        {
                            *edi = *esi;
                            return a1;
                            break;
                        }
                        case 2:
                        {
                            goto label_4aa91e;
                        }
                        case 3:
                        {
                            goto label_4aa932;
                        }
                    }
                }
                break;
            }
            case 0x4aa870:
            {
                edx_1 = 3 & ecx_3;
                *edi = *esi;
                esi = &esi[1];
                ecx_1 = ecx_3 >> 2;
                edi = &edi[1];

                if (ecx_1 >= 8)
                {
                    edi = memcpy(edi, esi, ecx_1 << 2);

                    switch (edx_1)
                    {
                        case nullptr:
                        {
                            return a1;
                            break;
                        }
                        case 1:
                        {
                            *edi = *esi;
                            return a1;
                            break;
                        }
                        case 2:
                        {
                            goto label_4aa91e;
                        }
                        case 3:
                        {
                            goto label_4aa932;
                        }
                    }
                }
                break;
            }
        }
    }
    else
    {
        ecx_1 = a3 >> 2;
        edx_1 = a3 & 3;

        if (ecx_1 >= 8)
        {
            edi = memcpy(edi, esi, ecx_1 << 2);

            switch (edx_1)
            {
                case nullptr:
                {
                    return a1;
                    break;
                }
                case 1:
                {
                    *edi = *esi;
                    return a1;
                    break;
                }
                case 2:
                {
                    goto label_4aa91e;
                }
                case 3:
                {
                    goto label_4aa932;
                }
            }
        }
    }

    switch (ecx_1)
    {
        case 0:
        {
            goto label_4aa8ef;
        }
        case 1:
        {
            goto label_4aa8e0;
        }
        case 2:
        {
            goto label_4aa8d8;
        }
        case 3:
        {
            goto label_4aa8d0;
        }
        case 4:
        {
            goto label_4aa8c8;
        }
        case 5:
        {
            goto label_4aa8c0;
        }
        case 6:
        {
            goto label_4aa8b8;
        }
        case 7:
        {
            *(edi + (ecx_1 << 2) - 0x1c) = *(esi + (ecx_1 << 2) - 0x1c);
        label_4aa8b8:
            *(edi + (ecx_1 << 2) - 0x18) = *(esi + (ecx_1 << 2) - 0x18);
        label_4aa8c0:
            *(edi + (ecx_1 << 2) - 0x14) = *(esi + (ecx_1 << 2) - 0x14);
        label_4aa8c8:
            *(edi + (ecx_1 << 2) - 0x10) = *(esi + (ecx_1 << 2) - 0x10);
        label_4aa8d0:
            *(edi + (ecx_1 << 2) - 0xc) = *(esi + (ecx_1 << 2) - 0xc);
        label_4aa8d8:
            *(edi + (ecx_1 << 2) - 8) = *(esi + (ecx_1 << 2) - 8);
        label_4aa8e0:
            *(edi + (ecx_1 << 2) - 4) = *(esi + (ecx_1 << 2) - 4);
            uint32_t eax_15 = ecx_1 << 2;
            esi = &esi[eax_15];
            edi = &edi[eax_15];
        label_4aa8ef:

            switch (edx_1)
            {
                case nullptr:
                {
                    return a1;
                    break;
                }
                case 1:
                {
                    *edi = *esi;
                    return a1;
                    break;
                }
                case 2:
                {
                label_4aa91e:
                    *edi = *esi;
                    edi[1] = esi[1];
                    return a1;
                    break;
                }
                case 3:
                {
                label_4aa932:
                    *edi = *esi;
                    edi[1] = esi[1];
                    edi[2] = esi[2];
                    return a1;
                    break;
                }
            }
            break;
        }
    }
}

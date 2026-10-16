#include "004ACD70-Camera_ApplyHandiCam_26.h"
/* 0x004acd70 Camera_ApplyHandiCam_26 full linked: callers=3 callees=8 */
char* sub_4acd70(char* a1, char* a2, void* a3)

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
❓                /* jump -> (&jump_table_4ad000)[-(ecx_4)] */

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
                    goto label_4ad07b;
                }
                case 3:
                {
                    goto label_4ad08f;
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
                label_4ad07b:
                    *(edi_1 + 3) = *(esi_1 + 3);
                    *(edi_1 + 2) = *(esi_1 + 2);
                    return a1;
                    break;
                }
                case 3:
                {
                label_4ad08f:
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

            switch (jump_table_4acf58[eax_21])
            {
                case 0x4acf68:
                {
                    *(edi_1 + 3) = *(esi_1 + 3);
                    ecx_4 = ecx_6 >> 2;

                    if (ecx_4 < 8)
                        /* jump -> (&jump_table_4ad000)[-(ecx_4)] */

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
                            goto label_4ad07b;
                        }
                        case 3:
                        {
                            goto label_4ad08f;
                        }
                    }
                    break;
                }
                case 0x4acf88:
                {
                    *(edi_1 + 3) = *(esi_1 + 3);
                    ecx_4 = ecx_6 >> 2;
                    *(edi_1 + 2) = *(esi_1 + 2);

                    if (ecx_4 < 8)
                        /* jump -> (&jump_table_4ad000)[-(ecx_4)] */

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
                            goto label_4ad07b;
                        }
                        case 3:
                        {
                            goto label_4ad08f;
                        }
                    }
                    break;
                }
                case 0x4acfb0:
                {
                    *(edi_1 + 3) = *(esi_1 + 3);
                    *(edi_1 + 2) = *(esi_1 + 2);
                    ecx_4 = ecx_6 >> 2;
                    *(edi_1 + 1) = *(esi_1 + 1);

                    if (ecx_4 < 8)
                        /* jump -> (&jump_table_4ad000)[-(ecx_4)] */

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
                            goto label_4ad07b;
                        }
                        case 3:
                        {
                            goto label_4ad08f;
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
❓            /* jump -> *(((a3 - 4) << 2) + &g_4acec8) */

        void* eax_3 = edi & 3;
        void* ecx_3 = a3 - 4 + eax_3;

        switch (jump_table_4acdd0[eax_3])
        {
            case 0x4acde0:
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
                            goto label_4acede;
                        }
                        case 3:
                        {
                            goto label_4acef2;
                        }
                    }
                }
                break;
            }
            case 0x4ace0c:
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
                            goto label_4acede;
                        }
                        case 3:
                        {
                            goto label_4acef2;
                        }
                    }
                }
                break;
            }
            case 0x4ace30:
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
                            goto label_4acede;
                        }
                        case 3:
                        {
                            goto label_4acef2;
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
                    goto label_4acede;
                }
                case 3:
                {
                    goto label_4acef2;
                }
            }
        }
    }

    switch (ecx_1)
    {
        case 0:
        {
            goto label_4aceaf;
        }
        case 1:
        {
            goto label_4acea0;
        }
        case 2:
        {
            goto label_4ace98;
        }
        case 3:
        {
            goto label_4ace90;
        }
        case 4:
        {
            goto label_4ace88;
        }
        case 5:
        {
            goto label_4ace80;
        }
        case 6:
        {
            goto label_4ace78;
        }
        case 7:
        {
            *(edi + (ecx_1 << 2) - 0x1c) = *(esi + (ecx_1 << 2) - 0x1c);
        label_4ace78:
            *(edi + (ecx_1 << 2) - 0x18) = *(esi + (ecx_1 << 2) - 0x18);
        label_4ace80:
            *(edi + (ecx_1 << 2) - 0x14) = *(esi + (ecx_1 << 2) - 0x14);
        label_4ace88:
            *(edi + (ecx_1 << 2) - 0x10) = *(esi + (ecx_1 << 2) - 0x10);
        label_4ace90:
            *(edi + (ecx_1 << 2) - 0xc) = *(esi + (ecx_1 << 2) - 0xc);
        label_4ace98:
            *(edi + (ecx_1 << 2) - 8) = *(esi + (ecx_1 << 2) - 8);
        label_4acea0:
            *(edi + (ecx_1 << 2) - 4) = *(esi + (ecx_1 << 2) - 4);
            uint32_t eax_15 = ecx_1 << 2;
            esi = &esi[eax_15];
            edi = &edi[eax_15];
        label_4aceaf:

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
                label_4acede:
                    *edi = *esi;
                    edi[1] = esi[1];
                    return a1;
                    break;
                }
                case 3:
                {
                label_4acef2:
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

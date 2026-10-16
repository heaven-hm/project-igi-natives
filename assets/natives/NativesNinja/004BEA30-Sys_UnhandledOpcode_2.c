#include "004BEA30-Sys_UnhandledOpcode_2.h"
/* 0x004bea30 Sys_UnhandledOpcode_2 full linked: callers=0 callees=10 */
char* sub_4bea30(int32_t* a1)

{
    int32_t* esi = a1;
    char* eax_1 = *esi + esi[5];
    int32_t ecx_1 = 0;
    ecx_1 = *eax_1;
    uint32_t eax_2;
    char* eax_4;
    uint32_t ebx_1;
    int32_t ebp_1;
    int32_t edi_1;

    if (ecx_1 - 8 <= 6)
        switch (ecx_1)
        {
            case 8:
            {
                edi_1 = 4;
                eax_2 = *(eax_1 + 1);
                goto label_4bea67;
            }
            case 9:
            {
                uint32_t edx_1 = 0;
                edi_1 = 1;
                edx_1 = eax_1[1];
                eax_2 = edx_1;
            label_4bea67:
                eax_4 = sub_4bec40(&esi[0xc], eax_2);

                if (eax_4)
                {
                    sub_4bce40(esi, eax_4, 3);
                    int32_t eax_6 = esi[5] + edi_1 + 1;
                    esi[5] = eax_6;
                    return eax_6;
                }

            label_4bebc8:
                int32_t ecx_12 = esi[5];
                esi[8] = 0xf;
                esi[4] = ecx_12;
                return eax_4;
                break;
            }
            case 0xa:
            {
                edi_1 = 2;
                a1 = *(eax_1 + 1);
                eax_2 = a1;
                goto label_4bea67;
            }
            case 0xc:
            {
                ebx_1 = *(eax_1 + 1);
                ebp_1 = 4;
                goto label_4beae7;
            }
            case 0xd:
            {
                ebx_1 = 0;
                ebp_1 = 1;
                ebx_1 = eax_1[1];
            label_4beae7:
                int32_t* eax_13 = *(esi[0x18] + (ebx_1 << 2));
                a1 = eax_13;

                if (eax_13)
                {
                label_4beb8c:
                    sub_4bec10(esi, a1);
                    int32_t eax_22 = esi[5] + ebp_1 + 1;
                    esi[5] = eax_22;
                    return eax_22;
                }

                void* eax_15 = *(esi[0x19] + (ebx_1 << 2));
                void* edx_4;
                char* edi_3;

                if (eax_15)
                {
                    int32_t* eax_16 = *(eax_15 + 8);
                    a1 = eax_16;

                    if (eax_16)
                        goto label_4beb8c;

                    char* eax_17 = sub_4bec40(&esi[0x12], ebx_1);

                    if (!eax_17)
                        goto label_4beb8c;

                    int32_t edx_3 = esi[5];
                    esi[8] = 7;
                    esi[4] = edx_3;
                    edx_4 = &esi[0x1a];
                    edi_3 = eax_17;
                    goto label_4beb2e;
                }

                eax_4 = sub_4bec40(&esi[0x12], ebx_1);
                edi_3 = eax_4;

                if (!edi_3)
                    goto label_4bebc8;

                if (sub_4bab80(edi_3, &a1))
                {
                    int32_t* eax_20 = a1;

                    if (eax_20[2])
                        *(esi[0x19] + (ebx_1 << 2)) = sub_4babb0(edi_3);
                    else
                        *(esi[0x18] + (ebx_1 << 2)) = eax_20;

                    goto label_4beb8c;
                }

                int32_t eax_24 = esi[5];
                esi[8] = 7;
                esi[4] = eax_24;
                edx_4 = &esi[0x1a];
            label_4beb2e:
                int32_t i = 0xffffffff;

                while (i)
                {
                    bool cond:2_1 = 0 != *edi_3;
                    edi_3 = &edi_3[1];
                    i -= 1;

                    if (!cond:2_1)
                        break;
                }

                int32_t ecx_5 = ~i;
                int32_t esi_2;
                int32_t edi_6;
                edi_6 = memcpy(edx_4, edi_3 - ecx_5, ecx_5 & 0xfffffffc);
                memcpy(edi_6, esi_2, ecx_5 & 3);
                return ecx_5;
                break;
            }
            case 0xe:
            {
                a1 = *(eax_1 + 1);
                ebx_1 = a1;
                ebp_1 = 2;
                goto label_4beae7;
            }
        }
    Error_Show("Unhandled opcode.");

    while (true)
        /* nop */
}

#include "0049EB50-Display_SetDisplayMode_20.h"
/* 0x0049eb50 Display_SetDisplayMode_20 full linked: callers=2 callees=2 */
int32_t sub_49eb50(void* a1, int32_t* a2)

{
    void* ebp = a1;
    int32_t result = *(ebp + 0x28);

    if (!result)
    {
        int32_t* eax = *(ebp + 0x30);
        a1 = nullptr;
        int32_t* eax_1 = *eax;
        result = (*(*eax_1 + 0xc))(eax_1, 0x20, &a1, 0);

        if (!result)
        {
            result = *(ebp + 0x2c);
            int32_t esi_1 = *(ebp + 0x14);
            void* edi_1 = a1 + result * 0x28;
            int32_t eax_3 = *(ebp + 0x10);
            a1 = edi_1;
            int32_t ecx_4 = eax_3 * 0x28;
            int32_t esi_2;
            int32_t edi_2;
            edi_2 = memcpy(edi_1, esi_1, ecx_4 & 0xfffffffc);
            memcpy(edi_2, esi_2, ecx_4 & 3);
            int32_t* esi_3 = a2;

            if (esi_3 && *esi_3)
            {
                void* edx_2 = *(ebp + 0x1c);
                int32_t* ebx_1 = a2;

                while (true)
                {
                    int32_t eax_4 = 0;
                    eax_4 = *(edx_2 + 0x14);
                    void* eax_6 = eax_4 * 0x28;
                    void* edi_4 = eax_6 + *(ebp + 0x14);
                    int16_t ecx_9 = *(edx_2 + 0x12);

                    if (ecx_9 != 0xffff)
                        ebx_1 = *esi_3 + ecx_9 * 0x2c + 0x3c;

                    int32_t esi_5 = 0;

                    if (*(edx_2 + 0x16) > 0)
                    {
                        eax_6 = eax_6 + a1 + 0x24;
                        void* ecx_13 = edi_4 + 0x24;
                        int32_t edi_5;

                        do
                        {
                            long double x87_r7_2 = *(ecx_13 - 4) * ebx_1[4];
                            edi_5 = 0;
                            esi_5 += 1;
                            eax_6 += 0x28;
                            ecx_13 += 0x28;
                            *(eax_6 - 0x2c) = x87_r7_2;
                            *(eax_6 - 0x28) = *(ecx_13 - 0x28) * ebx_1[5];
                            edi_5 = *(edx_2 + 0x16);
                        } while (esi_5 < edi_5);
                    }

                    int16_t eax_7 = *(edx_2 + 0xe);

                    if (eax_7 == 0xffff)
                        break;

                    esi_3 = a2;
                    edx_2 = edx_2 + eax_7 + 0x20;
                }
            }

            int32_t* eax_9 = **(ebp + 0x30);
            result = (*(*eax_9 + 0x10))(eax_9);
            *(ebp + 0x28) = 1;
        }
    }

    return result;
}

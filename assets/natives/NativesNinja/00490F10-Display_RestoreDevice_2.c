#include "00490F10-Display_RestoreDevice_2.h"
/* 0x00490f10 Display_RestoreDevice_2 full linked: callers=1 callees=7 */
int32_t sub_490f10(float a1)

{
    int32_t ecx;
    int32_t var_4 = ecx;
    int32_t* ebp = a1;
    int32_t result = ebp[8];

    if (result != ebp[7])
    {
        sub_4910c0(ebp);

        if (ebp[0x5a])
        {
            int32_t edi_1 = *ebp;
            sub_4977f0();
            sub_497620(&ebp[0x5b], 1);
            int32_t eax_2 = ebp[0x453];

            if (eax_2 < ebp[0x452])
            {
                int32_t edx_3 = eax_2 * 0x1f;
                void* esi_1 = &ebp[edx_3];

                if (edi_1 <= ebp[edx_3 + 0x7a] + ebp[edx_3 + 0x78] + ebp[edx_3 + 0x77])
                {
                    int32_t ecx_7 = *(esi_1 + 0x1dc);
                    a1 = 1f;

                    if (edi_1 >= ecx_7)
                    {
                        if (*(esi_1 + 0x1d4) != 0xffffffff)
                        {
                            int32_t eax_5 = *(esi_1 + 0x1e4);
                            int32_t eax_6 = eax_5 + ecx_7;

                            if (edi_1 < eax_6)
                                a1 = 1f - (eax_6 - edi_1) / eax_5;
                        }

                        if (*(esi_1 + 0x1d8) != 0xffffffff)
                        {
                            int32_t edx_5 = *(esi_1 + 0x1e0);

                            if (edi_1 >= edx_5 + ecx_7)
                            {
                                int32_t eax_9 = *(esi_1 + 0x1e8);
                                a1 = (eax_9 - edi_1 + edx_5 + ecx_7) / eax_9;
                            }
                        }

                        int32_t i = 0;

                        if (*(esi_1 + 0x1ec) > 0)
                        {
                            void** edi_2 = esi_1 + 0x220;

                            do
                            {
                                *(*edi_2 + 0x14) = a1 * *(esi_1 + 0x1f0) * 128f;
                                *(*edi_2 + 0x18) = a1 * *(esi_1 + 0x1f4) * 128f;
                                *(*edi_2 + 0x1c) = a1 * *(esi_1 + 0x1f8) * 128f;
                                void* eax_15 = *edi_2;
                                *(eax_15 + 0x24) |= 0x80000;
                                *(*edi_2 + 0x10) = a1;
                                sub_4b6f50(*edi_2);
                                i += 1;
                                edi_2 = &edi_2[1];
                            } while (i < *(esi_1 + 0x1ec));
                        }
                    }
                }
                else
                    ebp[0x453] = eax_2 + 1;
            }

            sub_497700();
        }

        result = sub_491cc0();
        ebp[8] = ebp[7];
    }

    result = 1;
    return result;
}

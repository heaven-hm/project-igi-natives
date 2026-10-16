#include "00520F50-Lensflare_LoadParameters.h"
/* 0x00520f50 Lensflare_LoadParameters full linked: callers=0 callees=3 */
void* sub_520f50(void* a1)

{
    void* eax = *(a1 + 0x84);

    if (eax == 0xffffffff)
    {
        void* edi_2 = *(a1 + 0x14);

        if (edi_2)
        {
            eax = sub_5274c0();

            if (*(edi_2 + 0x1c) == eax)
            {
                *(a1 + 0x6c) = *(edi_2 + 0x24);
                *(a1 + 0x70) = *(edi_2 + 0x28);
                *(a1 + 0x74) = *(edi_2 + 0x2c);
                *(a1 + 0x78) = *(edi_2 + 0x30);
                eax = *(edi_2 + 0x34);
                *(a1 + 0x7c) = eax;
                *(a1 + 0x80) = *(edi_2 + 0x38);
            }
        }
    }
    else
    {
        eax = sub_4f1030(eax);
        void* edi = eax;

        if (edi)
        {
            eax = sub_5274c0();

            if (*(edi + 0x1c) == eax)
            {
                *(a1 + 0x6c) = *(edi + 0x24);
                *(a1 + 0x70) = *(edi + 0x28);
                *(a1 + 0x74) = *(edi + 0x2c);
                *(a1 + 0x78) = *(edi + 0x30);
                *(a1 + 0x7c) = *(edi + 0x34);
                int32_t eax_3 = *(edi + 0x38);
                *(a1 + 0x80) = eax_3;
                return eax_3;
            }
        }
    }

    return eax;
}

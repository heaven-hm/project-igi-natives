#include "004CEBA0-DynObj_MtpNlodvirmodelD.h"
/* 0x004ceba0 DynObj_MtpNlodvirmodelD full linked: callers=7 callees=3 */
void* sub_4ceba0(int32_t a1)

{
    int32_t edi = a1;

    if (!edi)
        return 0;

    int32_t eax_1 = g_a4edec;

    if (eax_1 < 0x258)
    {
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond:0_1 = 0 != *edi;
            edi += 1;
            i -= 1;

            if (!cond:0_1)
                break;
        }

        int32_t ecx = ~i;
        int32_t esi_1;
        int32_t edi_3;
        edi_3 = memcpy(eax_1 * 0x48 + &g_a443b4, edi - ecx, ecx & 0xfffffffc);
        memcpy(edi_3, esi_1, ecx & 3);
        g_a4edec += 1;
        return eax_1 * 0x48 + &g_a443a0;
    }

    int32_t __saved_ebx = 0x258;
    Error_Show("MTP_nLODVirModel >= %d");

    while (true)
        /* nop */
}

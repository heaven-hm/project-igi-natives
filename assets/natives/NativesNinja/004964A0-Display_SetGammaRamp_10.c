#include "004964A0-Display_SetGammaRamp_10.h"
/* 0x004964a0 Display_SetGammaRamp_10 full linked: callers=2 callees=4 */
int32_t sub_4964a0(void* a1, int32_t* a2, char a3)

{
    int32_t* ebp = a2;
    void* eax_1 = a1;
    int32_t* esi = ebp[9];
    uint32_t ebx_3 = (ebp[6] * *(ebp + 0x16) * ebp[8]) >> 3;
    a2 = esi;

    if (eax_1)
    {
        int32_t* ecx_1 = *(eax_1 + 0x10);
        a2 = ecx_1;
        esi = ecx_1;
    }

    if (a3)
    {
        int32_t eax_3 = (*(*esi + 0x50))(esi);
        eax_3 = !eax_3;
        return eax_3;
    }

    int32_t var_8;
    int32_t var_4;
    int32_t eax_5 = (*(*esi + 0x2c))(esi, 0, ebx_3, &var_4, &a3, &var_8, &a1, 0);

    if (!eax_5)
    {
        int32_t eax_6 = a3;

        if (ebx_3 <= eax_6)
        {
            int32_t esi_2;
            int32_t edi_2;
            edi_2 = memcpy(var_4, ebp[0xb], eax_6 & 0xfffffffc);
            memcpy(edi_2, esi_2, eax_6 & 3);
            eax_6 = a3;
            esi = a2;
            ebx_3 -= eax_6;
        }

        if (ebx_3 > 0)
        {
            void* ecx_6 = a1;

            if (ebx_3 <= ecx_6)
            {
                int32_t esi_5;
                int32_t edi_4;
                edi_4 = memcpy(var_8, ebp[0xb] + eax_6, ecx_6 & 0xfffffffc);
                memcpy(edi_4, esi_5, ecx_6 & 3);
                eax_6 = a3;
                esi = a2;
            }
        }

        eax_5 = (*(*esi + 0x4c))(esi, var_4, eax_6, var_8, a1);

        if (!eax_5)
        {
            eax_5 = 1;
            return eax_5;
        }
    }

    eax_5 = 0;
    return eax_5;
}

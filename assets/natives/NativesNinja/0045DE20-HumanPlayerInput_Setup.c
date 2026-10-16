#include "0045DE20-HumanPlayerInput_Setup.h"
/* 0x0045de20 HumanPlayerInput_Setup full linked: callers=0 callees=9 */
char* sub_45de20(void* a1)

{
    if (*(a1 + 0x80) && *(a1 + 0x190))
    {
        int32_t var_100 = g_53f30c[0];
        int16_t var_fc_1 = g_53f30c[4][0];
        char var_fa_1 = g_53f30c[6][0];
        void var_f9;
        *__builtin_memset(&var_f9, 0, 0xf8) = 0;
        void* edi_3 = a1 + 0x82;
        int32_t i = 0xffffffff;
        char* var_114_1 = &g_538354;

        while (i)
        {
            bool cond:0_1 = 0 != *edi_3;
            edi_3 += 1;
            i -= 1;

            if (!cond:0_1)
                break;
        }

        int32_t ecx_2 = ~i;
        int32_t* edi_5 = &var_100;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool cond:1_1 = 0 != *edi_5;
            edi_5 += 1;
            i_1 -= 1;

            if (!cond:1_1)
                break;
        }

        int32_t esi_2;
        int32_t edi_7;
        edi_7 = memcpy(edi_5 - 1, edi_3 - ecx_2, ecx_2 & 0xfffffffc);
        int32_t* var_118_1 = &var_100;
        memcpy(edi_7, esi_2, ecx_2 & 3);
        int32_t* eax_3 = QFile_ReadWrite(var_118_1, var_114_1);

        if (eax_3)
        {
            sub_4b1700(eax_3, *(a1 + 0x188), *(a1 + 0x190) * 0xa0);
            sub_4b1690(eax_3);
        }
    }
    else if (*(a1 + 0x81))
    {
        void* eax_5 = *(a1 + 0x184);

        if (eax_5)
            sub_4b1a30(eax_5);
    }

    void* eax_6 = *(a1 + 0x188);

    if (eax_6)
    {
        sub_4b0d10(eax_6);
        *(a1 + 0x188) = 0;
    }

    return sub_4f1340(a1 + 0x194);
}

#include "0045DF50-HumanPlayerInput_Process.h"
/* 0x0045df50 HumanPlayerInput_Process full linked: callers=0 callees=6 */
int32_t sub_45df50(void* a1)

{
    if (*(a1 + 0x80))
        *(a1 + 0x188) = Mem_Alloc(0x15f900, 4);
    else if (*(a1 + 0x81))
    {
        int32_t var_100 = g_53f30c[0];
        int16_t var_fc_1 = g_53f30c[4][0];
        char var_fa_1 = g_53f30c[6][0];
        void var_f9;
        *__builtin_memset(&var_f9, 0, 0xf8) = 0;
        void* edi_3 = a1 + 0x82;
        int32_t i = 0xffffffff;

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
        int32_t var_104;
        int32_t* var_118_1 = &var_104;
        memcpy(edi_7, esi_2, ecx_2 & 3);
        void* eax_3 = Resource_PackUnpack(&var_100, var_118_1);
        *(a1 + 0x184) = eax_3;

        if (eax_3)
            *(a1 + 0x190) = var_104 / 0xa0;
    }

    sub_4f1400(a1 + 0x194, a1);
    return 0;
}

#include "0049BD30-Display_SetDisplayMode_19.h"
/* 0x0049bd30 Display_SetDisplayMode_19 full linked: callers=0 callees=2 */
int32_t sub_49bd30()

{
    int32_t i = g_72350c;
    int32_t i_1 = 0;

    if (i > 0)
    {
        int32_t* ebp_1 = &g_7ac0a0;

        do
        {
            int32_t* eax = *ebp_1;
            (*(*eax + 8))(eax);
            int32_t* eax_1 = g_5ca110;
            *ebp_1 = 0;
            (*(*eax_1 + 0x14))(eax_1, &ebp_1[1], ebp_1, 0);
            int32_t* ebx_1 = ebp_1[6];
            int32_t* esi_1 = *ebx_1;
            int32_t* var_c_1 = esi_1;

            if (esi_1)
            {
                while (true)
                {
                    int32_t* eax_2 = *ebx_1[4];
                    int32_t var_4;

                    if (!(*(*eax_2 + 0xc))(eax_2, 0x20, &var_4, 0))
                    {
                        int32_t eax_4 = ebp_1[5];
                        int32_t edi_1 = 0;
                        edi_1 = ebx_1[3];
                        int32_t ecx_4 = 0;
                        ecx_4 = *(ebx_1 + 0xe);
                        int32_t ecx_5 = ecx_4 * eax_4;
                        int32_t esi_3;
                        int32_t edi_4;
                        edi_4 =
                            memcpy(edi_1 * eax_4 + var_4, ebx_1[5], ecx_5 & 0xfffffffc);
                        memcpy(edi_4, esi_3, ecx_5 & 3);
                        int32_t* eax_7 = *ebx_1[4];
                        (*(*eax_7 + 0x10))(eax_7);
                        esi_1 = var_c_1;
                    }

                    ebx_1 = esi_1;
                    int32_t* esi_4 = *esi_1;
                    var_c_1 = esi_4;

                    if (!esi_4)
                        break;

                    esi_1 = var_c_1;
                }
            }

            i = i_1 + 1;
            ebp_1 = &ebp_1[9];
            i_1 = i;
        } while (i < g_72350c);
    }

    return i;
}

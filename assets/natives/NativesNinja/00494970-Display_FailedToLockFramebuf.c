#include "00494970-Display_FailedToLockFramebuf.h"
/* 0x00494970 Display_FailedToLockFramebuf full linked: callers=0 callees=8 */
int32_t sub_494970(void* a1)

{
    int32_t* eax = g_5ca100;
    int32_t var_a4 = 0x7c;
    int32_t eax_1 = (*(*eax + 0x64))(eax, 0, &var_a4, 1, 0);
    void var_4a4;

    if (eax_1)
    {
        Game_DataSymbolLoad(&var_4a4, "Failed to lock framebuffer.");
        int32_t var_4c0 = sub_492be0(eax_1);
        void* var_4c4_1 = &var_4a4;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t var_4c;
    int32_t eflags;
    int32_t eax_3;
    eax_3 = __bsf_gprv_memv(var_4c);
    int32_t var_48;
    int32_t eflags_1;
    char eax_5;
    eax_5 = __bsf_gprv_memv(var_48);
    int32_t var_44;
    int32_t eflags_2;
    int32_t eax_6;
    eax_6 = __bsf_gprv_memv(var_44);
    int32_t eflags_3;
    int32_t eax_7;
    eax_7 = __bsr_gprv_memv(var_4c);
    int32_t eflags_4;
    char eax_9;
    eax_9 = __bsr_gprv_memv(var_48);
    int32_t eflags_5;
    int32_t eax_10;
    eax_10 = __bsr_gprv_memv(var_44);
    int32_t esi_3 = eax_7 - eax_3 + 1;
    int32_t* var_80;
    int32_t* edi_2 = var_80;
    int32_t ebx_2 = eax_10 - eax_6 + 1;
    void* eax_14 = *(a1 + 0xc);
    int32_t var_24 = esi_3;
    int32_t var_28 = ebx_2;
    char var_58;

    if (!(var_58 & 0x40))
    {
        Error_Show("Invalid framebuffer format");

        while (true)
            /* nop */

        return;
    }

    int32_t var_50;
    int32_t var_9c;
    int32_t var_98;
    int32_t var_94;

    if (var_50 == 0x20)
    {
        a1 = nullptr;

        if (var_9c > 0)
        {
            int32_t ecx_7 = var_98;

            while (true)
            {
                int32_t edx_3 = 0;

                if (ecx_7 > 0)
                {
                    do
                    {
                        int32_t esi_4 = *edi_2;
                        edi_2 = &edi_2[1];
                        *eax_14 = esi_4 >> (eax_6 & 0x1f) << ((8 - ebx_2) & 0x1f);
                        *(eax_14 + 1) =
                            esi_4 >> (eax_5 & 0x1f) << ((8 - (eax_9 - eax_5 + 1)) & 0x1f);
                        eax_14 += 3;
                        edx_3 += 1;
                        *(eax_14 - 1) = esi_4 >> (eax_3 & 0x1f) << ((8 - esi_3) & 0x1f);
                        ecx_7 = var_98;
                    } while (edx_3 < ecx_7);

                    esi_3 = var_24;
                }

                a1 += 1;
                edi_2 += var_94 - (ecx_7 << 2);

                if (a1 >= var_9c)
                    break;

                ebx_2 = var_28;
            }
        }
    }
    else if (var_50 != 0x10)
    {
        Error_Show("Invalid framebuffer format");

        while (true)
            /* nop */
    }
    else
    {
        a1 = nullptr;

        if (var_9c > 0)
        {
            int32_t ecx_18 = var_98;

            while (true)
            {
                int32_t edx_6 = 0;

                if (ecx_18 > 0)
                {
                    char var_10_3 = (8 - esi_3);

                    do
                    {
                        esi_3 = *edi_2;
                        edi_2 += 2;
                        *eax_14 = esi_3 >> (eax_6 & 0x1f) << ((8 - ebx_2) & 0x1f);
                        *(eax_14 + 1) =
                            esi_3 >> (eax_5 & 0x1f) << ((8 - (eax_9 - eax_5 + 1)) & 0x1f);
                        eax_14 += 3;
                        edx_6 += 1;
                        *(eax_14 - 1) = esi_3 >> (eax_3 & 0x1f) << (var_10_3 & 0x1f);
                        ecx_18 = var_98;
                    } while (edx_6 < ecx_18);

                    esi_3 = var_24;
                }

                a1 += 1;
                edi_2 += var_94 - ecx_18 * 2;

                if (a1 >= var_9c)
                    break;

                ebx_2 = var_28;
            }
        }
    }
    int32_t* eax_19 = g_5ca100;
    int32_t result = (*(*eax_19 + 0x80))(eax_19, 0);

    if (!result)
        return result;

    Game_DataSymbolLoad(&var_4a4, "Failed to unlock framebuffer.");
    int32_t var_4c0_1 = sub_492be0(result);
    void* var_4c4_2 = &var_4a4;
    Error_Show("%s\n\nDirectX error message: %s");

    while (true)
        /* nop */
}

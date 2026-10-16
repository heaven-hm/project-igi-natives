#include "0043C0B0-ExplodeMagicObj_LoadParameters_2.h"
/* 0x0043c0b0 ExplodeMagicObj_LoadParameters_2 full linked: callers=0 callees=5 */
int32_t ExplodeMagicObj_LoadParameters_2(void* a1)

{
    int16_t result;
    result = *(a1 + 0x148);

    if (!result)
    {
        long double x87_r7_1 = *(a1 + 0x13c);
        long double temp0_1 = *(a1 + 0x140);
        x87_r7_1 - temp0_1;
        result = (x87_r7_1 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 1))
        {
            void* eax_1 = sub_4cec10(*(a1 + 0x138));

            if (eax_1)
            {
                sub_4c48d0(a1, eax_1);
                int32_t* i = *(a1 + 8);
                *(a1 + 0xdc) = 0;

                if (*i && i)
                {
                    int32_t ecx_2 = g_afa7e0;

                    do
                    {
                        int32_t* edx_1 = *i;
                        void* eax_5;

                        if (!edx_1)
                            eax_5 = nullptr;
                        else
                        {
                            int32_t eax_2 = *edx_1;
                            int32_t eax_3 = -(eax_2);
                            eax_5 = (eax_3 - eax_3) & edx_1;
                        }

                        *((ecx_2 << 2) + &g_afa6e0) = eax_5;
                        g_afa7e0 = ecx_2 + 1;
                        int32_t eax_6 = sub_4d0d80();
                        int32_t eax_7 = 0;
                        eax_7 = i[7];
                        int32_t eax_8 = *(((eax_6 * 0x180 + eax_7) << 2) + &g_a96ae0);

                        if (eax_8)
                            eax_8(i);

                        ecx_2 = g_afa7e0 - 1;
                        g_afa7e0 = ecx_2;
                        i = *((ecx_2 << 2) + &g_afa6e0);
                    } while (i);
                }

                void* eax_9 = *(a1 + 0x138);
                uint32_t ecx_6 = *(eax_9 + 0x24);
                uint32_t var_34_1 = ecx_6;
                uint32_t var_38_1 = ecx_6;
                result = sub_480fe0(a1 + 0x20, 1, 0, *(a1 + 0x144), *(eax_9 + 0x14) * 4096f,
                    *(eax_9 + 0x18) * 4096f, 0x45c00000, ecx_6, *(eax_9 + 0x28), nullptr,
                    "1009_01_1", eax_9 + 0x2c, 0x15, 2, 0x47c80000, 0);
                *(a1 + 0x148) = 1;
            }
            else
            {
                int32_t __saved_esi_2 = *(a1 + 0x138);
                Error_Show("VirModel "%s" not available");

                while (true)
                    /* nop */
            }
        }
    }

    return result;
}

#include "005096F0-Physics_ApplyImpulse_8.h"
/* 0x005096f0 Physics_ApplyImpulse_8 full linked: callers=12 callees=9 */
int32_t sub_5096f0(int32_t* a1, void* a2, double* a3)

{
    int32_t edi = 0;
    int32_t var_34 = 0x41838800;
    *a1 = 0;
    void* eax_1 = a2;
    bool cond:0 = *(eax_1 + 0x58) <= 0;
    int32_t var_30 = 0;
    int32_t var_2c = 0x41838800;
    int32_t var_28 = 0;
    int32_t var_24 = 0x41838800;
    int32_t var_48_1;
    __builtin_memset(&var_48_1, 0, 0x14);

    if (!cond:0)
    {
        void* var_44;
        int32_t var_38;
        double var_20[0x3];

        while (true)
        {
            void* eax_2 = sub_4f9720(eax_1, edi);

            if (eax_2)
            {
                int32_t eax_3 = sub_509870();

                if (!(*(eax_2 + 0x30) & eax_3))
                {
                    sub_4f9770(&var_20, eax_2);
                    int32_t edx_2 = 0;
                    int32_t* esi_1 = &var_38;
                    int32_t* ecx_1 = &var_44;
                    long double x87_r7_2 = sub_4b32b0(&var_20, a3) - *(eax_2 + 0x24) * 4096f;

                    while (true)
                    {
                        if (*ecx_1)
                        {
                            long double temp1_1 = *esi_1;
                            x87_r7_2 - temp1_1;

                            if (*(&((x87_r7_2 < temp1_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_2, temp1_1) ? 1 : 0) << 0xa
                                | (x87_r7_2 == temp1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                            {
                                int32_t __saved_edi;
                                memcpy(&(&__saved_edi)[edx_2 + 6],
                                    &(&__saved_edi)[edx_2 + 5], (2 - edx_2) << 2);
                                int32_t ecx_3 = (2 - edx_2) << 3;
                                int32_t esi_5;
                                int32_t edi_3;
                                edi_3 = memcpy(&(&__saved_edi)[edx_2 * 2 + 0xa],
                                    &(&__saved_edi)[edx_2 * 2 + 8], ecx_3 & 0xfffffffc);
                                memcpy(edi_3, esi_5, ecx_3 & 3);
                                edi = var_48_1;
                            }
                            else
                            {
                                edx_2 += 1;
                                ecx_1 = &ecx_1[1];
                                esi_1 = &esi_1[2];

                                if (edx_2 >= 3)
                                    break;

                                continue;
                            }
                        }

                        if (edx_2 >= 3)
                            break;

                        *(&var_38 + (edx_2 << 3)) = x87_r7_2;
                        (&var_44)[edx_2] = eax_2;
                        break;
                    }
                }
            }

            eax_1 = a2;
            edi += 1;
            var_48_1 = edi;

            if (edi >= *(eax_1 + 0x58))
                break;
        }

        void* esi_2 = var_44;

        if (esi_2)
        {
            sub_4f9770(&var_20, esi_2);
            long double x87_r7_4 = var_38;
            long double temp0 = 0.0;
            x87_r7_4 - temp0;

            if (!(*(&((x87_r7_4 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp0) ? 1 : 0) << 0xa
                | (x87_r7_4 == temp0 ? 1 : 0) << 0xe) + 1) & 1))
            {
                *a1 = esi_2;
                return 1;
            }

            *a1 = esi_2;
            return 2;
        }
    }

    return 0;
}

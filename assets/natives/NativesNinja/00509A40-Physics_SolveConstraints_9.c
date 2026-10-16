#include "00509A40-Physics_SolveConstraints_9.h"
/* 0x00509a40 Physics_SolveConstraints_9 full linked: callers=0 callees=3 */
int32_t __stdcall sub_509a40(void* a1)

{
    int32_t var_3c = *(a1 + 4);
    int32_t var_38 = *(a1 + 8);
    int32_t var_34 = *(a1 + 0xc);
    int32_t* eax_2 = g_a7b4f0;
    int32_t var_30 = *(a1 + 0x10);
    void* var_48 = (g_a7b638 << 2) + &g_a7b2e0;

    if ((*(*eax_2 + 0xc))(eax_2, &var_3c) < 0)
    {
        Error_Show("Failed to create device.");

        while (true)
            /* nop */

        return;
    }

    int32_t ecx_3 = g_a7b638;
    int32_t ebx;
    int32_t var_4c_1 = ebx;
    int32_t esi;
    int32_t var_50_1 = esi;
    int32_t* eax_4 = *((ecx_3 << 2) + &g_a7b2e0);
    int32_t eax_5 = (**eax_4)(eax_4, 0x5349c0, (ecx_3 << 2) + &g_a7b4e0);
    int32_t* eax_6 = *((g_a7b638 << 2) + &g_a7b2e0);
    (*(*eax_6 + 8))(eax_6);

    if (eax_5 >= 0)
    {
        int32_t* eax_7 = *((g_a7b638 << 2) + &g_a7b4e0);
        int32_t* eax_9;

        if ((*(*eax_7 + 0x2c))(eax_7, 0x534c38) >= 0)
        {
            int32_t* esi_3 = *((g_a7b638 << 2) + &g_a7b4e0);

            if ((*(*esi_3 + 0x34))(esi_3, sub_48f0a0(), 5) < 0)
            {
                int32_t* eax_14 = *((g_a7b638 << 2) + &g_a7b4e0);
                (*(*eax_14 + 8))(eax_14);
                *((g_a7b638 << 2) + &g_a7b4e0) = 0;
                return 1;
            }

            int32_t var_18 = 0x18;
            int32_t var_14_1 = 0x10;
            int32_t var_c_1 = 1;
            int32_t var_8_1 = 0xffffff80;
            int32_t var_4_1 = 0x80;
            int32_t* esi_5 = &g_54e8ac;

            while (true)
            {
                int32_t var_10_1 = esi_5[-1];
                int32_t* eax_17 = *((g_a7b638 << 2) + &g_a7b2e0);
                int32_t eax_18 = (*(*eax_17 + 0x18))(eax_17, 4, &var_18);

                if (eax_18)
                {
                    if (eax_18 != 0x80070002)
                        break;

                    *esi_5 = 0;
                }

                esi_5 = &esi_5[2];

                if (esi_5 >= "d not get capabilities for one or more joysticks .")
                {
                    int32_t eax_19 = g_a7b638;
                    int32_t var_2c = 0x14;
                    int32_t var_28_1 = 0x10;
                    int32_t* eax_20 = *((eax_19 << 2) + &g_a7b2e0);
                    int32_t var_24_1 = 0;
                    int32_t var_20_1 = 0;
                    int32_t var_1c_1 = 1;
                    (*(*eax_20 + 0x18))(eax_20, 9, &var_2c);
                    int32_t var_20_2 = 0;
                    int32_t var_1c_2 = 0x2710;
                    int32_t* eax_22 = *((g_a7b638 << 2) + &g_a7b2e0);
                    (*(*eax_22 + 0x18))(eax_22, 6, &var_2c);
                    int32_t var_20_3 = 1;
                    int32_t var_1c_3 = g_a7b63c;
                    int32_t* esi_6 = &g_54e8a8;

                    while (true)
                    {
                        if (esi_6[1])
                        {
                            int32_t var_24_2 = *esi_6;
                            int32_t* eax_24 = *((g_a7b638 << 2) + &g_a7b2e0);

                            if ((*(*eax_24 + 0x18))(eax_24, 5, &var_2c))
                                break;
                        }

                        esi_6 = &esi_6[2];

                        if (esi_6 >= "Could not get capabilities for one or more joysticks .")
                        {
                            g_a7b638 += 1;
                            return 1;
                        }
                    }

                    break;
                }
            }

            eax_9 = *((g_a7b638 << 2) + &g_a7b4e0);
        }
        else
            eax_9 = *((g_a7b638 << 2) + &g_a7b4e0);

        (*(*eax_9 + 8))(eax_9);
        *((g_a7b638 << 2) + &g_a7b4e0) = 0;
        return 1;
    }

    Error_Show("Failed to obtain interface.");

    while (true)
        /* nop */
}

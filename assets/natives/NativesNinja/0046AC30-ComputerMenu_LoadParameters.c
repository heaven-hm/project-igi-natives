#include "0046AC30-ComputerMenu_LoadParameters.h"
/* 0x0046ac30 ComputerMenu_LoadParameters full linked: callers=0 callees=8 */
void* sub_46ac30(float a1)

{
    void* ebp = *(sub_46c060() + 0x14);
    int32_t edi = 0;
    float var_1c = g_c28b44;
    float var_18 = g_c28b48;
    void* result = Level_LoadObjects_7();

    if (!result)
    {
        float esi_1 = a1;

        if (*(esi_1 + 0x38))
        {
            QTask_CleanupTypes(esi_1);
            sub_46afb0(*(esi_1 + 0x38));
            *(esi_1 + 0x38) = 0;
        }

        float var_14;

        if (!*(esi_1 + 0x2c))
        {
            int32_t ecx_1 = *(Config_GetActivePlayerProfileRecord() + 0x538);
            long double x87_r6_1 = *(ebp + 0x1b4);

            if (ecx_1)
                x87_r6_1 = x87_r6_1 * -1f;

            long double x87_r6_6 = *(ebp + 0x1b0) * var_1c * 0.5f + *(esi_1 + 0x24);
            a1 = x87_r6_6;
            *(esi_1 + 0x24) = x87_r6_6;
            long double x87_r7_6 = x87_r6_1 * var_18 * 0.5f + *(esi_1 + 0x28);
            var_14 = x87_r7_6;
            *(esi_1 + 0x28) = x87_r7_6;
            long double x87_r7_8 = var_1c * 0.0484374985f;
            long double temp1_1 = a1;
            x87_r7_8 - temp1_1;

            if (*(&((x87_r7_8 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_8 == temp1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                x87_r7_8 = var_1c - var_1c * 0.0453125015f;
                long double temp3_1 = a1;
                x87_r7_8 - temp3_1;

                if (!(*(&((x87_r7_8 < temp3_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_8, temp3_1) ? 1 : 0) << 0xa
                        | (x87_r7_8 == temp3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                    x87_r7_8 = a1;
            }

            *(esi_1 + 0x24) = x87_r7_8;
            long double x87_r7_14 = var_18 * 0.0541666672f;
            long double temp2_1 = var_14;
            x87_r7_14 - temp2_1;

            if (*(&((x87_r7_14 < temp2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_14, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_14 == temp2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                x87_r7_14 = var_18 - var_18 * 0.0958333313f;
                long double temp4_1 = var_14;
                x87_r7_14 - temp4_1;

                if (!(*(&((x87_r7_14 < temp4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_14, temp4_1) ? 1 : 0) << 0xa
                        | (x87_r7_14 == temp4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                    x87_r7_14 = var_14;
            }

            *(esi_1 + 0x28) = x87_r7_14;
        }

        char eax_6 = g_c28f8c;

        if (eax_6 & 1)
            edi = 0x10;

        if (eax_6 & 2)
            edi |= 0x20;

        var_14 = *(esi_1 + 0x24);
        float var_c = var_14;
        int32_t var_4_1 = 0;
        var_14 = *(esi_1 + 0x28);
        float var_8_1 = var_14;
        sub_5055d0(*(esi_1 + 0x20), &var_c);
        void** i = *(esi_1 + 8);
        int32_t edx_4 = ~*(esi_1 + 0x30) & edi;
        *(esi_1 + 0x30) = edi;
        *(esi_1 + 0x34) = edx_4;
        result = *i;

        if (result && i)
        {
            int32_t edx_5 = g_afa7e0;

            do
            {
                int32_t* esi_2 = *i;
                void* eax_10;

                if (!esi_2)
                    eax_10 = nullptr;
                else
                {
                    int32_t eax_7 = *esi_2;
                    int32_t eax_8 = -(eax_7);
                    eax_10 = (eax_8 - eax_8) & esi_2;
                }

                *((edx_5 << 2) + &g_afa6e0) = eax_10;
                int32_t edx_6 = edx_5 + 1;
                int32_t eax_11 = 0;
                g_afa7e0 = edx_6;
                eax_11 = i[7];
                result = *((eax_11 << 2) + &g_a970e0);

                if (result)
                {
                    result = result(i);
                    edx_6 = g_afa7e0;
                }

                i = *((edx_6 << 2) + &g_afa6dc);
                edx_5 = edx_6 - 1;
                g_afa7e0 = edx_5;
            } while (i);
        }
    }

    return result;
}

#include "00441770-SCameraLens_Tick.h"
/* 0x00441770 SCameraLens_Tick full linked: callers=0 callees=15 */
int32_t sub_441770(double* a1)

{
    int32_t eax = *(a1 + 0x25d4);
    void* ebx = a1[0x4ba];

    if (!eax)
    {
        int32_t eax_2 = a1[0x4bb];
        *(a1 + 0x25d4) = 7;
        a1[0x4bb] = eax_2 ^ 1;
    }
    else
        *(a1 + 0x25d4) = eax - 1;

    int32_t eax_4 = *(a1 + 0x25dc);
    int32_t ecx;

    if (!eax_4)
    {
        ecx = a1[0x4bc] + 1;
        int32_t edx_1 = 0;
        *(a1 + 0x25dc) = 7;
        a1[0x4bc] = ecx;
        edx_1 = g_5be25c;

        if (ecx > edx_1 - 1)
            a1[0x4bc] = 0;
    }
    else
        *(a1 + 0x25dc) = eax_4 - 1;

    int16_t eax_6;
    eax_6 = *(ebx + 0x169);
    *(ebx + 0x16a) = eax_6;
    eax_6 = *(ebx + 0x168);
    double* var_30;

    if (eax_6)
    {
        long double x87_r7_5 = a1[0x1e];
        long double temp0_1 = *(ebx + 0x120);
        x87_r7_5 - temp0_1;
        long double x87_r7_6 = a1[0x1e];

        if (!(*(&((x87_r7_5 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_5 == temp0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            long double temp2_1 = *(ebx + 0x120);
            x87_r7_6 - temp2_1;

            if (!(*(&((x87_r7_6 < temp2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_6, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_6 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double x87_r7_9 = a1[0x1e] - 0.0436332338f;
                a1[0x1e] = x87_r7_9;
                long double temp6_1 = *(ebx + 0x120);
                x87_r7_9 - temp6_1;

                if (*(&((x87_r7_9 < temp6_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_9, temp6_1) ? 1 : 0) << 0xa
                        | (x87_r7_9 == temp6_1 ? 1 : 0) << 0xe) + 1) & 1)
                    a1[0x1e] = *(ebx + 0x120);
            }
        }
        else
        {
            long double x87_r7_7 = x87_r7_6 + 0.0436332338f;
            a1[0x1e] = x87_r7_7;
            long double temp3_1 = *(ebx + 0x120);
            x87_r7_7 - temp3_1;

            if (!(*(&((x87_r7_7 < temp3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_7, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r7_7 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                a1[0x1e] = *(ebx + 0x120);
        }

        int32_t var_2c_5 = 1;
        var_30 = a1;
        double var_18;
        WeaponType_UpdateAnim(&var_18, var_30, var_2c_5);
        var_18 = var_18 + a1[4];
        double var_10;
        double var_10_1 = var_10 + a1[5];
        double var_8;
        double var_8_1 = var_8 + a1[6];
        memcpy(&a1[0x22], &var_18, 0x18);
        memcpy(&a1[0x25], &a1[0xe], 0x28);
        a1[0x30] = 0;
        sub_489750(&a1[0x31], &a1[0x22], a1[0x4ba], 1);
        long double x87_r0;
        sub_441bf0(x87_r0, a1);
        ecx = sub_441ae0(a1);
    }
    else
    {
        long double x87_r7 = a1[0x1e];
        long double temp1_1 = -1.30899692f;
        x87_r7 - temp1_1;
        long double x87_r7_1 = a1[0x1e];

        if (!(*(&((x87_r7 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7 == temp1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            long double temp4_1 = -1.30899692f;
            x87_r7_1 - temp4_1;

            if (!(*(&((x87_r7_1 < temp4_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_1, temp4_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double x87_r7_4 = a1[0x1e] - 0.0436332338f;
                a1[0x1e] = x87_r7_4;
                long double temp7_1 = -1.30899692f;
                x87_r7_4 - temp7_1;

                if (*(&((x87_r7_4 < temp7_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_4, temp7_1) ? 1 : 0) << 0xa
                        | (x87_r7_4 == temp7_1 ? 1 : 0) << 0xe) + 1) & 1)
                    a1[0x1e] = 0xbfa78d36;
            }
        }
        else
        {
            long double x87_r7_2 = x87_r7_1 + 0.0436332338f;
            a1[0x1e] = x87_r7_2;
            long double temp5_1 = -1.30899692f;
            x87_r7_2 - temp5_1;

            if (!(*(&((x87_r7_2 < temp5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_2, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r7_2 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                a1[0x1e] = 0xbfa78d36;
        }

        *(ebx + 0x169) = 0;
        void* eax_7 = a1[0x4b8];

        if (eax_7)
        {
            ecx = sub_4e6c00(eax_7);
            a1[0x4b8] = 0;
        }

        int32_t* eax_8 = *(a1 + 0x25c4);

        if (eax_8)
        {
            void* eax_9 = *eax_8;

            if (eax_9)
                sub_4e6c00(eax_9);

            ecx = Qtask_UpdateList(*(a1 + 0x25c4));
            *(a1 + 0x25c4) = 0;
        }

        struct status_msg* eax_10 = a1[0x4b9];

        if (eax_10)
        {
            ecx = sub_4e6c00(eax_10);
            a1[0x4b9] = 0;
        }
    }

    if (*(a1 + 0x25cc))
    {
        *(a1 + 0x25cc) = 0;
        *(ebx + 0x170) = 1;
        var_30 = sub_4cec10(ebx + 0x138);
        sub_4c48d0(a1, var_30);
        *(a1 + 0xdc) = 0;
        ecx = sub_480fe0(&a1[4], 1, 0, 0x3e800000, 0x45000000, 0, 0, 7, 3, nullptr, "1009_01_1",
            "explo_camera", 0x15, 2, 0x47c80000, 0);
    }

🚫🚫    /* unimplemented  {fld st0, dword [ebp+0xf4]} */
🚫🚫    /* unimplemented  {fadd dword [ebx+0x108]} */
    float eax_16 = a1[0x1e];
    int32_t var_2c_7 = ecx;
🚫🚫    /* unimplemented  {fadd dword [ebx+0x124]} */
🚫🚫🚫    float var_2c_8 = /* float var_2c_8 = unimplemented  {fstp dword [esp], st0} */;
    /* unimplemented  {fstp dword [esp], st0} */
    var_30 = nullptr;
    int32_t result = sub_4b38e0(&a1[0xe], eax_16, var_30, var_2c_8);
    int32_t* i_1 = a1[1];

    if (*i_1)
    {
        int32_t* i = i_1;

        if (i)
        {
            int32_t edx_6 = g_afa7e0;

            do
            {
                int32_t* esi_2 = *i;
                void* eax_20;

                if (!esi_2)
                    eax_20 = nullptr;
                else
                {
                    int32_t eax_17 = *esi_2;
                    int32_t eax_18 = -(eax_17);
                    eax_20 = (eax_18 - eax_18) & esi_2;
                }

                *((edx_6 << 2) + &g_afa6e0) = eax_20;
                int32_t edx_7 = edx_6 + 1;
                int32_t eax_21 = 0;
                g_afa7e0 = edx_7;
                eax_21 = i[7];
                result = *((eax_21 << 2) + &g_a970e0);

                if (result)
                {
                    result = result(i);
                    edx_7 = g_afa7e0;
                }

                i = *((edx_7 << 2) + &g_afa6dc);
                edx_6 = edx_7 - 1;
                g_afa7e0 = edx_6;
            } while (i);
        }
    }

    return result;
}

#include "0042D440-Rotor_Tick.h"
/* 0x0042d440 Rotor_Tick full linked: callers=0 callees=3 */
void* Rotor_Tick(float a1)

{
    float ebx = a1;
    void* result = *(ebx + 0x13c);
    void* esi = *(ebx + 0x130);
    char* edi = *(result + 0x2d4);
    float var_30;

    if (*edi)
    {
        long double x87_r7_3 = *(*(esi + 0x1b4) + 8) * *(esi + 0x720) * 44.6008873f;
        a1 = x87_r7_3;
        long double temp1_1 = 0f;
        x87_r7_3 - temp1_1;
        result = (x87_r7_3 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == temp1_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
        {
            long double x87_r7_4 = 0f;
            long double x87_r6_1 = *(esi + 0x74);
            int32_t eax = *(esi + 0x8c);
            float edx_1 = *(esi + 0x80);
            float var_3c = x87_r6_1;
            long double temp2_1 = 0f;
            x87_r6_1 - temp2_1;
            int32_t var_34_1 = eax;
            int32_t edx_2 = *(esi + 0x84);
            int32_t var_28_1 = *(esi + 0x90);
            var_30 = *(esi + 0x78);
            int32_t var_2c_1 = edx_2;
            long double x87_r6_2;
            long double temp3_1;

            if (*(&((x87_r6_1 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, temp2_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == temp2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
            {
                x87_r6_2 = edx_1;
                temp3_1 = 0f;
                x87_r6_2 - temp3_1;
            }

            if (!(*(&((x87_r6_1 < temp2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_1, temp2_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == temp2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40) || !(*(&(
                (x87_r6_2 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, temp3_1) ? 1 : 0) << 0xa
                | (x87_r6_2 == temp3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            {
                int32_t var_34_2 = 0;
                x87_r7_4 = sub_4b2b30(&var_3c, &var_30);
            }

            long double st0_2;
            bool c1_1;
            bool c2_4;
            st0_2 = __fcos(x87_r7_4);
            int32_t var_c_1 = 0;
            int32_t var_8_1 = 0;
            int32_t var_4_1 = 0;
            int32_t var_18 = 0;
            float var_10_1 = a1;
            float var_14_1 = st0_2 * a1;
            result = sub_4ecf50(esi + 0xf0, &var_18);
        }
    }

    long double x87_r7_8 = *(esi + 0x720);
    long double temp0 = 0f;
    x87_r7_8 - temp0;
    result = (x87_r7_8 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, temp0) ? 1 : 0) << 0xa
        | (x87_r7_8 == temp0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        result = edi[1];

        if ((result || *edi) && !*(esi + 0x1b8))
        {
            int32_t var_24_1 = 0;
            int32_t var_20_1 = 0x46000000;
            int32_t var_1c_1 = 0;
            var_30 = 0f;
            int32_t var_2c_2 = 0;
            int32_t var_28_2 = 0;

            if (result)
                var_30 = -((*(*(esi + 0x1b4) + 8) * *(esi + 0x720) * 2.5f));
            else if (*edi)
                var_30 = *(*(esi + 0x1b4) + 8) * *(esi + 0x720) * 2.5f;

            result = sub_4ecf50(esi + 0xf0, &var_30);
        }
    }

    *(ebx + 0x138) = *(edi + 0xc) * *(edi + 8) * *(esi + 0x720) + *(ebx + 0x138);
    int32_t* i_1 = *(ebx + 8);

    if (*i_1)
    {
        int32_t* i = i_1;

        if (i)
        {
            int32_t edx_4 = g_afa7e0;

            do
            {
                int32_t* esi_1 = *i;
                void* eax_9;

                if (!esi_1)
                    eax_9 = nullptr;
                else
                {
                    int32_t eax_6 = *esi_1;
                    int32_t eax_7 = -(eax_6);
                    eax_9 = (eax_7 - eax_7) & esi_1;
                }

                *((edx_4 << 2) + &g_afa6e0) = eax_9;
                int32_t edx_5 = edx_4 + 1;
                int32_t eax_10 = 0;
                g_afa7e0 = edx_5;
                eax_10 = i[7];
                result = *((eax_10 << 2) + &g_a970e0);

                if (result)
                {
                    result = result(i);
                    edx_5 = g_afa7e0;
                }

                i = *((edx_5 << 2) + &g_afa6dc);
                edx_4 = edx_5 - 1;
                g_afa7e0 = edx_4;
            } while (i);
        }
    }

    return result;
}

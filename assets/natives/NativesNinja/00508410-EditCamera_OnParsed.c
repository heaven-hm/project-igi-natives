#include "00508410-EditCamera_OnParsed.h"
/* 0x00508410 EditCamera_OnParsed full linked: callers=0 callees=8 */
char* sub_508410(void* a1, char* a2)

{
    int32_t eax_1 = sub_4b8770(a1 + 0xa9);
    long double x87_r7 = *(a1 + 0x88);
    long double temp0 = 0.00100000005f;
    x87_r7 - temp0;
    *(a1 + 0xcc) = eax_1;
    long double x87_r7_1;

    if (!(*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_2 = *(a1 + 0x88);
        long double temp1_1 = 3f;
        x87_r7_2 - temp1_1;

        if (*(&((x87_r7_2 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            x87_r7_1 = *(a1 + 0x88);
        else
            x87_r7_1 = 3f;
    }
    else
        x87_r7_1 = 0.00100000005f;

    int32_t ecx = *(a1 + 0x90);
    *(a1 + 0x88) = x87_r7_1;
    int32_t eax_3 = sub_4f1030(ecx);
    int32_t* i_1 = *(a1 + 0x8c);
    int32_t* i_2 = sub_4f1030(i_1);

    if (eax_3 == a1)
        *(a1 + 0x90) = 0xffffffff;

    __builtin_memset(a1 + 0x48, 0, 0x18);
    *(a1 + 0x60) = 0x3f800000;
    *(a1 + 0x64) = 0;
    *(a1 + 0x68) = 0;
    *(a1 + 0x6c) = 0;
    *(a1 + 0x70) = 0x3f800000;
    *(a1 + 0x74) = 0;
    *(a1 + 0x78) = 0;
    *(a1 + 0x7c) = 0;
    *(a1 + 0x80) = 0x3f800000;
    *(a1 + 0x84) = 0;

    if (i_2)
    {
        int32_t eax_4 = 0;
        eax_4 = i_2[7];

        if (!*((eax_4 << 2) + &g_a994e0))
            *(a1 + 0x8c) = 0xffffffff;
        else
        {
            uint32_t eax_6 = sub_4f1a70();
            int32_t edx_1 = 0;
            edx_1 = i_2[7];
            int32_t eax_7 = *(((eax_6 * 0x180 + edx_1) << 2) + &g_a96ae0);
            i_1 = i_2;
            eax_7(i_1, a2);
            int32_t edx_2 = 0;
            edx_2 = i_2[7];
            int32_t var_8_1 = 0;
            void var_58;
            (*((edx_2 << 2) + &g_a994e0))(i_2, &var_58);
            memcpy(a1 + 0x48, &var_58, 0x18);
            void var_34;
            memcpy(a1 + 0x60, &var_34, 0x28);
        }
    }

    char* result = a2;

    if (!result || !*result)
    {
        int32_t* i = *(a1 + 8);

        if (*i && i)
        {
            int32_t ecx_5 = g_afa7e0;

            do
            {
                int32_t* edx_3 = *i;
                void* eax_11;

                if (!edx_3)
                    eax_11 = nullptr;
                else
                {
                    int32_t eax_8 = *edx_3;
                    int32_t eax_9 = -(eax_8);
                    eax_11 = (eax_9 - eax_9) & edx_3;
                }

                *((ecx_5 << 2) + &g_afa6e0) = eax_11;
                g_afa7e0 = ecx_5 + 1;
                uint32_t eax_13 = sub_4f1a70();
                int32_t edx_4 = 0;
                edx_4 = i[7];
                result = *(((eax_13 * 0x180 + edx_4) << 2) + &g_a96ae0);

                if (result)
                {
                    int32_t var_6c_3 = 0;
                    i_1 = i;
                    result = result(i_1, var_6c_3);
                }

                ecx_5 = g_afa7e0 - 1;
                g_afa7e0 = ecx_5;
                i = *((ecx_5 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}

#include "0046AE30-ComputerMenu_Setup.h"
/* 0x0046ae30 ComputerMenu_Setup full linked: callers=0 callees=8 */
int32_t sub_46ae30(int32_t a1)

{
    sub_46c060();
    int32_t ecx = g_c28b48;
    int32_t var_30 = ecx;
    int32_t var_34 = ecx;
    int32_t result =
        sub_4b4910(0f, 0f, g_c28b44, ecx, 0f, 127f, 0f, 0xc0040000, 0xffffffff, 0x44079eb8);
    int32_t* i = *(a1 + 8);

    if (*i && i)
    {
        int32_t ecx_1 = g_afa7e0;

        do
        {
            int32_t* edx_1 = *i;
            void* eax_4;

            if (!edx_1)
                eax_4 = nullptr;
            else
            {
                int32_t eax_1 = *edx_1;
                int32_t eax_2 = -(eax_1);
                eax_4 = (eax_2 - eax_2) & edx_1;
            }

            *((ecx_1 << 2) + &g_afa6e0) = eax_4;
            g_afa7e0 = ecx_1 + 1;
            int32_t eax_5 = sub_4e7530();
            int32_t eax_6 = 0;
            eax_6 = i[7];
            result = *(((eax_5 * 0x180 + eax_6) << 2) + &g_a96ae0);

            if (result)
                result = result(i);

            ecx_1 = g_afa7e0 - 1;
            g_afa7e0 = ecx_1;
            i = *((ecx_1 << 2) + &g_afa6e0);
        } while (i);
    }

    result = *(a1 + 0x2c);

    if (result)
        return result;

    return sub_4b50b0(0x5bddc8, *(a1 + 0x24) - sub_4b6ce0(0x5bddc8) * 0.5f,
        *(a1 + 0x28) - sub_4b6d00(0x5bddc8) * 0.5f, 128f, 128f, 128f, 0x3f800000, 0x44001eb8, 0,
        0x400c0000, 0xffffffff);
}

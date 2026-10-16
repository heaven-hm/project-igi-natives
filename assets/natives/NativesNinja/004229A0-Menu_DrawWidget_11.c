#include "004229A0-Menu_DrawWidget_11.h"
/* 0x004229a0 Menu_DrawWidget_11 full linked: callers=2 callees=3 */
int32_t Menu_DrawWidget_11(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)

{
    int32_t result = *(a1 + (a5 << 2) + 0x94);

    if (result)
    {
        int32_t eax;
        int32_t ecx_1;
        eax = sub_4b6d00(result);
        int32_t i_1 = a4 / eax;
        result = a6;

        if (result)
        {
            result = sub_4b6ce0(*(a1 + (a5 << 2) + 0x94));
            ecx_1 = a2 - result;
            a2 = ecx_1;
        }

        if (i_1 > 0)
        {
            int32_t i;

            do
            {
                int32_t var_2c_1 = ecx_1;
                result = sub_4b4e00(*(a1 + (a5 << 2) + 0x94), a2, a3, 128f, 128f, 128f, 0,
                    0, 0xffffffff);
                ecx_1 = a3 + eax;
                i = i_1;
                i_1 -= 1;
                a3 = ecx_1;
            } while (i != 1);
        }
    }

    return result;
}

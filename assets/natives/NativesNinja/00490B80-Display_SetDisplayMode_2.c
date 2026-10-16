#include "00490B80-Display_SetDisplayMode_2.h"
/* 0x00490b80 Display_SetDisplayMode_2 full linked: callers=1 callees=8 */
int32_t sub_490b80(void* a1, int32_t a2)

{
    int32_t result = sub_495cb0();

    if (result)
    {
        int32_t var_814_1 = 0x400;
        void var_800;
        sub_4b1f30(&var_800, a2);
        char* edi_1 = ".wav";
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond:0_1 = 0 != *edi_1;
            edi_1 = &edi_1[1];
            i -= 1;

            if (!cond:0_1)
                break;
        }

        int32_t ecx_1 = ~i;
        void* edi_3 = &var_800;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool cond:1_1 = 0 != *edi_3;
            edi_3 += 1;
            i_1 -= 1;

            if (!cond:1_1)
                break;
        }

        int32_t esi_2;
        int32_t edi_5;
        edi_5 = memcpy(edi_3 - 1, edi_1 - ecx_1, ecx_1 & 0xfffffffc);
        memcpy(edi_5, esi_2, ecx_1 & 3);
        void var_400;
        sub_497390(&var_400, &var_800);
        result = sub_496770(sub_497450(&var_400), sub_497410(&var_400), 1, nullptr);
        *(a1 + 0x158) = result;

        if (result)
            *(a1 + 0x29) = 1;
    }

    result = 1;
    return result;
}

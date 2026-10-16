#include "00486020-StatusMessageScreen_LoadParameters.h"
/* 0x00486020 StatusMessageScreen_LoadParameters full linked: callers=0 callees=7 */
int32_t sub_486020(void* a1)

{
    Level_LoadLevel_6();
    Level_LoadLevel_6();
    int32_t result = Display_GetActiveMode();
    int32_t i = 0;
    long double x87_r7_1 = g_c28b44 * 0.015625f;
    char* ebx = a1 + 0x40;
    long double x87_r7_2 = g_c28b48;
    float var_10_1 = x87_r7_2 * 0.020833334f;

    do
    {
        if (*ebx)
        {
            void* eax_1;
            int32_t ecx_1;
            eax_1 = sub_485d00(a1, i);
            ecx_1 = *(eax_1 + 0x1c6);

            if (!ecx_1)
                result = sub_4860f0(a1, i, x87_r7_1, var_10_1);
            else
            {
                int32_t var_24_2 = ecx_1;
                result = sub_4865b0(a1, i, x87_r7_1, x87_r7_2 * 0.864583313f);
            }

            var_10_1 = var_10_1 + 42.0;
        }

        i += 1;
        ebx = &ebx[0x102c];
    } while (i < 0x18);

    return result;
}

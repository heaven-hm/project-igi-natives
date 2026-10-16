#include "00413D10-HumanPlayer_CheckGround_11.h"
/* 0x00413d10 HumanPlayer_CheckGround_11 full linked: callers=1 callees=0 */
void* HumanPlayer_CheckGround_11(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, void* a7, int32_t a8, int32_t a9)

{
    if (*(a7 + 0x6d4) == 0x181)
        return a7;

    int32_t var_30 = a1;
    int32_t var_28_1 = a3;
    int32_t var_20_1 = a5;
    int32_t var_c_1 = a8;
    int32_t var_2c_1 = a2;
    int32_t var_4_1 = a9;
    int32_t ecx_6 = 0;
    ecx_6 = g_5391ae;
    int32_t var_24_1 = a4;
    int32_t var_1c_1 = a6;
    int32_t esi_1 = 0;
    esi_1 = *(a7 + 0x6d4);
    void* var_10_1 = a7;
    int32_t var_8_1 = *(a7 + 0x6e0);
    int32_t var_14_1 = 0;
    int32_t var_18_1 = 0;
    return (*(((ecx_6 * 0x180 + esi_1) << 2) + &g_a96ae0))(0, &var_30);
}

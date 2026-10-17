// Original IGI.EXE function: HumanPlayer_CheckGround_11 (VA 0x00413D10; static CFG gate FAIL, CFG score 0.667).
#include "HumanPlayer_CheckGround_11.h"
void* HumanPlayer_CheckGround_11(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, void* a7, int32_t a8, int32_t a9)

{
    if (*(a7 + 0x6d4) == 0x181)
        return a7;

    int32_t v_30 = a1;
    int32_t v_28_1 = a3;
    int32_t v_20_1 = a5;
    int32_t v_c_1 = a8;
    int32_t v_2c_1 = a2;
    int32_t v_4_1 = a9;
    int32_t objC6 = 0;
    objC6 = g_5391ae;
    int32_t v_24_1 = a4;
    int32_t v_1c_1 = a6;
    int32_t srcS1 = 0;
    srcS1 = *(a7 + 0x6d4);
    void* v_10_1 = a7;
    int32_t v_8_1 = *(a7 + 0x6e0);
    int32_t v_14_1 = 0;
    int32_t v_18_1 = 0;
    return (*(((objC6 * 0x180 + srcS1) << 2) + &g_a96ae0))(0, &v_30);
}

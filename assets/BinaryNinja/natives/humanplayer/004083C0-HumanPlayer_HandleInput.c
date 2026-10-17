// Original IGI.EXE function: HumanPlayer_HandleInput (VA 0x004083C0; static CFG gate FAIL, CFG score 0.667).
#include "HumanPlayer_HandleInput.h"
int32_t HumanPlayer_HandleInput(int16_t context, int32_t param_2, int32_t param_3, int32_t param_4, int32_t* param_5)

{
    int32_t item_18 = param_3;
    int32_t data_3 = 0;
    data_3 = g_53851a;
    return (*(((data_3 * 0x180 + context) << 2) + &g_a96ae0))(0, &item_18, item_18, param_2, *param_5,
        param_5[1], param_5[2], param_4);
}

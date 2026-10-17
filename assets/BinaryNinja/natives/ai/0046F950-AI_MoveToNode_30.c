// Original IGI.EXE function: AI_MoveToNode_30 (VA 0x0046F950; static CFG gate PASS, CFG score 1.000).
#include "AI_MoveToNode_30.h"
void* AI_MoveToNode_30(int32_t context, char param_2)

{
    void* result = Table_GetAt(context + 0x1c4, 0);

    if (!result)
        return result;

    char item_2f_1 = 0;
    char item_30 = param_2;
    int32_t item_2c_1 = 0;
    int32_t item_28_1 = 0;
    int32_t item_24_1 = 0;
    int32_t item_20_1 = 0;
    int32_t item_10_1 = 0;
    int32_t item_c_1 = 0;
    int32_t item_8_1 = 0x3f800000;
    int32_t item_4_1 = 0;
    uint32_t data_2 = AI_AlertAllies_17();
    int32_t data_3 = 0;
    data_3 = *(result + 0x1c);
    return (*(((data_2 * 0x180 + data_3) << 2) + &g_a96ae0))(result, &item_30);
}

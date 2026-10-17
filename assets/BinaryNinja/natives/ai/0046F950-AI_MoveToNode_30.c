// Original IGI.EXE function: AI_MoveToNode_30 (VA 0x0046F950; static CFG gate PASS, CFG score 1.000).
#include "AI_MoveToNode_30.h"
void* AI_MoveToNode_30(int32_t a1, char a2)

{
    void* result = Table_GetAt(a1 + 0x1c4, 0);

    if (!result)
        return result;

    char v_2f_1 = 0;
    char v_30 = a2;
    int32_t v_2c_1 = 0;
    int32_t v_28_1 = 0;
    int32_t v_24_1 = 0;
    int32_t v_20_1 = 0;
    int32_t v_10_1 = 0;
    int32_t v_c_1 = 0;
    int32_t v_8_1 = 0x3f800000;
    int32_t v_4_1 = 0;
    uint32_t valA2 = AI_AlertAllies_17();
    int32_t valA3 = 0;
    valA3 = *(result + 0x1c);
    return (*(((valA2 * 0x180 + valA3) << 2) + &g_a96ae0))(result, &v_30);
}

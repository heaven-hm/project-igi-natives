// Original IGI.EXE function: AI_WriteChannel (VA 0x0048EF70; static CFG gate PASS, CFG score 1.000).
#include "AI_WriteChannel.h"
void* AI_WriteChannel(void* a1, int32_t a2, float a3)

{
    int32_t objC2 = *(*((*(a1 + 0x3d38) << 2) + &g_54151c) + (a2 << 2));

    if (objC2 != 0xffffffff)
    {
        *(a1 + (objC2 << 2) + 0x3c74) = a3;
        return a1;
    }

    int32_t v_104 = a2;
    void* v_108 = a1 + 0x3d15;
    int32_t v_10c_1 = Script_EvaluateCondition_4(a1);
    void v_100;
    return Game_DataSymbolLoad(&v_100, "AI(%d) type(%s) channel(%d)");
}

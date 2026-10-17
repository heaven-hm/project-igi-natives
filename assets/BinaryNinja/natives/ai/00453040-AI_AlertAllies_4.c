// Original IGI.EXE function: AI_AlertAllies_4 (VA 0x00453040; static CFG gate PASS, CFG score 1.000).
#include "AI_AlertAllies_4.h"
int32_t AI_AlertAllies_4(int32_t* context, int32_t* param_2, void* param_3, int32_t param_4)

{
    *context = 0;
    *param_2 = 0;
    void* data_1 = Script_ExecuteLevelScript_23(param_3, param_4);
    *context = *(data_1 + 0x28) * 0.5f;
    int32_t result = *(data_1 + 0x28) * 0.5f;
    *param_2 = result;
    return result;
}

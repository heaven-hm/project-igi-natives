// IGI native provenance: AI_AlertAllies_4 - 0x00453040 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00453040-AI_AlertAllies_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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

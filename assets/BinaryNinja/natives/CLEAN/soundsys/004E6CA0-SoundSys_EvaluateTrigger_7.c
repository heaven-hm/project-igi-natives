// IGI native provenance: SoundSys_EvaluateTrigger_7 - 0x004E6CA0 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004E6CA0-SoundSys_EvaluateTrigger_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_EvaluateTrigger_7.h"
int32_t SoundSys_EvaluateTrigger_7(void* context, int32_t param_2)

{
    int32_t temp_val = 0;
    param_2 = param_2;
    temp_val = *(context + 0x1c);
    return (*(((*g_548818 * 0x180 + temp_val) << 2) + &g_a96ae0))(context, &param_2);
}

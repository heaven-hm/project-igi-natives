// IGI native provenance: AI_TakeCover - 0x00450D50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00450D50-AI_TakeCover.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_TakeCover.h"
int32_t AI_TakeCover(void* context, int32_t param_2)

{
    uint32_t data_val = AI_CheckHearing();
    int32_t temp_val = 0;
    temp_val = *(context + 0x1c);
    return (*(((data_val * 0x180 + temp_val) << 2) + &g_a96ae0))(context, param_2);
}

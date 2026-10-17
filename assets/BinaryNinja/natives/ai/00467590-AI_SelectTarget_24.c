// IGI native provenance: AI_SelectTarget_24 - 0x00467590 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00467590-AI_SelectTarget_24.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_SelectTarget_24.h"
int32_t AI_SelectTarget_24(int32_t context)

{
    int32_t temp_val = g_5bdc78;

    if (!temp_val)
        return 0;

    return temp_val + context * 0xcc + 0x70;
}

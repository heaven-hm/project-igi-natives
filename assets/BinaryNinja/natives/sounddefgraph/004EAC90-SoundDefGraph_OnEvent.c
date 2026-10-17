// IGI native provenance: SoundDefGraph_OnEvent - 0x004EAC90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EAC90-SoundDefGraph_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundDefGraph_OnEvent.h"
float SoundDefGraph_OnEvent(int32_t context, int32_t* param_2) {
    float result = Display_OpenDevice_12(*(context + 0x180), *(context + 0x184));
    result = SoundSys_SetFrequency_4() * result;

    if (result > *param_2)
        *param_2 = result;

    return result;
}

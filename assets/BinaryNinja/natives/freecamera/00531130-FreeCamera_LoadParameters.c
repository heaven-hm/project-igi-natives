// IGI native provenance: FreeCamera_LoadParameters - 0x00531130 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00531130-FreeCamera_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FreeCamera_LoadParameters.h"
int32_t FreeCamera_LoadParameters(void* context)

{
    char result = *(context + 0x84);

    if (!result)
        return result;

    int32_t* data_val = SoundSys_SetFrequency_9();
    int32_t item_18_1 = 0x42c80000;
    return Camera_SubmitFrame(*(context + 0x88), context + 0x48, context + 0x20, *(context + 0x60), 0x3f800000,
        data_val, 0, 0, 0.0f);
}

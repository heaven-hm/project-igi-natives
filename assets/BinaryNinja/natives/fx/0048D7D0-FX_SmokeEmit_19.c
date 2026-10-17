// IGI native provenance: FX_SmokeEmit_19 - 0x0048D7D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048D7D0-FX_SmokeEmit_19.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_SmokeEmit_19.h"
int32_t FX_SmokeEmit_19(void* context)

{
    int32_t* data_val = *(context + 0x3aa8);

    if (data_val)
    {
        AI_AlertAllies_2(data_val, context, *(context + 0x3aba));
        Combat_SetAimMode(*(context + 0x3aa8), context, 0xffffffff);
        *(context + 0x3aa8) = 0;
    }

    char result = Locomotion_GetState(context, 4);

    if (!result)
        return result;

    return AI_WriteChannel(context, 4, 1.0f);
}

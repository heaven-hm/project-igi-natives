// IGI native provenance: SoundSys_Update3DPosition_15 - 0x004EBBF0 - CFG score 75.0% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004EBBF0-SoundSys_Update3DPosition_15.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_Update3DPosition_15.h"
int32_t SoundSys_Update3DPosition_15(int32_t context, int32_t param_2, int32_t param_3)

{
    int32_t item_18;
    memset(&item_18, 0, 0x18);
    memcpy(context + 0x20, param_2, 0x28);
    memcpy(context + 0x48, param_3, 0x18);
    Display_CloseDevice_12(param_2, param_3, &item_18);
    return param_3;
}

// IGI native provenance: SoundSys_Update3DPosition_10 - 0x004E76E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E76E0-SoundSys_Update3DPosition_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_Update3DPosition_10.h"
int32_t SoundSys_Update3DPosition_10(int32_t* context, char* param_2, int32_t param_3)

{
    String_VFormat(0xa5ea78, param_2, param_3);
    return SoundSys_SetMasterVolume_10(context, 0xa5ea78);
}

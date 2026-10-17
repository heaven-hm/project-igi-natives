// IGI native provenance: FX_DebrisSpawn_14 - 0x00489EA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00489EA0-FX_DebrisSpawn_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_DebrisSpawn_14.h"
int32_t FX_DebrisSpawn_14(int32_t context, int32_t param_2, int32_t param_3, float param_4)

{
    return Bones_PlayAnimation(context + 0x68, 0, param_2, param_3, param_4);
}

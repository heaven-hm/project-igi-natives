// IGI native provenance: RenderLight_InvokeAction - 0x00530C40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00530C40-RenderLight_InvokeAction.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "RenderLight_InvokeAction.h"

int32_t RenderLight_InvokeAction(void* arg1)

{
    return SpriteParticleSystemDynCubeObj_Action(*(arg1 + 0x24), *(arg1 + 0x20));
}

// IGI native provenance: GlowTask_OnEvent - 0x004E9500 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E9500-GlowTask_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GlowTask_OnEvent.h"
struct status_msg* GlowTask_OnEvent(void* context)

{
    int32_t kind;
    kind = g_54da50;
    return QTask_HandleInput(context, kind, 0);
}

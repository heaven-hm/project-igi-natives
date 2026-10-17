// IGI native provenance: AI_TakeCover_27 - 0x0046AAF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046AAF0-AI_TakeCover_27.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_TakeCover_27.h"
struct status_msg* AI_TakeCover_27(void* context)

{
    int32_t kind;
    kind = g_5bdd90;
    return QTask_HandleInput(context, kind, 0);
}

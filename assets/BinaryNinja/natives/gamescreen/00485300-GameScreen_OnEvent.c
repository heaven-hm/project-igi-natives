// IGI native provenance: GameScreen_OnEvent - 0x00485300 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00485300-GameScreen_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GameScreen_OnEvent.h"
struct status_msg* GameScreen_OnEvent(void* context)

{
    int32_t kind;
    kind = g_5c8a28;
    return QTask_HandleInput(context, kind, 0);
}

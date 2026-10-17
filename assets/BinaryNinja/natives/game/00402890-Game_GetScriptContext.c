// IGI native provenance: Game_GetScriptContext - 0x00402890 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00402890-Game_GetScriptContext.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Game_GetScriptContext.h"
int32_t Game_GetScriptContext()

// Sig: void* Game_GetScriptContext(void)
// Note: Returns *(void**)(Game_GetContext()+0x20), the script/task context
// initialized during game setup. Level_Start passes it through the script-data
// wrapper; the main-menu path pushes its return value as Menu_Manager's first
// argument.
{
    struct frames_ctx* frames_ctx_1 = g_frames_ctx;
    int32_t result;
    result = frames_ctx_1->pad_00[0x20];
    *(&result + 1) = frames_ctx_1->pad_00[0x21];
    *(&result + 2) = frames_ctx_1->pad_00[0x22];
    *(&result + 3) = frames_ctx_1->pad_00[0x23];
    return result;
}

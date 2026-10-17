// IGI native provenance: GameScreen_Process - 0x00485320 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00485320-GameScreen_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GameScreen_Process.h"
int32_t GameScreen_Process(void* context)

{
    return *(context + 0x24);
}

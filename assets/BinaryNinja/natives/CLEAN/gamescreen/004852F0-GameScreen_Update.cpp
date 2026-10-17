// IGI native provenance: GameScreen_Update - 0x004852F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004852F0-GameScreen_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GameScreen_Update.h"
uint32_t GameScreen_Update()

{
    int32_t data_val;
    data_val = g_5c8a28;
    return QTask_CloseEvent_2(data_val);
}

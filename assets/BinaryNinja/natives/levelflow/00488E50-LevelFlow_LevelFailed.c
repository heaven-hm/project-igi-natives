// IGI native provenance: LevelFlow_LevelFailed - 0x00488E50 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00488E50-LevelFlow_LevelFailed.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "LevelFlow_LevelFailed.h"
int32_t LevelFlow_LevelFailed(int32_t context)

// Sig: void LevelFlow_LevelFailed()
// Note: Signals that the level FAILED - triggers the retail failure flow (fail
// sound, restart/quit menu). Takes no args. Call when your scripted objective
// fails.
{
    int32_t data_1 = *(g_bc2360 + 0x61);
    int32_t item_18 = data_1;
    char* item_8 = &g_567c74;
    double item_10 = data_1;
    memcpy(context, &item_18, 0x18);
    return context;
}

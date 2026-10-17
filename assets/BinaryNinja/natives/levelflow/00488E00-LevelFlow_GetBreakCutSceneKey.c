// Original IGI.EXE function: LevelFlow_GetBreakCutSceneKey (VA 0x00488E00; static CFG gate FAIL, CFG score 0.667).
#include "LevelFlow_GetBreakCutSceneKey.h"
int32_t LevelFlow_GetBreakCutSceneKey(int32_t context)

// Sig: int LevelFlow_GetBreakCutSceneKey()
// Note: RETURNS the key code currently bound to 'skip/break cutscene'. Takes no
// args. Use in cutscene player loops to detect the skip key press.
{
    char data_val = g_c28c63;
    int32_t entity_val;
    entity_val = data_val;
    int32_t item_18 = entity_val & 0x80;
    double item_10 = data_val & 0x80;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}

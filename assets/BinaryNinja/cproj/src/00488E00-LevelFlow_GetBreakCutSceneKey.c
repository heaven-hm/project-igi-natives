#include "gi_platform.h"
#include "00488E00-LevelFlow_GetBreakCutSceneKey.h"
int32_t LevelFlow_GetBreakCutSceneKey(int32_t a1)

// Sig: int LevelFlow_GetBreakCutSceneKey()
// Note: RETURNS the key code currently bound to 'skip/break cutscene'. Takes no
// args. Use in cutscene player loops to detect the skip key press.
{
    char valA = g_c28c63;
    int32_t objC;
    objC = valA;
    int32_t v_18 = objC & 0x80;
    double v_10 = valA & 0x80;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}

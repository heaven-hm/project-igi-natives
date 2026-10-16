#include "00488E00-LevelFlow_GetBreakCutSceneKey.h"
/* 0x00488e00 LevelFlow_GetBreakCutSceneKey full linked: callers=0 callees=1 */
int32_t LevelFlow_GetBreakCutSceneKey(int32_t a1)

// Sig: int LevelFlow_GetBreakCutSceneKey()
// Note: RETURNS the key code currently bound to 'skip/break cutscene'. Takes no
// args. Use in cutscene player loops to detect the skip key press.
{
    char eax = g_c28c63;
    int32_t ecx;
    ecx = eax;
    int32_t var_18 = ecx & 0x80;
    double var_10 = eax & 0x80;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}

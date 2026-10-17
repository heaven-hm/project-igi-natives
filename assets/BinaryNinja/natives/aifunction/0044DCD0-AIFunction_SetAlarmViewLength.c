// Original IGI.EXE function: AIFunction_SetAlarmViewLength (VA 0x0044DCD0; static CFG gate FAIL, CFG score 0.833).
#include "AIFunction_SetAlarmViewLength.h"
int32_t AIFunction_SetAlarmViewLength(long double context , int32_t param_2, float param_3 )

// Sig: void AIFunction_SetAlarmViewLength(int length)
// Note: Sets view length WHILE AN ALARM IS ON (separate stat from normal
// vision). Param: length = distance in engine units. Use in AI init.
{
    Profile_ValueSet(param_3, 0.0f);
    void* entity_val = g_5bda58;
    int32_t item_18 = 1;
    *(entity_val + 0xb8) = context * 4096.0;
    int32_t item_10 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(param_2, &item_18, 0x18);
    return param_2;
}

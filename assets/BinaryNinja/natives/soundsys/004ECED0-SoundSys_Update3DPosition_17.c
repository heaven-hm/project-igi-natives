// Original IGI.EXE function: SoundSys_Update3DPosition_17 (VA 0x004ECED0; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_Update3DPosition_17.h"
void* SoundSys_Update3DPosition_17(int32_t* context, float param_2, float param_3, float param_4, float param_5)

{
    long double fpu7 = param_3 * param_3;
    int32_t entity_val;
    int32_t item_4 = entity_val;
    param_4 = param_4 * param_4;
    param_3 = param_5 * param_5;
    int32_t item_8 = entity_val;
    int32_t item_c = entity_val;
    void* result = SoundSys_LoadSoundDef_16(context, param_2, (param_3 + param_4) * param_2 * 0.0833333358f,
        (param_3 + fpu7) * param_2 * 0.0833333358f, (param_4 + fpu7) * param_2 * 0.0833333358f);
    return result;
}

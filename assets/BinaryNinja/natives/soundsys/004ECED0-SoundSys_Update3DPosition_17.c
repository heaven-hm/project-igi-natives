// Original IGI.EXE function: SoundSys_Update3DPosition_17 (VA 0x004ECED0; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_Update3DPosition_17.h"
void* SoundSys_Update3DPosition_17(int32_t* a1, float a2, float a3, float a4, float a5)

{
    long double fpu7 = a3 * a3;
    int32_t objC;
    int32_t v_4 = objC;
    a4 = a4 * a4;
    a3 = a5 * a5;
    int32_t v_8 = objC;
    int32_t v_c = objC;
    void* result = SoundSys_LoadSoundDef_16(a1, a2, (a3 + a4) * a2 * 0.0833333358f,
        (a3 + fpu7) * a2 * 0.0833333358f, (a4 + fpu7) * a2 * 0.0833333358f);
    return result;
}

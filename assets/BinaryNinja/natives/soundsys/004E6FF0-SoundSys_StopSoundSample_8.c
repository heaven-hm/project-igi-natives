// Original IGI.EXE function: SoundSys_StopSoundSample_8 (VA 0x004E6FF0; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_StopSoundSample_8.h"
long double SoundSys_StopSoundSample_8(float* context)

{
    long double fpu7 = *context;
    long double f0 = 0.0f;
    fpu7 - f0;

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 1)
    {
        long double result = *(context + 0x18);
        *context = 0.0f;
        return result;
    }

    long double fpu_val_7_1 = *context;
    long double f1 = 1.0f;
    fpu_val_7_1 - f1;

    if (!(*(&((fpu_val_7_1 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f1 ? 1 : 0) << 0xe) + 1) & 0x41))
        *context = 1.0f;

    return *(context + 0x18);
}

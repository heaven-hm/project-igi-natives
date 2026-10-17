// Original IGI.EXE function: SoundDefTriggerOnce_OnEvent (VA 0x004E9DD0; static CFG gate PASS, CFG score 1.000).
#include "SoundDefTriggerOnce_OnEvent.h"
int32_t SoundDefTriggerOnce_OnEvent(void* context, float* param_2)

{
    void* dest_val = *(context + 0x14);
    int16_t result;

    if (dest_val)
        result = SoundSys_InitSoundSys_15();

    long double fpu_val_7_1;

    if (!dest_val || *(dest_val + 0x1c) != result)
        fpu_val_7_1 = *(context + 0xcc);
    else
        fpu_val_7_1 = Sys_OpenFileStream_11(context + 0xa0) + *(context + 0xcc);

    long double f0 = *param_2;
    fpu_val_7_1 - f0;
    result = (fpu_val_7_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_1 == f0 ? 1 : 0) << 0xe | 0x3800;

    if (*(&result + 1) & 0x41)
        return result;

    *param_2 = fpu_val_7_1;
    return result;
}

// IGI native provenance: SoundSys_AttachLipsync_18 - 0x004EE1B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EE1B0-SoundSys_AttachLipsync_18.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_AttachLipsync_18.h"
void* SoundSys_AttachLipsync_18(void* context)

{
    long double fpu7 = *(context + 0xc);
    long double f0 = 0.0f;
    fpu7 - f0;

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
            | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x40)
        SoundSys_InitSoundSys_19(context);
    else
    {
        long double fpu_val_7_1 = *(context + 0x10);
        long double f1_1 = 0.0f;
        fpu_val_7_1 - f1_1;

        if (*(&((fpu_val_7_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_1 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40)
            SoundSys_InitSoundSys_19(context);
        else
        {
            long double fpu_val_7_2 = *(context + 0x14);
            long double f2_1 = 0.0f;
            fpu_val_7_2 - f2_1;

            if (*(&((fpu_val_7_2 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f2_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_2 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                SoundSys_InitSoundSys_19(context);
        }
    }

    return context + 0xc;
}

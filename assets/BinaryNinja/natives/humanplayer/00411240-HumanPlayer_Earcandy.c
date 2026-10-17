// IGI native provenance: HumanPlayer_Earcandy - 0x00411240 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00411240-HumanPlayer_Earcandy.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_Earcandy.h"
void* HumanPlayer_Earcandy(void* context)

{
    long double fpu_val_7_1 = *(context + 0xdc8) - 0.00666666683f;
    long double f0 = 0.0f;
    fpu_val_7_1 - f0;
    *(context + 0xdc8) = fpu_val_7_1;
    bool c1 = /* bool c1 = unknown  {fst dword [source_val+0xdc8], fp0} */;

    if (!(*(&((fpu_val_7_1 < f0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
        | (FCMP_UO(fpu_val_7_1, f0) ? 1 : 0) << 0xa | (fpu_val_7_1 == f0 ? 1 : 0) << 0xe | 0x3800) + 1)
        & 1))
    {
        long double f1_1 = 1.0f;
        fpu_val_7_1 - f1_1;

        if (!(*(&((fpu_val_7_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_1 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            *(context + 0xdc8) = 0x3f800000;
    }
    else
        *(context + 0xdc8) = 0;

    long double fpu_val_7_3 = *(context + 0xdc8);
    long double f2 = 0.0f;
    fpu_val_7_3 - f2;
    void* data_1 = *(context + 0xdc4);

    if (*(&((fpu_val_7_3 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f2) ? 1 : 0) << 0xa
        | (fpu_val_7_3 == f2 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        if (data_1)
        {
            SoundSys_SetFrequency_7(data_1);
            *(context + 0xdc4) = 0;
        }
    }
    else if (!data_1)
        *(context + 0xdc4) = SoundSys_SetMasterVolume_7(*(context + 0x4ec), "earcandy");

    void* result = *(context + 0xdc4);

    if (!result)
        return result;

    return SoundSys_LoadSoundDef_7(result, 0xbf800000, *(context + 0xdc8));
}

// IGI native provenance: SoundDefSound_LoadParameters - 0x004E8840 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E8840-SoundDefSound_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundDefSound_LoadParameters.h"
int32_t SoundDefSound_LoadParameters(int32_t context)

{
    int32_t* source_val = context;

    if (*(source_val + 0xde))
        return QTask_FindType(source_val);

    if (source_val[0x37])
        return SoundSys_SetFrequency_13(source_val);

    long double fp0 = Display_OpenDevice_12(source_val[0x4a], source_val[0x4b]);
    long double f0 = source_val[0x48];
    fp0 - f0;

    if (*(&((fp0 < f0 ? 1 : 0) << 8 | (FCMP_UO(fp0, f0) ? 1 : 0) << 0xa
            | (fp0 == f0 ? 1 : 0) << 0xe) + 1) & 0x41 && !SoundSys_SetFrequency_8(&source_val[8]))
        return QTask_FindType(source_val);

    SoundSys_SetFrequency_13(source_val);
    int32_t result = SoundSys_SetFrequency_4();
    source_val[0x48] = 1.0f / result + source_val[0x48];
    return result;
}

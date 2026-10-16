#include "SoundDefSound_LoadParameters.h"
int32_t SoundDefSound_LoadParameters(int32_t a1)

{
    int32_t* srcS = a1;

    if (*(srcS + 0xde))
        return QTask_FindType(srcS);

    if (srcS[0x37])
        return SoundSys_SetFrequency_13(srcS);

    long double fp0 = Display_OpenDevice_12(srcS[0x4a], srcS[0x4b]);
    long double f0 = srcS[0x48];
    fp0 - f0;

    if (*(&((fp0 < f0 ? 1 : 0) << 8 | (FCMP_UO(fp0, f0) ? 1 : 0) << 0xa
            | (fp0 == f0 ? 1 : 0) << 0xe) + 1) & 0x41 && !SoundSys_SetFrequency_8(&srcS[8]))
        return QTask_FindType(srcS);

    SoundSys_SetFrequency_13(srcS);
    int32_t result = SoundSys_SetFrequency_4();
    srcS[0x48] = 1f / result + srcS[0x48];
    return result;
}

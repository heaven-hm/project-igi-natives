// IGI native provenance: SoundSys_SetMasterVolume_19 - 0x004EE8E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EE8E0-SoundSys_SetMasterVolume_19.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_SetMasterVolume_19.h"
char* SoundSys_SetMasterVolume_19(int32_t* context, char* param_2, int16_t param_3, int16_t param_4)

{
    *(param_2 + 0xc) = param_3;
    *(param_2 + 0xe) = param_4;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 2;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    *(param_2 + 8) = 0;
    *(param_2 + 0xa) = 0;
    param_2[0x10] = 0x18;
    param_2[0x11] = 0x20;

    if (!context)
        return param_2;

    return Sys_CloseFileStream_4(context, param_2, 0x12);
}

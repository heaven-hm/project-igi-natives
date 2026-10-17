// Original IGI.EXE function: SoundSys_AttachLipsync_4 (VA 0x004E63B0; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_AttachLipsync_4.h"
int32_t* SoundSys_AttachLipsync_4(int32_t* context, void** param_2)

{
    int32_t* result = context;
    int32_t* entity_val = result[1];

    if (entity_val)
        *entity_val = *result;

    void* entity_1 = *result;

    if (entity_1)
        *(entity_1 + 4) = result[1];

    if (*param_2 == result)
    {
        result = result[1];
        *param_2 = result;
    }

    return result;
}

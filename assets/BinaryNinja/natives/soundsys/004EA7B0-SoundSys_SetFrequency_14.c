// IGI native provenance: SoundSys_SetFrequency_14 - 0x004EA7B0 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004EA7B0-SoundSys_SetFrequency_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_SetFrequency_14.h"
void* SoundSys_SetFrequency_14(void* context)

{
    memset(context + 0x88, 0, 0x30);
    *(context + 0xd8) = 0xffffffff;
    *(context + 0xdc) = 0xffffffff;
    *(context + 0xe0) = 0xffffffff;
    *(context + 0xe4) = 0xffffffff;
    *(context + 0xb8) = 0x3f800000;
    *(context + 0xbc) = 0x3f800000;
    *(context + 0xc0) = 0x3f800000;
    *(context + 0xc8) = 0;
    *(context + 0xcc) = 0x3f800000;
    *(context + 0xd0) = 0x3f800000;
    int32_t* temp_val = context + 0x114;
    int32_t i_1 = 0xb;
    int32_t i;

    do
    {
        temp_val[-0xb] = 0x3f800000;
        *temp_val = 0x3f800000;
        temp_val = &temp_val[1];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    *(context + 0x140) = 0;
    *(context + 0x160) = 0;
    *(context + 0xd4) = 0;
    *(context + 0x180) = 0;
    *(context + 0x184) = 0;
    return context;
}

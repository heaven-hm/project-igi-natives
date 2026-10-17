// Original IGI.EXE function: Script_ParseEnumInt32_28 (VA 0x004FB5F0; static CFG gate FAIL, CFG score 0.750).
#include "Script_ParseEnumInt32_28.h"
void* Script_ParseEnumInt32_28(void* context)

{
    memset(context + 0x168, 0, 0x24);
    *(context + 0x18c) = 0x3f800000;
    *(context + 0x19c) = 0x3f800000;
    *(context + 0x1ac) = 0x3f800000;
    *(context + 0x190) = 0;
    *(context + 0x194) = 0;
    *(context + 0x198) = 0;
    *(context + 0x1a0) = 0;
    *(context + 0x1a4) = 0;
    *(context + 0x1a8) = 0;
    *(context + 0x1b0) = 0;
    *(context + 0x1b4) = 0;
    *(context + 0x1b8) = 0;
    *(context + 0x68c) = 0;
    *(context + 0x690) = 0;
    *(context + 0x6d8) = 1;
    *(context + 0x6d9) = 0;
    char* entity_val = context + 0x1d5;
    int32_t i_1 = 0x16;
    int32_t i;

    do
    {
        *entity_val = 0;
        entity_val = &entity_val[0x38];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    void* result = SoundSys_PlaySoundSample_17(context + 0xf0, 1000.0f, 9420.7998f, 20070.4004f, 6144.0f, 0x20);
    memcpy(context + 0x6c0, context + 0x20, 0x18);
    memcpy(context + 0x694, context + 0x70, 0x28);
    return result;
}

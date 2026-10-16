#include "Script_ParseEnumInt32_28.h"
void* Script_ParseEnumInt32_28(void* a1)

{
    __builtin_memset(a1 + 0x168, 0, 0x24);
    *(a1 + 0x18c) = 0x3f800000;
    *(a1 + 0x19c) = 0x3f800000;
    *(a1 + 0x1ac) = 0x3f800000;
    *(a1 + 0x190) = 0;
    *(a1 + 0x194) = 0;
    *(a1 + 0x198) = 0;
    *(a1 + 0x1a0) = 0;
    *(a1 + 0x1a4) = 0;
    *(a1 + 0x1a8) = 0;
    *(a1 + 0x1b0) = 0;
    *(a1 + 0x1b4) = 0;
    *(a1 + 0x1b8) = 0;
    *(a1 + 0x68c) = 0;
    *(a1 + 0x690) = 0;
    *(a1 + 0x6d8) = 1;
    *(a1 + 0x6d9) = 0;
    char* objC = a1 + 0x1d5;
    int32_t i_1 = 0x16;
    int32_t i;

    do
    {
        *objC = 0;
        objC = &objC[0x38];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    void* result = SoundSys_PlaySoundSample_17(a1 + 0xf0, 1000f, 9420.7998f, 20070.4004f, 6144f, 0x20);
    memcpy(a1 + 0x6c0, a1 + 0x20, 0x18);
    memcpy(a1 + 0x694, a1 + 0x70, 0x28);
    return result;
}

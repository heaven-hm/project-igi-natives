#include "NoiseQTask_LoadParameters.h"
int32_t NoiseQTask_LoadParameters(void* a1)

{
    Script_ExecuteLevelScript_6(a1 + 0xd8);
    *(a1 + 0x38) = 0x3f800000;
    *(a1 + 0x48) = 0x3f800000;
    *(a1 + 0x58) = 0x3f800000;
    __builtin_memset(a1 + 0x20, 0, 0x18);
    __builtin_memset(a1 + 0x88, 0, 0x44);
    *(a1 + 0xd0) = 0;
    *(a1 + 0x3c) = 0;
    *(a1 + 0x40) = 0;
    *(a1 + 0x44) = 0;
    *(a1 + 0x4c) = 0;
    *(a1 + 0x50) = 0;
    *(a1 + 0x54) = 0;
    __builtin_memset(a1 + 0x5c, 0, 0x28);
    *(a1 + 0x128) = 0;
    *(a1 + 0xcc) = 0x3ff00000;
    *(a1 + 0xd4) = 0x3ff00000;
    return 0;
}

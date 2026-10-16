#include "SplinePathNodeQTask_LoadParameters.h"
int32_t SplinePathNodeQTask_LoadParameters(void* a1)

{
    if (*(*(a1 + 0x14) + 0x1c) != g_54ed4e)
        Warning_Show("Parent must be of type SplinePathDynCubeObj");

    *(a1 + 0x38) = 0x3f800000;
    *(a1 + 0x48) = 0x3f800000;
    *(a1 + 0x58) = 0x3f800000;
    *(a1 + 0x6c) = 0x3f800000;
    __builtin_memset(a1 + 0x20, 0, 0x18);
    __builtin_memset(a1 + 0x78, 0, 0x24);
    *(a1 + 0x3c) = 0;
    *(a1 + 0x40) = 0;
    *(a1 + 0x44) = 0;
    *(a1 + 0x4c) = 0;
    *(a1 + 0x50) = 0;
    *(a1 + 0x54) = 0;
    *(a1 + 0x5c) = 0;
    *(a1 + 0x60) = 0;
    *(a1 + 0x64) = 0;
    *(a1 + 0x68) = 0;
    *(a1 + 0x70) = 0;
    *(a1 + 0xc4) = 1;
    __builtin_memset(a1 + 0x9c, 0, 0x28);
    return 0;
}

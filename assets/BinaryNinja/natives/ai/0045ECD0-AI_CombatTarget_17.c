// Original IGI.EXE function: AI_CombatTarget_17 (VA 0x0045ECD0; static CFG gate FAIL, CFG score 0.750).
#include "AI_CombatTarget_17.h"
int32_t AI_CombatTarget_17(void* a1)

{
    __builtin_memset(a1 + 0x110, 0, 0xa0);
    __builtin_memset(a1 + 0x1b0, 0, 0xa0);
    *(a1 + 0x250) = 0;
    *(a1 + 0x33c) = 0;
    *(a1 + 0x33d) = 0;
    Weapon_ComputeAccuracy_8(a1 + 0x340);
    *(a1 + 0x4f0) = 1;
    *(a1 + 0x4f4) = 0;
    __builtin_memset(a1 + 0x4f8, 0, 0x19);
    __builtin_memset(a1 + 0x514, 0, 0x19);
    *(a1 + 0x530) = 0x3f800000;
    *(a1 + 0x538) = 0xffffffff;
    *(a1 + 0x64c) = 1;
    __builtin_memset(a1 + 0x664, 0, 0x31);
    *(a1 + 0x695) = 1;
    *(a1 + 0x696) = 0;
    *(a1 + 0x697) = 0;
    *(a1 + 0x698) = 0;
    __builtin_memset(a1 + 0x6a0, 0, 0x70);
    AI_CombatTarget_20(a1);
    *(a1 + 0x710) = 0;
    *(a1 + 0x720) = 0;
    *(a1 + 0x714) = 0x41d00000;
    *(a1 + 0x718) = 0;
    *(a1 + 0x724) = 0x41d00000;
    *(a1 + 0x768) = 0;
    *(a1 + 0x76c) = 0;
    *(a1 + 0x7b0) = 0;
    *(a1 + 0x7b4) = 0;
    *(a1 + 0x7b8) = 0;
    *(a1 + 0x7b9) = 0;
    *(a1 + 0x7bc) = 0;
    *(a1 + 0x838) = 0;
    *(a1 + 0x83c) = 0;
    *(a1 + 0x840) = 0;
    *(a1 + 0x844) = 0xffffffff;
    *(a1 + 0x848) = 0xffffffff;
    *(a1 + 0x84c) = 0;
    *(a1 + 0xcf5) = 0;
    *(a1 + 0xcf6) = 1;
    return 0x41d00000;
}

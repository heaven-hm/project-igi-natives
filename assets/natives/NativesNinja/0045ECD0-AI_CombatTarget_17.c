#include "0045ECD0-AI_CombatTarget_17.h"
/* 0x0045ecd0 AI_CombatTarget_17 full linked: callers=1 callees=8 */
int32_t sub_45ecd0(void* a1)

{
    __builtin_memset(a1 + 0x110, 0, 0xa0);
    __builtin_memset(a1 + 0x1b0, 0, 0xa0);
    *(a1 + 0x250) = 0;
    *(a1 + 0x33c) = 0;
    *(a1 + 0x33d) = 0;
    sub_47cdd0(a1 + 0x340);
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
    sub_463580(a1);
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

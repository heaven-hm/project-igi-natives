#include "Physics_SolveConstraints_4.h"
void* Physics_SolveConstraints_4(void* a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, char a7, int32_t a8)

{
    *(a1 + 0x38) = a2;
    *(a1 + 0x40) = a4;
    *(a1 + 0x3c) = a3;
    *(a1 + 0x48) = a6;
    *(a1 + 0x44) = a5;
    *(a1 + 0x4e) = 0;
    *(a1 + 0x4d) = 0;
    *(a1 + 0x4c) = a7;
    *(a1 + 0x50) = a8;
    return a1;
}

#include "gi_platform.h"
#include "004F1A80-Script_UndefinedParameterTy.h"
int32_t* Script_UndefinedParameterTy(int32_t* a1, int32_t a2, int32_t a3, int32_t a4, char a5, int32_t a6)

{
    if (a4 != 0xffffffff)
    {
        (*(int32_t*)(uintptr_t)((*a1 << 4) + a1[2])) = a3 - a2;
        (*(int32_t*)(uintptr_t)((*a1 << 4) + a1[2] + 4)) = a4;
        (*(int32_t*)(uintptr_t)((*a1 << 4) + a1[2] + 8)) = a6;
        (*(int32_t*)(uintptr_t)((*a1 << 4) + a1[2] + 0xc)) = a5;
        *a1 += 1;
        return a1;
    }

    Error_Show("Undefined parameter type.");

    while (true)
        /* nop */
}

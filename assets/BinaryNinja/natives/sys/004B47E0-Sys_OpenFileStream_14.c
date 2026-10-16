#include "Sys_OpenFileStream_14.h"
int32_t Sys_OpenFileStream_14(int32_t* a1, int32_t a2)

{
    Sys_ResolveSymbol_13(a1);
    int32_t tmpD = a1[1];
    *a1 ^= a2;
    int32_t result = a2 << 9;
    int32_t objC5 = a1[2] - result;
    a1[1] = tmpD + (a2 << 0xf);
    a1[2] = objC5;
    return result;
}

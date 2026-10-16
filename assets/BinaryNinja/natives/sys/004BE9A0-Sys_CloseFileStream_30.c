#include "Sys_CloseFileStream_30.h"
int32_t Sys_CloseFileStream_30(int32_t* a1)

{
    Sys_PopStack_29(a1, *(*a1 + a1[5] + 1));
    int32_t result = a1[5] + 5;
    a1[5] = result;
    return result;
}

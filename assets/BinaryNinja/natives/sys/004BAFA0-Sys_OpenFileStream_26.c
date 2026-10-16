#include "Sys_OpenFileStream_26.h"
int32_t __convention("regparm") Sys_OpenFileStream_26(int32_t a1, int32_t a2, int32_t a3, void* a4, char* a5)

{
    int32_t result = a3;
    int32_t* valA1 = *(a4 + 0x1c);
    result = 0;
    DynObj_CreateMagicObject_2(valA1, &result, a5);
    return result;
}

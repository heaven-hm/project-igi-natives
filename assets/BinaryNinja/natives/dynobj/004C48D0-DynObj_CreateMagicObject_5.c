#include "DynObj_CreateMagicObject_5.h"
int32_t DynObj_CreateMagicObject_5(void* a1, int32_t a2)

{
    *(a1 + 0x6c) = a2;
    return a2;
}

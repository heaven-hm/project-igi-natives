#include "DynObj_LinkDynamicCube_11.h"
int32_t DynObj_LinkDynamicCube_11(int32_t a1, int32_t a2, int32_t a3)

{
    *(a1 + (a2 << 2) + 0xd3c) = a3;
    return a3;
}

#include "gi_platform.h"
#include "004522A0-AI_MoveToNode_3.h"
int32_t* AI_MoveToNode_3(void* a1, int32_t a2, double* a3, char a4)

{
    (*(int32_t*)(uintptr_t)(a1 + 0x3ec8)) = 0x40490fdb;
    (*(int32_t*)(uintptr_t)(a1 + 0x3ecc)) = 0x40490fdb;
    return AI_ExpandRoute(a1, a2, a3, a4);
}

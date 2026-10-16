#include "ComputerTextItem_Process_2.h"
struct status_msg* ComputerTextItem_Process_2(void* a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, char a7, uint32_t a8, uint32_t a9, void* a10, char* a11, uint32_t a12, int32_t a13)

{
    int32_t kind;
    kind = g_5be2bc;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    Physics_SolveConstraints_4(result, a2, a3, a4, a5, a6, a7, a13);
    int32_t** valA4 = Sys_OpenFileStream_18(a10, a8, a9, a11);
    result->head[0x1e] = valA4;
    valA4[9] |= 0x40000;
    *(result->head[0x1e] + 0xc) = 0x44029eb8;
    result->head[0x1f] = a12;
    uint32_t tmpD5 = result->head[0x1e];
    result->head[0x20] = a8;
    result->head[0x21] = a9;
    a7 = Sys_CheckHeap_21(tmpD5);
    uint32_t valA7 = result->head[0x1e];
    result->head[0x22] = a7;
    int32_t valA8 = Sys_AllocateMemory_22(valA7);
    uint32_t objC8 = result->head[0x20];
    uint32_t tmpD6 = result->head[0x21];
    a7 = valA8;
    long double x87_r7_1 = a7;
    result->head[0x19] = result->head[0x22];
    result->head[0x1d] = result;
    result->head[0x17] = objC8;
    result->head[0x23] = x87_r7_1;
    result->head[0x1a] = x87_r7_1;
    result->head[0x18] = tmpD6;
    return result;
}

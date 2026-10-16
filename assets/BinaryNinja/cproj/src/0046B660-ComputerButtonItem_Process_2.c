#include "gi_platform.h"
#include "0046B660-ComputerButtonItem_Process_2.h"
struct status_msg* ComputerButtonItem_Process_2(float a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, char a7, float a8, float a9, char a10, void* a11, char* a12, uint32_t a13, uint32_t a14, uint32_t a15, int32_t a16)

{
    int32_t kind;
    kind = g_5be2b4;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    Physics_SolveConstraints_4(result, a2, a3, a4, a5, a6, a7, a16);
    result->head[0x20] = a10;
    result->head[0x22] = a13;
    result->head[0x23] = a14;
    result->head[0x24] = a15;
    a7 = Sys_CloseFileStream_17(a13);
    a10 = a7;
    a7 = Sys_ExecuteBytecode_17(a13);
    char* dstD1 = a12;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD1;
        dstD1 = &dstD1[1];
        i -= 1;

        if (!cond_0_1)
            break;
    }

    a1 = a7;
    int32_t objC4 = ~i;
    long double x87_r7_6;

    if (objC4 == 1)
    {
        x87_r7_6 = 0.0f;
        result->head[0x21] = 0;
        a7 = 0;
    }
    else
    {
        int32_t v_10_1 = objC4 - 1;
        int32_t v_14_1 = objC4 - 1;
        int32_t** valA7 = Sys_OpenFileStream_18(a11, a10 + a8, a9, a12);
        result->head[0x21] = valA7;
        valA7[9] |= 0x40000;
        *(result->head[0x21] + 0xc) = 0x44029eb8;
        a7 = Sys_CheckHeap_21(result->head[0x21]);
        a7 = a7;
        x87_r7_6 = Sys_AllocateMemory_22(result->head[0x21]);
    }

    result->head[0x1e] = a8;
    result->head[0x17] = a8;
    result->head[0x19] = a7 + a10;
    long double x87_r6_2 = a1;
    x87_r6_2 - x87_r7_6;
    result->head[0x1f] = a9;
    result->head[0x1d] = result;
    result->head[0x18] = a9;

    if (!(*(&((x87_r6_2 < x87_r7_6 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_6) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_6 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
        x87_r7_6 = a1;

    result->head[0x1a] = x87_r7_6;
    return result;
}

#include "0046B970-ComputerTextItem_Process_2.h"
/* 0x0046b970 ComputerTextItem_Process_2 full linked: callers=6 callees=5 */
struct status_msg* sub_46b970(void* a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, char a7, uint32_t a8, uint32_t a9, void* a10, char* a11, uint32_t a12, int32_t a13)

{
    int32_t kind;
    kind = g_5be2bc;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    sub_505c10(result, a2, a3, a4, a5, a6, a7, a13);
    int32_t** eax_4 = sub_4b6ec0(a10, a8, a9, a11);
    result->head[0x1e] = eax_4;
    eax_4[9] |= 0x40000;
    *(result->head[0x1e] + 0xc) = 0x44029eb8;
    result->head[0x1f] = a12;
    uint32_t edx_5 = result->head[0x1e];
    result->head[0x20] = a8;
    result->head[0x21] = a9;
    a7 = sub_4b7df0(edx_5);
    uint32_t eax_7 = result->head[0x1e];
    result->head[0x22] = a7;
    int32_t eax_8 = sub_4b7e00(eax_7);
    uint32_t ecx_8 = result->head[0x20];
    uint32_t edx_6 = result->head[0x21];
    a7 = eax_8;
    long double x87_r7_1 = a7;
    result->head[0x19] = result->head[0x22];
    result->head[0x1d] = result;
    result->head[0x17] = ecx_8;
    result->head[0x23] = x87_r7_1;
    result->head[0x1a] = x87_r7_1;
    result->head[0x18] = edx_6;
    return result;
}

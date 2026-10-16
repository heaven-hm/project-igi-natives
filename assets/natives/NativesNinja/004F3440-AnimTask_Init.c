#include "004F3440-AnimTask_Init.h"
/* 0x004f3440 AnimTask_Init full linked: callers=1 callees=22 */
int32_t sub_4f3440()

{
    int32_t var_4 = 0;
    g_54e1d8 = TaskType_Register("AnimTask", 0x20160, sub_5034d0(), 0);
    g_54e1da = QTask_UnableToAllocateEven(0);
    g_54e1db = QTask_UnableToAllocateEven(0);
    g_54e1dc = QTask_UnableToAllocateEven(0);
    g_54e1dd = QTask_UnableToAllocateEven(0);
    g_54e1de = QTask_UnableToAllocateEven(0);
    g_54e1df = QTask_UnableToAllocateEven(0);
    g_54e1e0 = QTask_UnableToAllocateEven(0);
    g_54e1e4 = sub_4f19c0("AnimData", 0xffffffff);
    int32_t eax_10 = sub_4f1b60();
    sub_4f1bc0(g_54e1e4, eax_10, sub_4f3570);
    int32_t eax_12 = sub_4f1b80();
    sub_4f1bc0(g_54e1e4, eax_12, sub_4d3710);
    int32_t eax_13 = sub_4f1ba0();
    sub_4f1bc0(g_54e1e4, eax_13, sub_4f3630);
    int32_t eax_14 = sub_4f1bb0();
    sub_4f1bc0(g_54e1e4, eax_14, sub_4f3670);
    int32_t eax_16 = sub_4f1b90();
    sub_4f1bc0(g_54e1e4, eax_16, sub_4f36b0);
    int32_t eax_17 = sub_4f1b70();
    return sub_4f1bc0(g_54e1e4, eax_17, sub_4f3610);
}

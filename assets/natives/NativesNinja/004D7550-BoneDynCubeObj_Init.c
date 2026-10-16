#include "004D7550-BoneDynCubeObj_Init.h"
/* 0x004d7550 BoneDynCubeObj_Init full linked: callers=1 callees=10 */
int32_t sub_4d7550()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("BoneDynCubeObj", 0xd8, g_54875c, 0);
    g_548618 = eax_1;
    char eax_2 = QTask_UnableToAllocateEven(eax_1);
    int16_t ecx = g_548618;
    g_54861a = eax_2;
    QTask_RemoveEventCallback(ecx, 4, sub_5124c0);
    QTask_RemoveEventCallback(g_548618, 7, sub_4d9480);
    QTask_RemoveEventCallback(g_548618, 9, sub_4d7620);
    int32_t edx_1 = QTask_RemoveEventCallback(g_548618, 8, sub_4d88d0);
    edx_1 = g_54861a;
    QTask_RemoveEventCallback(g_548618, edx_1, sub_4f4390);
    int32_t eax_5 = sub_4cea10();
    QTask_RemoveEventCallback(g_548618, eax_5, sub_4d94f0);
    return QTask_RemoveEventCallback(g_548618, 6, sub_4d95a0);
}

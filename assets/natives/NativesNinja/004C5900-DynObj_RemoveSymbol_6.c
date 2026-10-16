#include "004C5900-DynObj_RemoveSymbol_6.h"
/* 0x004c5900 DynObj_RemoveSymbol_6 full linked: callers=1 callees=17 */
int32_t sub_4c5900()

{
    QTask_CleanupEvents(0, 8);
    QTask_CleanupEvents(0, 9);
    QTask_CleanupEvents(0, 0xa);
    QTask_CleanupEvents(0, 0xb);
    QTask_CleanupEvents(0, 0xc);
    QTask_CleanupEvents(0, 0xd);
    QTask_CleanupTypes_2(4, 0);
    QTask_CleanupTypes_2(5, 1);
    QTask_CleanupTypes_2(8, 3);
    QTask_CleanupTypes_2(9, 4);
    QTask_CleanupTypes_2(0xa, 5);
    QTask_CleanupTypes_2(0xb, 6);
    QTask_CleanupTypes_2(0xd, 2);
    g_548176 = QTask_UnableToAllocateEven(0x181);
    int32_t eax_1 = QTask_UnableToAllocateEven(0x181);
    g_548177 = eax_1;
    int32_t var_3c = eax_1;
    eax_1 = g_54875c;
    int32_t result = QTask_RemoveEventCallback(eax_1, var_3c, sub_4c5a10);
    __builtin_memset(&g_a44348, 0, 0x44);
    return result;
}

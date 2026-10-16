#include "DynObj_RemoveSymbol_6.h"
int32_t DynObj_RemoveSymbol_6()

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
    g_548176 = QTask_UnableToAllocateEvent(0x181);
    int32_t valA1 = QTask_UnableToAllocateEvent(0x181);
    g_548177 = valA1;
    int32_t v_3c = valA1;
    valA1 = g_54875c;
    int32_t result = QTask_RemoveEventCallback(valA1, v_3c, DynObj_RegisterSymbol_7);
    __builtin_memset(&g_a44348, 0, 0x44);
    return result;
}

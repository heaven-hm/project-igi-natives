// IGI native provenance: DynObj_RemoveSymbol_6 - 0x004C5900 - CFG score 98.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C5900-DynObj_RemoveSymbol_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
    int32_t data_1 = QTask_UnableToAllocateEvent(0x181);
    g_548177 = data_1;
    int32_t item_3c = data_1;
    data_1 = g_54875c;
    int32_t result = QTask_RemoveEventCallback(data_1, item_3c, DynObj_RegisterSymbol_7);
    memset(&g_a44348, 0, 0x44);
    return result;
}

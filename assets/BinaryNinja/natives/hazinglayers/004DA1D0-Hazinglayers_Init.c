// IGI native provenance: Hazinglayers_Init - 0x004DA1D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004DA1D0-Hazinglayers_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Hazinglayers_Init.h"
int32_t Hazinglayers_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("Hazinglayers", 0x90, g_548638, 0);
    g_a5e304 = data_1;
    QTask_RemoveEventCallback(data_1, 0x11, sub_4da240);
    QTask_RemoveEventCallback(g_a5e304, 0x12, sub_4da2a0);
    QTask_RemoveEventCallback(g_a5e304, 4, sub_4da270);
    return QTask_RemoveEventCallback(g_a5e304, 5, sub_4da2c0);
}

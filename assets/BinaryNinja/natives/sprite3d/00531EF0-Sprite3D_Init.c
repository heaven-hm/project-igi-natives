// IGI native provenance: Sprite3D_Init - 0x00531EF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00531EF0-Sprite3D_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sprite3D_Init.h"
int32_t Sprite3D_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("Sprite3D", 0x88, g_54875c, 0);
    g_c28f98 = data_1;
    QTask_RemoveEventCallback(data_1, 4, Sprite3D_LoadParameters);
    return Sys_FreeMemory_2(0xc28fa0, 0x88, 0x64, 4);
}

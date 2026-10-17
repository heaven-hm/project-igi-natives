// IGI native provenance: PointlightDynCubeObj_Init - 0x00531300 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00531300-PointlightDynCubeObj_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PointlightDynCubeObj_Init.h"
int32_t PointlightDynCubeObj_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("PointlightDynCubeObj", 0x80, g_54875c, 0);
    int16_t entity_val = g_54875c;
    int32_t item_18 = 0;
    g_54f800 = data_1;
    int16_t data_2 = TaskType_Register("SpotlightDynCubeObj", 0x90, entity_val, 0);
    int16_t temp_val = g_54f800;
    g_54f802 = data_2;
    QTask_RemoveEventCallback(temp_val, 4, sub_531200);
    QTask_RemoveEventCallback(g_54f800, 5, j_Render_DrawLightmapMesh_13);
    QTask_RemoveEventCallback(g_54f800, 7, sub_5313f0);
    QTask_RemoveEventCallback(g_54f802, 4, sub_531220);
    QTask_RemoveEventCallback(g_54f802, 5, j_Render_DrawLightmapMesh_13);
    QTask_RemoveEventCallback(g_54f802, 7, sub_531480);
    Sys_FreeMemory_2(&g_afa800, 4, 0xa, 4);
    return Sys_FreeMemory_2(0xafa820, 4, 0xa, 4);
}

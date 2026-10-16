#include "PointlightDynCubeObj_Init.h"
int32_t PointlightDynCubeObj_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("PointlightDynCubeObj", 0x80, g_54875c, 0);
    int16_t objC = g_54875c;
    int32_t v_18 = 0;
    g_54f800 = valA1;
    int16_t valA2 = TaskType_Register("SpotlightDynCubeObj", 0x90, objC, 0);
    int16_t tmpD = g_54f800;
    g_54f802 = valA2;
    QTask_RemoveEventCallback(tmpD, 4, sub_531200);
    QTask_RemoveEventCallback(g_54f800, 5, j_Render_DrawLightmapMesh_13);
    QTask_RemoveEventCallback(g_54f800, 7, sub_5313f0);
    QTask_RemoveEventCallback(g_54f802, 4, sub_531220);
    QTask_RemoveEventCallback(g_54f802, 5, j_Render_DrawLightmapMesh_13);
    QTask_RemoveEventCallback(g_54f802, 7, sub_531480);
    Sys_FreeMemory_2(&g_afa800, 4, 0xa, 4);
    return Sys_FreeMemory_2(0xafa820, 4, 0xa, 4);
}

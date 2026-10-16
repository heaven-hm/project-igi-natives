#include "00531300-PointlightDynCubeObj_Init.h"
/* 0x00531300 PointlightDynCubeObj_Init full linked: callers=1 callees=10 */
int32_t sub_531300()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("PointlightDynCubeObj", 0x80, g_54875c, 0);
    int16_t ecx = g_54875c;
    int32_t var_18 = 0;
    g_54f800 = eax_1;
    int16_t eax_2 = TaskType_Register("SpotlightDynCubeObj", 0x90, ecx, 0);
    int16_t edx = g_54f800;
    g_54f802 = eax_2;
    QTask_RemoveEventCallback(edx, 4, sub_531200);
    QTask_RemoveEventCallback(g_54f800, 5, j_sub_4daa00);
    QTask_RemoveEventCallback(g_54f800, 7, sub_5313f0);
    QTask_RemoveEventCallback(g_54f802, 4, sub_531220);
    QTask_RemoveEventCallback(g_54f802, 5, j_sub_4daa00);
    QTask_RemoveEventCallback(g_54f802, 7, sub_531480);
    sub_4b0b00(&g_afa800, 4, 0xa, 4);
    return sub_4b0b00(0xafa820, 4, 0xa, 4);
}

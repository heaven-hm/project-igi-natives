#include "00531EF0-Sprite3D_Init.h"
/* 0x00531ef0 Sprite3D_Init full linked: callers=1 callees=3 */
int32_t Sprite3D_Register()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("Sprite3D", 0x88, g_54875c, 0);
    g_c28f98 = eax_1;
    QTask_RemoveEventCallback(eax_1, 4, sub_531e10);
    return sub_4b0b00(0xc28fa0, 0x88, 0x64, 4);
}

#include "0052CA30-SimBoneDynCubeObj_Init.h"
/* 0x0052ca30 SimBoneDynCubeObj_Init full linked: callers=1 callees=2 */
int32_t sub_52ca30()

{
    int32_t var_4 = 0;
    int16_t result = TaskType_Register("SimBoneDynCubeObj", 0x140, sub_4d9610(), 0);
    g_54f700 = result;
    return result;
}

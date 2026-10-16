#include "004E5370-DynCubeObj_Init.h"
/* 0x004e5370 DynCubeObj_Init full linked: callers=1 callees=2 */
int32_t sub_4e5370()

{
    int32_t var_4 = 0;
    g_54875c = TaskType_Register("DynCubeObj", 0x68, g_548638, 0);
    char result = QTask_UnableToAllocateEven(0x181);
    g_54875e = result;
    return result;
}

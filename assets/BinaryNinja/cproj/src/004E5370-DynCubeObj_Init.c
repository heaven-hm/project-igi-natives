#include "gi_platform.h"
#include "004E5370-DynCubeObj_Init.h"
int32_t DynCubeObj_Init()

{
    int32_t v_4 = 0;
    g_54875c = TaskType_Register("DynCubeObj", 0x68, g_548638, 0);
    char result = QTask_UnableToAllocateEvent(0x181);
    g_54875e = result;
    return result;
}

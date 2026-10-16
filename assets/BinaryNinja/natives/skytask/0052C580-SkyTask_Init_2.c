#include "SkyTask_Init_2.h"

void* SkyTask_Init_2(void* pThis, int32_t* param)

{
    return DynObj_RegisterSymbol_9(*param, pThis);
}

#include "AlarmLight_Init_2.h"

void* AlarmLight_Init_2(void* pThis)

{
    if (*(pThis + 0x138))
        *(pThis + 0x1a8) = 1;

    return pThis;
}

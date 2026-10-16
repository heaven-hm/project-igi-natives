#include "MenuItem_MoveUp.h"

void* MenuItem_MoveUp(void* pThis, void* param)

{
    if (*(pThis + 0x4e))
        *(param + 4) = pThis;

    return pThis;
}

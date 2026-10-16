#include "MenuItem_MoveDown.h"

void* MenuItem_MoveDown(int32_t pThis, void* param)

{
    if (!*(param + 4))
        *(param + 4) = pThis;

    return param;
}

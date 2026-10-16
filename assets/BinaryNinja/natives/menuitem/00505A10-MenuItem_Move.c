#include "MenuItem_Move.h"

void* MenuItem_Move(void* pThis, int32_t* param)

{
    if (*(pThis + 0x38) == *param)
        param[1] = pThis;

    return pThis;
}

#include "EditVariable_Create.h"

void* EditVariable_Create(void* pThis)

{
    *(pThis + 0x20) = 0;
    return pThis;
}

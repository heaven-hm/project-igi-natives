#include "Menu_TaskNew.h"

void* Menu_TaskNew(void* pThis)

{
    if (*(pThis + 0x26bd))
        *(pThis + 0x26bd) = 0;

    return pThis;
}

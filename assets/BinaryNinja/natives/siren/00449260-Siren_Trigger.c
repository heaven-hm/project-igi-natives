#include "Siren_Trigger.h"

void* Siren_Trigger(void* pThis)

{
    *(pThis + 0x13c) = 0;
    return pThis;
}

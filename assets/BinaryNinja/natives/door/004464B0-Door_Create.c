#include "Door_Create.h"

bool* Door_Create(bool* pThis @ 0x8)

{
    *pThis = !pThis[8];
    return pThis;
}

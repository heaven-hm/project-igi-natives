#include "AI_CombatReposition.h"

void* AI_CombatReposition(void* pThis @ 0x8)

{
    *(pThis + 0x18) = RePosition;
    return pThis;
}

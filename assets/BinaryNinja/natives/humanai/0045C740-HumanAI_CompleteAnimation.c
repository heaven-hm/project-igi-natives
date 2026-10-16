#include "HumanAI_CompleteAnimation.h"

void* HumanAI_CompleteAnimation(void* pThis @ 0x8)

{
    *(pThis + 0x33c) = 1;
    return pThis;
}

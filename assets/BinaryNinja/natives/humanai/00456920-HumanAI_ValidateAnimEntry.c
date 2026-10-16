#include "HumanAI_ValidateAnimEntry.h"

void* HumanAI_ValidateAnimEntry(void* pThis, void* param)

{
    *(param + 0x20) = *(param + 0xd28) + *(param + 0x20);
    *(param + 0x28) = *(param + 0xd30) + *(param + 0x28);
    *(param + 0x30) = *(param + 0xd38) + *(param + 0x30);

    if (*(pThis + 8) & 1)
        *(pThis + 0x14) = HumanAI_CompleteAnimation;

    return pThis;
}

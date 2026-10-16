#include "HumanAI_FindAnimation.h"

void* HumanAI_FindAnimation(void* pThis, void* param)

{
    *(param + 0x20) = *(param + 0xd38) + *(param + 0x20);
    *(param + 0x28) = *(param + 0xd40) + *(param + 0x28);
    *(param + 0x30) = *(param + 0xd48) + *(param + 0x30);

    if (*(pThis + 8) & 1)
        *(pThis + 0x14) = HumanAI_CompleteAnimation;

    return pThis;
}

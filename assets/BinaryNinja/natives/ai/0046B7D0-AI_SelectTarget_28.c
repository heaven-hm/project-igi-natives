#include "AI_SelectTarget_28.h"
void* AI_SelectTarget_28(void* a1, float a2, int32_t a3)

{
    *(a1 + 0x78) = a2;
    *(a1 + 0x7c) = a3;
    *(a1 + 0x5c) = a2;
    *(a1 + 0x60) = a3;
    return a1;
}

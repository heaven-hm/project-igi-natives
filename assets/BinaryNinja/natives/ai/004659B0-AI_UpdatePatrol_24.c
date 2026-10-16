#include "AI_UpdatePatrol_24.h"
void* AI_UpdatePatrol_24(void* a1, float a2)

{
    *(a1 + 0x1c4) = a2;
    *(a1 + 0x1c8) = 0;
    return a1;
}

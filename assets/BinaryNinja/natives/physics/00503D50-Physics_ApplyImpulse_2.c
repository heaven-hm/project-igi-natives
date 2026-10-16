#include "Physics_ApplyImpulse_2.h"
int32_t Physics_ApplyImpulse_2(void* a1, char a2)

{
    *(a1 + 0x60) = a2;
    return a2;
}

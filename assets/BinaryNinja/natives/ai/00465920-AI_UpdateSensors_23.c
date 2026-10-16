#include "AI_UpdateSensors_23.h"
void* AI_UpdateSensors_23(void* a1, int32_t a2, char a3)

{
    *(a1 + 0x198) = a3;

    if (!a2)
    {
        __builtin_memset(a1 + 0x180, 0, 0x18);
        return a1;
    }

    memcpy(a1 + 0x180, a2, 0x18);
    return a1;
}

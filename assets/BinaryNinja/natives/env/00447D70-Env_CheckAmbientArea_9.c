#include "Env_CheckAmbientArea_9.h"
int32_t Env_CheckAmbientArea_9(void* a1)

{
    void* valA2 = a1;

    if (*(valA2 + 0x199))
        return 0;

    if (*(valA2 + 0x19a))
        return 1;

    valA2 = *(valA2 + 0x290);
    char f0 = valA2;
    valA2 = -(valA2);
    return valA2 - valA2 + 3;
}

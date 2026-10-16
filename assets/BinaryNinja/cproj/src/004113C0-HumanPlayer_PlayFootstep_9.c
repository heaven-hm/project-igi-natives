#include "gi_platform.h"
#include "004113C0-HumanPlayer_PlayFootstep_9.h"
int32_t HumanPlayer_PlayFootstep_9(void* a1)

{
    int32_t result = (*(int32_t*)(uintptr_t)(a1 + 0xde0));

    if (result)
    {
        result -= 1;
        (*(int32_t*)(uintptr_t)(a1 + 0xde0)) = result;
    }

    return result;
}

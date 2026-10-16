#include "HumanPlayer_PlayFootstep_9.h"
int32_t HumanPlayer_PlayFootstep_9(void* a1)

{
    int32_t result = *(a1 + 0xde0);

    if (result)
    {
        result -= 1;
        *(a1 + 0xde0) = result;
    }

    return result;
}

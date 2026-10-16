#include "Env_UpdateCameraLens_9.h"
int32_t Env_UpdateCameraLens_9(void* a1, char a2)

{
    *(a1 + 0x19d) = a2;
    return a2;
}

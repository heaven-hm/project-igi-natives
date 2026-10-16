#include "Env_UpdateCameraLens_6.h"
void* Env_UpdateCameraLens_6(void* a1)

{
    *(a1 + 0x11e) = 1;
    *(a1 + 0x130) = 1;
    return a1;
}

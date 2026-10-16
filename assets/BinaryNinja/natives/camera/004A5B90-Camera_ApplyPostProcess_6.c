#include "Camera_ApplyPostProcess_6.h"
void Camera_ApplyPostProcess_6(int32_t* a1, int32_t a2)

{
    for (int32_t* i = a1; i < a2; i = &i[1])
    {
        int32_t valA = *i;

        if (valA)
            valA();
    }
}

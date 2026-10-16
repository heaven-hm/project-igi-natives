#include "Light_ComputeDirectionalLight_10.h"
void* Light_ComputeDirectionalLight_10(void* a1, float a2)

{
    *(a1 + 0x48) = a2;
    return a1;
}

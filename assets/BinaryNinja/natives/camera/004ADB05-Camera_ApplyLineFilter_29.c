#include "Camera_ApplyLineFilter_29.h"
int32_t* Camera_ApplyLineFilter_29(int32_t* a1)

{
    int32_t tmpD = a1[2];
    int32_t objC = a1[1];
    a1[1] = objC >> 1 | tmpD << 0x1f;
    int32_t objC5 = *a1 >> 1 | objC << 0x1f;
    a1[2] = tmpD >> 1;
    *a1 = objC5;
    return a1;
}

#include "gi_platform.h"
#include "004A869B-Camera_ApplyHandiCam_13.h"
long double Camera_ApplyHandiCam_13(double a1, int16_t a2 , int32_t a3) __pure

{
    int32_t objC;
    int32_t v_8 = objC;
    int32_t v_c = objC;
    v_c = a1;
    *(&v_8 + 2) = (a3 + 0x3fe) << 4 | (a2 & 0x800f);
    return v_c;
}

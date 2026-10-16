#include "004A869B-Camera_ApplyHandiCam_13.h"
/* 0x004a869b Camera_ApplyHandiCam_13 full linked: callers=2 callees=0 */
long double sub_4a869b(double a1, int16_t a2 @ 0xa, int32_t a3) __pure

{
    int32_t ecx;
    int32_t var_8 = ecx;
    int32_t var_c = ecx;
    var_c = a1;
    *(&var_8 + 2) = (a3 + 0x3fe) << 4 | (a2 & 0x800f);
    return var_c;
}

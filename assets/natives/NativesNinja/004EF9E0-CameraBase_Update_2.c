#include "004EF9E0-CameraBase_Update_2.h"
/* 0x004ef9e0 CameraBase_Update_2 full linked: callers=0 callees=2 */
int32_t sub_4ef9e0(long double a1 @ st0, float* a2, int32_t* a3)

{
    sub_4f1c20(a3, 1);
    Profile_ValueSet(a3[1], *a3);
    *a2 = a1;
    int32_t result = *a3 + 1;
    *a3 = result;
    return result;
}

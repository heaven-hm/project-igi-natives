#include "004EFF30-CameraBase_Action.h"
/* 0x004eff30 CameraBase_Action full linked: callers=0 callees=2 */
int32_t sub_4eff30(long double a1 @ st0, double* a2, int32_t* a3)

{
    sub_4f1c20(a3, 1);
    Profile_ValueSet(a3[1], *a3);
    *a2 = a1;
    int32_t result = *a3 + 1;
    *a3 = result;
    return result;
}

#include "004F00B0-CameraBase_Cleanup_3.h"
/* 0x004f00b0 CameraBase_Cleanup_3 full linked: callers=0 callees=2 */
int32_t sub_4f00b0(int32_t* a1, int32_t* a2)

{
    sub_4f1c20(a2, 1);
    *a1 = sub_4b8a20(a2[1], *a2);
    int32_t result = *a2 + 1;
    *a2 = result;
    return result;
}

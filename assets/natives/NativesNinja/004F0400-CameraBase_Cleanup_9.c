#include "004F0400-CameraBase_Cleanup_9.h"
/* 0x004f0400 CameraBase_Cleanup_9 full linked: callers=0 callees=2 */
int32_t sub_4f0400(char* a1, int32_t* a2)

{
    sub_4f1c20(a2, 1);
    sub_4b8a80(a2[1], *a2, a1, 0x100);
    int32_t result = *a2 + 1;
    *a2 = result;
    return result;
}

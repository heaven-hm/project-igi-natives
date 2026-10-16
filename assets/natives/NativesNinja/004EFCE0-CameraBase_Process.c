#include "004EFCE0-CameraBase_Process.h"
/* 0x004efce0 CameraBase_Process full linked: callers=0 callees=5 */
int32_t sub_4efce0(long double a1 @ st0, long double a2 @ st1, long double a3 @ st2, float* a4, float a5)

{
    int32_t* esi = a5;
    sub_4f1c20(esi, 3);
    float edi = *esi;
    Profile_ValueSet(esi[1], edi);
    Profile_ValueSet(esi[1], edi + 1);
    Profile_ValueSet(esi[1], edi + 2);
    sub_4b45a0(a4, a1, a2, a3);
    int32_t result = *esi + 3;
    *esi = result;
    return result;
}

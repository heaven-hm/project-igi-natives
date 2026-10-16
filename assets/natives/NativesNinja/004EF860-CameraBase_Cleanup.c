#include "004EF860-CameraBase_Cleanup.h"
/* 0x004ef860 CameraBase_Cleanup full linked: callers=0 callees=2 */
int32_t sub_4ef860(float* a1, int32_t* a2)

{
    float* edi = a1;
    sub_4f1c20(a2, 0xb);
    int32_t ebp = *a2;

    for (int32_t i = 0; i < 0xb; i += 1)
    {
        Profile_ValueSet(a2[1], i + ebp);
🚫🚫🚫        *edi = /* *edi = unimplemented  {fstp dword [edi], st0} */;
        /* unimplemented  {fstp dword [edi], st0} */
        int16_t top = top + 1;
        edi = &edi[1];
    }

    int32_t result = *a2 + 0xb;
    *a2 = result;
    return result;
}

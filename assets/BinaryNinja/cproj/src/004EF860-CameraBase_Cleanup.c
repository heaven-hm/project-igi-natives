#include "gi_platform.h"
#include "004EF860-CameraBase_Cleanup.h"
int32_t CameraBase_Cleanup(float* a1, int32_t* a2)

{
    float* dstD = a1;
    Script_TooFewParametersInLi(a2, 0xb);
    int32_t flagP = *a2;

    for (int32_t i = 0; i < 0xb; i += 1)
    {
        Profile_ValueSet(a2[1], i + flagP);
🚫🚫🚫        *dstD =
        /* unimplemented  {fstp dword [dstD], fp0} */
        int16_t idx = idx + 1;
        dstD = &dstD[1];
    }

    int32_t result = *a2 + 0xb;
    *a2 = result;
    return result;
}

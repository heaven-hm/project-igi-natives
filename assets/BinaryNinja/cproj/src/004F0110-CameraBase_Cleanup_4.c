#include "gi_platform.h"
#include "004F0110-CameraBase_Cleanup_4.h"
int32_t CameraBase_Cleanup_4(int16_t* a1, int32_t* a2)

{
    Script_TooFewParametersInLi(a2, 1);
    *a1 = Script_GetArg(a2[1], *a2);
    int32_t result = *a2 + 1;
    *a2 = result;
    return result;
}

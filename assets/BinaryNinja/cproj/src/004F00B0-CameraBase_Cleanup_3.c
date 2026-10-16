#include "gi_platform.h"
#include "004F00B0-CameraBase_Cleanup_3.h"
int32_t CameraBase_Cleanup_3(int32_t* a1, int32_t* a2)

{
    Script_TooFewParametersInLi(a2, 1);
    *a1 = Script_GetArg(a2[1], *a2);
    int32_t result = *a2 + 1;
    *a2 = result;
    return result;
}

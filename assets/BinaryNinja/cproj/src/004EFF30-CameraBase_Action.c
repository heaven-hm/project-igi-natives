#include "gi_platform.h"
#include "004EFF30-CameraBase_Action.h"
int32_t CameraBase_Action(long double a1 , double* a2, int32_t* a3)

{
    Script_TooFewParametersInLi(a3, 1);
    Profile_ValueSet(a3[1], *a3);
    *a2 = a1;
    int32_t result = *a3 + 1;
    *a3 = result;
    return result;
}

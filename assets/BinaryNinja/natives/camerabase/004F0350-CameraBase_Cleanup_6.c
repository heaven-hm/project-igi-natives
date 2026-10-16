#include "CameraBase_Cleanup_6.h"
int32_t CameraBase_Cleanup_6(char* a1, int32_t* a2)

{
    Script_TooFewParametersInLi(a2, 1);
    Sys_ResolveSymbol_23(a2[1], *a2, a1, 0x10);
    int32_t result = *a2 + 1;
    *a2 = result;
    return result;
}

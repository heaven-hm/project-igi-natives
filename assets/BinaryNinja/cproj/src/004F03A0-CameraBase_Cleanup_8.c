#include "gi_platform.h"
#include "004F03A0-CameraBase_Cleanup_8.h"
int32_t CameraBase_Cleanup_8(char* a1, int32_t* a2)

{
    Script_TooFewParametersInLi(a2, 1);
    Sys_ResolveSymbol_23(a2[1], *a2, a1, 0x20);
    int32_t result = *a2 + 1;
    *a2 = result;
    return result;
}

#include "gi_platform.h"
#include "004C11F0-DynObj_LinkDynamicCube_3.h"
int32_t DynObj_LinkDynamicCube_3(int32_t* a1)

{
    Sys_CloseFileStream_4(*a1, &g_534364, 2);
    int32_t result = a1[2] + 1;
    a1[2] = result;
    return result;
}

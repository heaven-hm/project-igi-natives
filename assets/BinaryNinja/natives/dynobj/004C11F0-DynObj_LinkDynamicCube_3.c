// Original IGI.EXE function: DynObj_LinkDynamicCube_3 (VA 0x004C11F0; static CFG gate PASS, CFG score 1.000).
#include "DynObj_LinkDynamicCube_3.h"
int32_t DynObj_LinkDynamicCube_3(int32_t* context)

{
    Sys_CloseFileStream_4(*context, &g_534364, 2);
    int32_t result = context[2] + 1;
    context[2] = result;
    return result;
}

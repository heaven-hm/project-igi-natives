// Original IGI.EXE function: Sys_CloseFileStream (VA 0x004B07A0; static CFG gate PASS, CFG score 1.000).
#include "Sys_CloseFileStream.h"
int32_t Sys_CloseFileStream(int32_t context, int32_t param_2, int32_t param_3)

{
    if (param_2 < 0)
        return 0xffffffff;

    if (!param_3)
        return *(context + param_2 * 0x14 + 0x10);

    return *(context + param_2 * 0x14 + 0xc);
}

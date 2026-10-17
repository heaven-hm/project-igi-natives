// Original IGI.EXE function: Config_Language (VA 0x00405830; static CFG gate PASS, CFG score 1.000).
#include "Config_Language.h"
int32_t Config_Language()

{
    char result = g_537b90;

    if (result)
        result = Sys_OpenFileStream_4("LANGUAGE:");

    return result;
}

#include "Config_Language.h"
int32_t Config_Language()

{
    char result = g_537b90;

    if (result)
        result = Sys_OpenFileStream_4("LANGUAGE:");

    return result;
}

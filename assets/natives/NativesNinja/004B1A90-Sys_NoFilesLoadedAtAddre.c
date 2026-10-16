#include "004B1A90-Sys_NoFilesLoadedAtAddre.h"
/* 0x004b1a90 Sys_NoFilesLoadedAtAddre full linked: callers=1 callees=1 */
int32_t* sub_4b1a90(int32_t a1)

{
    int32_t* result = g_943970;

    for (int32_t* i = *result; i; i = *i)
    {
        if (result[6] == a1)
            return result;

        result = i;
    }

    int32_t var_4 = a1;
    Error_Show("No files loaded at address: %p");

    while (true)
        /* nop */
}

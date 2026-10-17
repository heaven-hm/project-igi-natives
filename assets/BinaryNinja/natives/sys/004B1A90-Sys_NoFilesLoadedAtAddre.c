// Original IGI.EXE function: Sys_NoFilesLoadedAtAddre (VA 0x004B1A90; static CFG gate PASS, CFG score 1.000).
#include "Sys_NoFilesLoadedAtAddre.h"
int32_t* Sys_NoFilesLoadedAtAddre(int32_t a1)

{
    int32_t* result = g_943970;

    for (int32_t* i = *result; i; i = *i)
    {
        if (result[6] == a1)
            return result;

        result = i;
    }

    int32_t v_4 = a1;
    Error_Show("No files loaded at address: %p");

    while (true)
        /* nop */
}

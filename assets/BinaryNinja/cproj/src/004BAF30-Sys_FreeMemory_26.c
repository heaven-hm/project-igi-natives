#include "gi_platform.h"
#include "004BAF30-Sys_FreeMemory_26.h"
int32_t Sys_FreeMemory_26(char* a1 )

{
    char v_400;
    char arg_c;
    String_VFormat(&v_400, a1, &arg_c);
    int32_t valA = g_a43ed8;
    g_a43ed0 += 1;

    if (valA)
        return valA(&v_400, g_a43ec0);

    void* v_404_2 = &v_400;
    Error_Show("%s");

    while (true)
        /* nop */
}

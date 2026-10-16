#include "004B7360-Sys_OpenFileStream_19.h"
/* 0x004b7360 Sys_OpenFileStream_19 full linked: callers=1 callees=2 */
int32_t** sub_4b7360(int32_t a1)

{
    int32_t* eax = sub_497800(0x10);
    eax[1] = g_943e48;
    eax[3] = a1;
    int32_t** result = sub_4978b0(0, eax);
    g_a43e50 = 0;
    g_a84a4c = 0;
    return result;
}

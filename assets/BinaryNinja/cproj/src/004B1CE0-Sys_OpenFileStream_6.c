#include "gi_platform.h"
#include "004B1CE0-Sys_OpenFileStream_6.h"
int32_t Sys_OpenFileStream_6(int32_t a1, int32_t a2)

{
    int32_t result = a1 * 0x23;
    *((result << 2) + &g_9436d0) = a2;
    return result;
}

#include "gi_platform.h"
#include "004AA337-Camera_ApplyPostProcess_19.h"
int32_t Camera_ApplyPostProcess_19(int32_t a1)

{
    int32_t result = a1;
    g_9361fc = 0;

    if (result == 0xfffffffe)
    {
        g_9361fc = 1;
        /* tailcall */
        return GetOEMCP();
    }

    if (result == 0xfffffffd)
    {
        g_9361fc = 1;
        /* tailcall */
        return GetACP();
    }

    if (result == 0xfffffffc)
    {
        result = g_9361f4;
        g_9361fc = 1;
    }

    return result;
}

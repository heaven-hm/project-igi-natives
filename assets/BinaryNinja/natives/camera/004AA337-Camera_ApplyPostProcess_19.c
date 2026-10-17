// Original IGI.EXE function: Camera_ApplyPostProcess_19 (VA 0x004AA337; static CFG gate FAIL, CFG score 0.667).
#include "Camera_ApplyPostProcess_19.h"
int32_t Camera_ApplyPostProcess_19(int32_t context)

{
    int32_t result = context;
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

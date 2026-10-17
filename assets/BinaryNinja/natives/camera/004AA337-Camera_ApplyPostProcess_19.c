// IGI native provenance: Camera_ApplyPostProcess_19 - 0x004AA337 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004AA337-Camera_ApplyPostProcess_19.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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

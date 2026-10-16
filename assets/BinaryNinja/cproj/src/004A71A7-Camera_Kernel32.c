#include "gi_platform.h"
#include "004A71A7-Camera_Kernel32.h"
int32_t Camera_Kernel32()

{
    HMODULE hModule = GetModuleHandleA("KERNEL32");

    if (hModule)
    {
        int32_t valA = GetProcAddress(hModule, "IsProcessorFeaturePresent");

        if (valA)
            return valA(0);
    }

    /* tailcall */
    return (Camera_ApplyHandiCam_10(), 0);
}

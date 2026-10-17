// Original IGI.EXE function: Camera_Kernel32 (VA 0x004A71A7; static CFG gate PASS, CFG score 0.889).
#include "Camera_Kernel32.h"
int32_t Camera_Kernel32()

{
    HMODULE hModule = GetModuleHandleA("KERNEL32");

    if (hModule)
    {
        int32_t data_val = GetProcAddress(hModule, "IsProcessorFeaturePresent");

        if (data_val)
            return data_val(0);
    }

    /* tailcall */
    return Camera_ApplyHandiCam_10();
}

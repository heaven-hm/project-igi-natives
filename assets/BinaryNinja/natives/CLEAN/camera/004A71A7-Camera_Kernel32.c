// IGI native provenance: Camera_Kernel32 - 0x004A71A7 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A71A7-Camera_Kernel32.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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

#include "004A71A7-Camera_Kernel32.h"
/* 0x004a71a7 Camera_Kernel32 full linked: callers=1 callees=3 */
int32_t sub_4a71a7()

{
    HMODULE hModule = GetModuleHandleA("KERNEL32");

    if (hModule)
    {
        int32_t eax = GetProcAddress(hModule, "IsProcessorFeaturePresent");

        if (eax)
            return eax(0);
    }

    /* tailcall */
    return sub_4a7169();
}

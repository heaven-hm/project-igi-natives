#include "004ABBBD-Camera_User32Dll.h"
/* 0x004abbbd Camera_User32Dll full linked: callers=1 callees=4 */
int32_t sub_4abbbd(int32_t a1, int32_t a2, int32_t a3)

{
    int32_t ebx = 0;

    if (!g_936204)
    {
        HMODULE hModule = LoadLibraryA("user32.dll");
        int32_t eax_1;

        if (hModule)
        {
            eax_1 = GetProcAddress(hModule, "MessageBoxA");
            g_936204 = eax_1;
        }

        if (!hModule || !eax_1)
            return 0;

        g_936208 = GetProcAddress(hModule, "GetActiveWindow");
        g_93620c = GetProcAddress(hModule, "GetLastActivePopup");
    }

    int32_t eax_4 = g_936208;

    if (eax_4)
    {
        ebx = eax_4();

        if (ebx)
        {
            int32_t eax_6 = g_93620c;

            if (eax_6)
                ebx = eax_6(ebx);
        }
    }

    return g_936204(ebx, a1, a2, a3);
}

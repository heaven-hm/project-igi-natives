#include "Camera_User32Dll.h"
int32_t Camera_User32Dll(int32_t a1, int32_t a2, int32_t a3)

{
    int32_t ctxB = 0;

    if (!g_936204)
    {
        HMODULE hModule = LoadLibraryA("user32.dll");
        int32_t valA1;

        if (hModule)
        {
            valA1 = GetProcAddress(hModule, "MessageBoxA");
            g_936204 = valA1;
        }

        if (!hModule || !valA1)
            return 0;

        g_936208 = GetProcAddress(hModule, "GetActiveWindow");
        g_93620c = GetProcAddress(hModule, "GetLastActivePopup");
    }

    int32_t valA4 = g_936208;

    if (valA4)
    {
        ctxB = valA4();

        if (ctxB)
        {
            int32_t valA6 = g_93620c;

            if (valA6)
                ctxB = valA6(ctxB);
        }
    }

    return g_936204(ctxB, a1, a2, a3);
}

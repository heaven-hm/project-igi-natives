// IGI native provenance: Camera_User32Dll - 0x004ABBBD - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004ABBBD-Camera_User32Dll.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_User32Dll.h"
int32_t Camera_User32Dll(int32_t context, int32_t param_2, int32_t param_3)

{
    int32_t context_val = 0;

    if (!g_936204)
    {
        HMODULE hModule = LoadLibraryA("user32.dll");
        int32_t data_1;

        if (hModule)
        {
            data_1 = GetProcAddress(hModule, "MessageBoxA");
            g_936204 = data_1;
        }

        if (!hModule || !data_1)
            return 0;

        g_936208 = GetProcAddress(hModule, "GetActiveWindow");
        g_93620c = GetProcAddress(hModule, "GetLastActivePopup");
    }

    int32_t data_4 = g_936208;

    if (data_4)
    {
        context_val = data_4();

        if (context_val)
        {
            int32_t data_6 = g_93620c;

            if (data_6)
                context_val = data_6(context_val);
        }
    }

    return g_936204(context_val, context, param_2, param_3);
}

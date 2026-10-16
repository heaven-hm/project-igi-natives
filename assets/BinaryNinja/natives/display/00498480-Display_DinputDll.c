#include "Display_DinputDll.h"
BOOL Display_DinputDll(int32_t* a1, int32_t* a2)

{
    OSVERSIONINFOA v_94;
    OSVERSIONINFOA* lpVersionInformation = &v_94;
    int32_t* v_11c = nullptr;
    int32_t* v_114 = nullptr;
    int32_t* v_118 = nullptr;
    int32_t v_10c = 0;
    int32_t v_104 = 0;
    v_94.dwOSVersionInfoSize = 0x94;
    BOOL valA = GetVersionExA(lpVersionInformation);

    if (!valA)
    {
        *a2 = 0;
        *a1 = 0;
        return valA;
    }

    if (v_94.dwPlatformId != 2)
        *a2 = 1;
    else
    {
        DWORD dwMajorVersion = v_94.dwMajorVersion;
        *a2 = 2;

        if (dwMajorVersion < 4)
        {
            *a1 = 0;
            return a1;
        }

        if (dwMajorVersion == 4)
        {
            char* lpLibFileName = "DINPUT.DLL";
            *a1 = 0x200;
            HMODULE valA3 = LoadLibraryA(lpLibFileName);

            if (!valA3)
                return OutputDebugStringA("Couldn't LoadLibrary DInput\r\n");

            int32_t valA5 = GetProcAddress(valA3, "DirectInputCreateA");
            BOOL valA6 = FreeLibrary(valA3);

            if (!valA5)
                return OutputDebugStringA("Couldn't GetProcAddress DInputCreate\r\n");

            *a1 = 0x300;
            return valA6;
        }
    }

    HMODULE valA8 = LoadLibraryA("DDRAW.DLL");

    if (!valA8)
    {
        HMODULE hLibModule = nullptr;
        *a1 = 0;
        *a2 = 0;
        return FreeLibrary(hLibModule);
    }

    int32_t valA10 = GetProcAddress(valA8, "DirectDrawCreate");

    if (!valA10)
    {
        *a1 = 0;
        *a2 = 0;
        FreeLibrary(valA8);
        return OutputDebugStringA("Couldn't LoadLibrary DDraw\r\n");
    }

    if (valA10(0, &v_11c, 0) < 0)
    {
        *a1 = 0;
        *a2 = 0;
        FreeLibrary(valA8);
        return OutputDebugStringA("Couldn't create DDraw\r\n");
    }

    int32_t* valA14 = v_11c;
    *a1 = 0x100;

    if ((**valA14)(valA14, 0x534a60, &v_114) < 0)
    {
        int32_t* valA16 = v_11c;
        (*(*valA16 + 8))(valA16);
        FreeLibrary(valA8);
        return OutputDebugStringA("Couldn't QI DDraw2\r\n");
    }

    int32_t* valA18 = v_114;
    (*(*valA18 + 8))(valA18);
    char* lpLibFileName_1 = "DINPUT.DLL";
    *a1 = 0x200;
    HMODULE valA19 = LoadLibraryA(lpLibFileName_1);

    if (!valA19)
    {
        OutputDebugStringA("Couldn't LoadLibrary DInput\r\n");
        int32_t* valA20 = v_11c;
        (*(*valA20 + 8))(valA20);
        return FreeLibrary(valA8);
    }

    if (!GetProcAddress(valA19, "DirectInputCreateA"))
    {
        FreeLibrary(valA19);
        FreeLibrary(valA8);
        int32_t* valA23 = v_11c;
        (*(*valA23 + 8))(valA23);
        return OutputDebugStringA("Couldn't GetProcAddress DInputCreate\r\n");
    }

    *a1 = 0x300;
    FreeLibrary(valA19);
    int32_t v_130_25 = 8;
    int32_t v_100;
    __builtin_memset(&v_100, 0, 0x6c);
    int32_t* valA25 = v_11c;
    v_100 = 0x6c;
    int32_t v_fc = 1;
    int32_t v_98 = 0x200;
    bool cond_1 = (*(*valA25 + 0x50))(valA25, 0, v_130_25) >= 0;
    int32_t* valA27 = v_11c;

    if (!cond_1)
    {
        (*(*valA27 + 8))(valA27);
        FreeLibrary(valA8);
        char* lpOutputString = "Couldn't Set coop level\r\n";
        *a1 = 0;
        return OutputDebugStringA(lpOutputString);
    }

    if ((*(*valA27 + 0x18))(valA27, &v_100, &v_118, 0) < 0)
    {
        int32_t* valA30 = v_11c;
        (*(*valA30 + 8))(valA30);
        FreeLibrary(valA8);
        char* lpOutputString_1 = "Couldn't CreateSurface\r\n";
        *a1 = 0;
        return OutputDebugStringA(lpOutputString_1);
    }

    int32_t* valA32 = v_118;

    if ((**valA32)(valA32, 0x534a40, &v_10c) < 0)
    {
        int32_t* valA34 = v_11c;
        (*(*valA34 + 8))(valA34);
        return FreeLibrary(valA8);
    }

    int32_t* valA36 = v_118;
    *a1 = 0x500;

    if ((**valA36)(valA36, 0x534a30, &v_104) < 0)
    {
        int32_t* valA38 = v_11c;
        (*(*valA38 + 8))(valA38);
        return FreeLibrary(valA8);
    }

    int32_t* valA40 = v_118;
    *a1 = 0x600;
    (*(*valA40 + 8))(valA40);
    int32_t* valA41 = v_11c;
    (*(*valA41 + 8))(valA41);
    int32_t pvReserved = 0;
    int32_t* ppv = nullptr;
    CoInitialize(pvReserved);

    if (CoCreateInstance(&g_5348f0, 0, CLSCTX_INPROC_SERVER, &g_5348e0, &ppv) < 0)
    {
        OutputDebugStringA("Couldn't create CLSID_DirectMusic\r\n");
        return FreeLibrary(valA8);
    }

    int32_t* ppv_1 = ppv;
    *a1 = 0x601;
    (*(*ppv_1 + 8))(ppv_1);
    CoUninitialize();
    int32_t valA44 = GetProcAddress(valA8, "DirectDrawCreateEx");
    int32_t* v_108;

    if (valA44 && valA44(0, &v_108, 0x534a50, 0) >= 0)
    {
        int32_t* valA46 = v_108;
        *a1 = 0x700;
        (*(*valA46 + 8))(valA46);
    }

    return FreeLibrary(valA8);
}

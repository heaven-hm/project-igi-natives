#include "00498480-Display_DinputDll.h"
/* 0x00498480 Display_DinputDll full linked: callers=1 callees=37 */
BOOL sub_498480(int32_t* a1, int32_t* a2)

{
    OSVERSIONINFOA var_94;
    OSVERSIONINFOA* lpVersionInformation = &var_94;
    int32_t* var_11c = nullptr;
    int32_t* var_114 = nullptr;
    int32_t* var_118 = nullptr;
    int32_t var_10c = 0;
    int32_t var_104 = 0;
    var_94.dwOSVersionInfoSize = 0x94;
    BOOL eax = GetVersionExA(lpVersionInformation);

    if (!eax)
    {
        *a2 = 0;
        *a1 = 0;
        return eax;
    }

    if (var_94.dwPlatformId != 2)
        *a2 = 1;
    else
    {
        DWORD dwMajorVersion = var_94.dwMajorVersion;
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
            HMODULE eax_3 = LoadLibraryA(lpLibFileName);

            if (!eax_3)
                return OutputDebugStringA("Couldn't LoadLibrary DInput\r\n");

            int32_t eax_5 = GetProcAddress(eax_3, "DirectInputCreateA");
            BOOL eax_6 = FreeLibrary(eax_3);

            if (!eax_5)
                return OutputDebugStringA("Couldn't GetProcAddress DInputCreate\r\n");

            *a1 = 0x300;
            return eax_6;
        }
    }

    HMODULE eax_8 = LoadLibraryA("DDRAW.DLL");

    if (!eax_8)
    {
        HMODULE hLibModule = nullptr;
        *a1 = 0;
        *a2 = 0;
        return FreeLibrary(hLibModule);
    }

    int32_t eax_10 = GetProcAddress(eax_8, "DirectDrawCreate");

    if (!eax_10)
    {
        *a1 = 0;
        *a2 = 0;
        FreeLibrary(eax_8);
        return OutputDebugStringA("Couldn't LoadLibrary DDraw\r\n");
    }

    if (eax_10(0, &var_11c, 0) < 0)
    {
        *a1 = 0;
        *a2 = 0;
        FreeLibrary(eax_8);
        return OutputDebugStringA("Couldn't create DDraw\r\n");
    }

    int32_t* eax_14 = var_11c;
    *a1 = 0x100;

    if ((**eax_14)(eax_14, 0x534a60, &var_114) < 0)
    {
        int32_t* eax_16 = var_11c;
        (*(*eax_16 + 8))(eax_16);
        FreeLibrary(eax_8);
        return OutputDebugStringA("Couldn't QI DDraw2\r\n");
    }

    int32_t* eax_18 = var_114;
    (*(*eax_18 + 8))(eax_18);
    char* lpLibFileName_1 = "DINPUT.DLL";
    *a1 = 0x200;
    HMODULE eax_19 = LoadLibraryA(lpLibFileName_1);

    if (!eax_19)
    {
        OutputDebugStringA("Couldn't LoadLibrary DInput\r\n");
        int32_t* eax_20 = var_11c;
        (*(*eax_20 + 8))(eax_20);
        return FreeLibrary(eax_8);
    }

    if (!GetProcAddress(eax_19, "DirectInputCreateA"))
    {
        FreeLibrary(eax_19);
        FreeLibrary(eax_8);
        int32_t* eax_23 = var_11c;
        (*(*eax_23 + 8))(eax_23);
        return OutputDebugStringA("Couldn't GetProcAddress DInputCreate\r\n");
    }

    *a1 = 0x300;
    FreeLibrary(eax_19);
    int32_t var_130_25 = 8;
    int32_t var_100;
    __builtin_memset(&var_100, 0, 0x6c);
    int32_t* eax_25 = var_11c;
    var_100 = 0x6c;
    int32_t var_fc = 1;
    int32_t var_98 = 0x200;
    bool cond:1 = (*(*eax_25 + 0x50))(eax_25, 0, var_130_25) >= 0;
    int32_t* eax_27 = var_11c;

    if (!cond:1)
    {
        (*(*eax_27 + 8))(eax_27);
        FreeLibrary(eax_8);
        char* lpOutputString = "Couldn't Set coop level\r\n";
        *a1 = 0;
        return OutputDebugStringA(lpOutputString);
    }

    if ((*(*eax_27 + 0x18))(eax_27, &var_100, &var_118, 0) < 0)
    {
        int32_t* eax_30 = var_11c;
        (*(*eax_30 + 8))(eax_30);
        FreeLibrary(eax_8);
        char* lpOutputString_1 = "Couldn't CreateSurface\r\n";
        *a1 = 0;
        return OutputDebugStringA(lpOutputString_1);
    }

    int32_t* eax_32 = var_118;

    if ((**eax_32)(eax_32, 0x534a40, &var_10c) < 0)
    {
        int32_t* eax_34 = var_11c;
        (*(*eax_34 + 8))(eax_34);
        return FreeLibrary(eax_8);
    }

    int32_t* eax_36 = var_118;
    *a1 = 0x500;

    if ((**eax_36)(eax_36, 0x534a30, &var_104) < 0)
    {
        int32_t* eax_38 = var_11c;
        (*(*eax_38 + 8))(eax_38);
        return FreeLibrary(eax_8);
    }

    int32_t* eax_40 = var_118;
    *a1 = 0x600;
    (*(*eax_40 + 8))(eax_40);
    int32_t* eax_41 = var_11c;
    (*(*eax_41 + 8))(eax_41);
    int32_t pvReserved = 0;
    int32_t* ppv = nullptr;
    CoInitialize(pvReserved);

    if (CoCreateInstance(&g_5348f0, 0, CLSCTX_INPROC_SERVER, &g_5348e0, &ppv) < 0)
    {
        OutputDebugStringA("Couldn't create CLSID_DirectMusic\r\n");
        return FreeLibrary(eax_8);
    }

    int32_t* ppv_1 = ppv;
    *a1 = 0x601;
    (*(*ppv_1 + 8))(ppv_1);
    CoUninitialize();
    int32_t eax_44 = GetProcAddress(eax_8, "DirectDrawCreateEx");
    int32_t* var_108;

    if (eax_44 && eax_44(0, &var_108, 0x534a50, 0) >= 0)
    {
        int32_t* eax_46 = var_108;
        *a1 = 0x700;
        (*(*eax_46 + 8))(eax_46);
    }

    return FreeLibrary(eax_8);
}

// Original IGI.EXE function: Display_DinputDll (VA 0x00498480; static CFG gate PASS, CFG score 0.892).
#include "Display_DinputDll.h"
BOOL Display_DinputDll(int32_t* context, int32_t* param_2)

{
    OSVERSIONINFOA item_94;
    OSVERSIONINFOA* lpVersionInformation = &item_94;
    int32_t* item_11c = nullptr;
    int32_t* item_114 = nullptr;
    int32_t* item_118 = nullptr;
    int32_t item_10c = 0;
    int32_t item_104 = 0;
    item_94.dwOSVersionInfoSize = 0x94;
    BOOL data_val = GetVersionExA(lpVersionInformation);

    if (!data_val)
    {
        *param_2 = 0;
        *context = 0;
        return data_val;
    }

    if (item_94.dwPlatformId != 2)
        *param_2 = 1;
    else
    {
        DWORD dwMajorVersion = item_94.dwMajorVersion;
        *param_2 = 2;

        if (dwMajorVersion < 4)
        {
            *context = 0;
            return context;
        }

        if (dwMajorVersion == 4)
        {
            char* lpLibFileName = "DINPUT.DLL";
            *context = 0x200;
            HMODULE data_3 = LoadLibraryA(lpLibFileName);

            if (!data_3)
                return OutputDebugStringA("Couldn't LoadLibrary DInput\r\n");

            int32_t data_5 = GetProcAddress(data_3, "DirectInputCreateA");
            BOOL data_6 = FreeLibrary(data_3);

            if (!data_5)
                return OutputDebugStringA("Couldn't GetProcAddress DInputCreate\r\n");

            *context = 0x300;
            return data_6;
        }
    }

    HMODULE data_8 = LoadLibraryA("DDRAW.DLL");

    if (!data_8)
    {
        HMODULE hLibModule = nullptr;
        *context = 0;
        *param_2 = 0;
        return FreeLibrary(hLibModule);
    }

    int32_t data_10 = GetProcAddress(data_8, "DirectDrawCreate");

    if (!data_10)
    {
        *context = 0;
        *param_2 = 0;
        FreeLibrary(data_8);
        return OutputDebugStringA("Couldn't LoadLibrary DDraw\r\n");
    }

    if (data_10(0, &item_11c, 0) < 0)
    {
        *context = 0;
        *param_2 = 0;
        FreeLibrary(data_8);
        return OutputDebugStringA("Couldn't create DDraw\r\n");
    }

    int32_t* data_14 = item_11c;
    *context = 0x100;

    if ((**data_14)(data_14, 0x534a60, &item_114) < 0)
    {
        int32_t* data_16 = item_11c;
        (*(*data_16 + 8))(data_16);
        FreeLibrary(data_8);
        return OutputDebugStringA("Couldn't QI DDraw2\r\n");
    }

    int32_t* data_18 = item_114;
    (*(*data_18 + 8))(data_18);
    char* lpLibFileName_1 = "DINPUT.DLL";
    *context = 0x200;
    HMODULE data_19 = LoadLibraryA(lpLibFileName_1);

    if (!data_19)
    {
        OutputDebugStringA("Couldn't LoadLibrary DInput\r\n");
        int32_t* data_20 = item_11c;
        (*(*data_20 + 8))(data_20);
        return FreeLibrary(data_8);
    }

    if (!GetProcAddress(data_19, "DirectInputCreateA"))
    {
        FreeLibrary(data_19);
        FreeLibrary(data_8);
        int32_t* data_23 = item_11c;
        (*(*data_23 + 8))(data_23);
        return OutputDebugStringA("Couldn't GetProcAddress DInputCreate\r\n");
    }

    *context = 0x300;
    FreeLibrary(data_19);
    int32_t item_130_25 = 8;
    int32_t item_100;
    memset(&item_100, 0, 0x6c);
    int32_t* data_25 = item_11c;
    item_100 = 0x6c;
    int32_t item_fc = 1;
    int32_t item_98 = 0x200;
    bool flag_1 = (*(*data_25 + 0x50))(data_25, 0, item_130_25) >= 0;
    int32_t* data_27 = item_11c;

    if (!flag_1)
    {
        (*(*data_27 + 8))(data_27);
        FreeLibrary(data_8);
        char* lpOutputString = "Couldn't Set coop level\r\n";
        *context = 0;
        return OutputDebugStringA(lpOutputString);
    }

    if ((*(*data_27 + 0x18))(data_27, &item_100, &item_118, 0) < 0)
    {
        int32_t* data_30 = item_11c;
        (*(*data_30 + 8))(data_30);
        FreeLibrary(data_8);
        char* lpOutputString_1 = "Couldn't CreateSurface\r\n";
        *context = 0;
        return OutputDebugStringA(lpOutputString_1);
    }

    int32_t* data_32 = item_118;

    if ((**data_32)(data_32, 0x534a40, &item_10c) < 0)
    {
        int32_t* data_34 = item_11c;
        (*(*data_34 + 8))(data_34);
        return FreeLibrary(data_8);
    }

    int32_t* data_36 = item_118;
    *context = 0x500;

    if ((**data_36)(data_36, 0x534a30, &item_104) < 0)
    {
        int32_t* data_38 = item_11c;
        (*(*data_38 + 8))(data_38);
        return FreeLibrary(data_8);
    }

    int32_t* data_40 = item_118;
    *context = 0x600;
    (*(*data_40 + 8))(data_40);
    int32_t* data_41 = item_11c;
    (*(*data_41 + 8))(data_41);
    int32_t pvReserved = 0;
    int32_t* ppv = nullptr;
    CoInitialize(pvReserved);

    if (CoCreateInstance(&g_5348f0, 0, CLSCTX_INPROC_SERVER, &g_5348e0, &ppv) < 0)
    {
        OutputDebugStringA("Couldn't create CLSID_DirectMusic\r\n");
        return FreeLibrary(data_8);
    }

    int32_t* ppv_1 = ppv;
    *context = 0x601;
    (*(*ppv_1 + 8))(ppv_1);
    CoUninitialize();
    int32_t data_44 = GetProcAddress(data_8, "DirectDrawCreateEx");
    int32_t* item_108;

    if (data_44 && data_44(0, &item_108, 0x534a50, 0) >= 0)
    {
        int32_t* data_46 = item_108;
        *context = 0x700;
        (*(*data_46 + 8))(data_46);
    }

    return FreeLibrary(data_8);
}

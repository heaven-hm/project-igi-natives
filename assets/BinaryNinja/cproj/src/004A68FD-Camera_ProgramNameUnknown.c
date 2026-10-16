#include "gi_platform.h"
#include "004A68FD-Camera_ProgramNameUnknown.h"
int32_t* Camera_ProgramNameUnknown(int32_t a1)

{
    int32_t i = a1;
    int32_t objC = 0;
    int32_t* result = &g_543fc0;

    while (i != *result)
    {
        result = &result[2];
        objC += 1;

        if (result >= &g_544050)
            break;
    }

    if (i == *((objC << 3) + &g_543fc0))
    {
        result = g_936054;

        if (result == 1)
        {
    label_4a6a30: ;
            OVERLAPPED* __saved_edi_3 = nullptr;
            int32_t* lpNumberOfBytesWritten = &a1;
            uint32_t nNumberOfBytesToWrite = Camera_UpdateViewCone_20((&g_543fc4)[objC * 2]);
            return WriteFile(GetStdHandle(STD_ERROR_HANDLE), (&g_543fc4)[objC * 2],
                nNumberOfBytesToWrite, lpNumberOfBytesWritten, __saved_edi_3);
        }

        if (!result && g_543e80 == 1)
            goto label_4a6a30;

        if (i != 0xfc)
        {
            char filename;

            if (!GetModuleFileNameA(nullptr, &filename, 0x104))
                Camera_ApplyLineFilter_20(&filename, "<program name unknown>");

            char* dstD1 = &filename;

            if (Camera_UpdateViewCone_20(&filename) + 1 > 0x3c)
            {
                int32_t v_1b8_2 = 3;
                char v_1e3;
                dstD1 = Camera_UpdateViewCone_20(&filename) + &v_1e3;
                Camera_ApplyLineFilter_5(dstD1, "...", v_1b8_2);
            }

            char v_a4[0xa0];
            Camera_ApplyLineFilter_20(&v_a4, "Runtime Error!\n\nProgram: ");
            Camera_ApplyBandFilter_20(&v_a4, dstD1);
            Camera_ApplyBandFilter_20(&v_a4, "\n\n");
            Camera_ApplyBandFilter_20(&v_a4, (&g_543fc4)[objC * 2]);
            return Camera_User32Dll(&v_a4, "Microsoft Visual C++ Runtime Library", 0x12010);
        }
    }

    return result;
}

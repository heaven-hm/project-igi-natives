#include "004A68FD-Camera_ProgramNameUnknown.h"
/* 0x004a68fd Camera_ProgramNameUnknown full linked: callers=4 callees=13 */
int32_t* sub_4a68fd(int32_t a1)

{
    int32_t i = a1;
    int32_t ecx = 0;
    int32_t* result = &g_543fc0;

    while (i != *result)
    {
        result = &result[2];
        ecx += 1;

        if (result >= &g_544050)
            break;
    }

    if (i == *((ecx << 3) + &g_543fc0))
    {
        result = g_936054;

        if (result == 1)
        {
        label_4a6a30:
            OVERLAPPED* __saved_edi_3 = nullptr;
            int32_t* lpNumberOfBytesWritten = &a1;
            uint32_t nNumberOfBytesToWrite = sub_4aa730((&g_543fc4)[ecx * 2]);
            return WriteFile(GetStdHandle(STD_ERROR_HANDLE), (&g_543fc4)[ecx * 2],
                nNumberOfBytesToWrite, lpNumberOfBytesWritten, __saved_edi_3);
        }

        if (!result && g_543e80 == 1)
            goto label_4a6a30;

        if (i != 0xfc)
        {
            void filename;

            if (!GetModuleFileNameA(nullptr, &filename, 0x104))
                sub_4aa580(&filename, "<program name unknown>");

            char* edi_1 = &filename;

            if (sub_4aa730(&filename) + 1 > 0x3c)
            {
                int32_t var_1b8_2 = 3;
                void var_1e3;
                edi_1 = sub_4aa730(&filename) + &var_1e3;
                sub_4a5500(edi_1, "...", var_1b8_2);
            }

            char var_a4[0xa0];
            sub_4aa580(&var_a4, "Runtime Error!\n\nProgram: ");
            sub_4aa590(&var_a4, edi_1);
            sub_4aa590(&var_a4, "\n\n");
            sub_4aa590(&var_a4, (&g_543fc4)[ecx * 2]);
            return sub_4abbbd(&var_a4, "Microsoft Visual C++ Runtime Library", 0x12010);
        }
    }

    return result;
}

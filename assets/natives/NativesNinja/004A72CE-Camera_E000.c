#include "004A72CE-Camera_E000.h"
/* 0x004a72ce Camera_E000 full linked: callers=2 callees=4 */
char* sub_4a72ce(double* a1, char* a2, void* a3, int32_t a4)

{
    void* ebx;
    int32_t* esi;

    if (!g_9361c4)
    {
        int32_t __saved_edi_2;
        int32_t __saved_edi_1 = __saved_edi_2;
        int32_t __saved_edi_3 = __saved_edi_2;
        __saved_edi_3 = *a1;
        sub_4acbe9();
        ebx = a3;
        esi = &g_936238;
        int32_t eax_3 = 0;
        eax_3 = g_936238 == 0x2d;
        void* ecx_4 = nullptr;
        ecx_4 = ebx > 0;
        sub_4acb72(ecx_4 + &a2[eax_3], ebx + 1, &g_936238);
    }
    else
    {
        ebx = a3;
        int32_t* eax = g_9361c0;
        int32_t ecx = 0;
        esi = eax;
        ecx = ebx > 0;
        void* ecx_1 = nullptr;
        ecx_1 = *eax == 0x2d;
        sub_4a75e6(ecx_1 + a2, ecx);
    }

    char* eax_4 = a2;

    if (*esi == 0x2d)
    {
        *eax_4 = 0x2d;
        eax_4 = &eax_4[1];
    }

    if (ebx > 0)
    {
        *eax_4 = eax_4[1];
        eax_4 = &eax_4[1];
        *eax_4 = g_544280;
    }

    void* const ecx_7 = nullptr;
    ecx_7 = !g_9361c4;
    char* eax_5 = sub_4aa580(ecx_7 + eax_4 + ebx, "e+000");

    if (a4)
        *eax_5 = 0x45;

    if (*esi[3] != 0x30)
    {
        int32_t ebx_1 = esi[1];
        int32_t ebx_2 = ebx_1 - 1;

        if (ebx_1 - 1 < 0)
        {
            ebx_2 = -(ebx_2);
            eax_5[1] = 0x2d;
        }

        if (ebx_2 >= 0x64)
        {
            eax_5[2] += ebx_2 / 0x64;
            ebx_2 = ebx_2 % 0x64;
        }

        if (ebx_2 >= 0xa)
        {
            eax_5[3] += ebx_2 / 0xa;
            ebx_2 = ebx_2 % 0xa;
        }

        eax_5[4] += ebx_2;
    }

    return a2;
}

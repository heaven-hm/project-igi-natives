#include "004A73D2-Camera_UpdateViewCone_10.h"
/* 0x004a73d2 Camera_UpdateViewCone_10 full linked: callers=2 callees=6 */
char* sub_4a73d2(double* a1, char* a2, int32_t a3)

{
    int32_t ebx;
    int32_t* esi;

    if (!g_9361c4)
    {
        int32_t ecx;
        int32_t var_14_1 = ecx;
        int32_t var_18_1 = ecx;
        var_18_1 = *a1;
        sub_4acbe9();
        ebx = a3;
        esi = &g_936238;
        void* eax_5 = nullptr;
        eax_5 = g_936238 == 0x2d;
        sub_4acb72(eax_5 + a2, g_93623c + ebx, &g_936238);
    }
    else
    {
        int32_t eax = g_9361c8;
        ebx = a3;
        esi = g_9361c0;

        if (eax == ebx)
        {
            void* ecx_1 = nullptr;
            ecx_1 = *esi == 0x2d;
            char* ecx_3 = ecx_1 + eax + a2;
            *ecx_3 = 0x30;
            ecx_3[1] = 0;
        }
    }

    char* edi = a2;

    if (*esi == 0x2d)
    {
        *a2 = 0x2d;
        edi = &a2[1];
    }

    int32_t eax_7 = esi[1];
    char* edi_1;

    if (eax_7 > 0)
        edi_1 = &edi[eax_7];
    else
    {
        sub_4a75e6(edi, 1);
        *edi = 0x30;
        edi_1 = &edi[1];
    }

    if (ebx > 0)
    {
        sub_4a75e6(edi_1, 1);
        *edi_1 = g_544280;
        int32_t esi_1 = esi[1];

        if (esi_1 < 0)
        {
            if (!g_9361c4)
            {
                int32_t esi_2 = -(esi_1);

                if (ebx >= esi_2)
                    ebx = esi_2;
            }
            else
                ebx = -(esi_1);

            sub_4a75e6(&edi_1[1], ebx);
            sub_4acd10(&edi_1[1], 0x30, ebx);
        }
    }

    return a2;
}

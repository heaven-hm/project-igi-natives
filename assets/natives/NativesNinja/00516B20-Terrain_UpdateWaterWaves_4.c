#include "00516B20-Terrain_UpdateWaterWaves_4.h"
/* 0x00516b20 Terrain_UpdateWaterWaves_4 full linked: callers=1 callees=6 */
char* sub_516b20(char* a1, char* a2, char* a3, char* a4, char* a5)

{
    int32_t ecx;
    int32_t var_8 = ecx;
    char* result_1 = nullptr;
    char* result_2 = a1;

    if (sub_4aa730(result_2) >= 1 && result_2[1] == 0x3a)
    {
        if (a2)
        {
            sub_516f14(a2, result_2, 2);
            a2[2] = 0;
        }

        result_2 = &result_2[2];
    }
    else if (a2)
        *a2 = 0;

    a2 = nullptr;
    char* result = result_2;
    char* esi_2 = 0xff;
    a1 = result;

    if (*result_2)
    {
        do
        {
            char ecx_2 = *result;

            if (*(ecx_2 + 0xc32321) & 4)
                result = &result[1];
            else if (ecx_2 == 0x2f || ecx_2 == 0x5c)
                a2 = &result[1];
            else if (ecx_2 == 0x2e)
                result_1 = result;

            result = &result[1];
        } while (*result);

        a1 = result;
    }

    if (*result_2 && a2)
    {
        if (a3)
        {
            char* edi_2 = a2 - result_2;

            if (edi_2 >= 0xff)
                edi_2 = 0xff;

            sub_516f14(a3, result_2, edi_2);
            *(edi_2 + a3) = 0;
            result = a1;
        }

        result_2 = a2;
    }
    else if (a3)
        *a3 = 0;

    if (!result_1 || result_1 < result_2)
    {
        if (a4)
        {
            char* eax_5 = result - result_2;

            if (eax_5 < 0xff)
                esi_2 = eax_5;

            sub_516f14(a4, result_2, esi_2);
            *(esi_2 + a4) = 0;
        }

        result = a5;

        if (result)
            *result = 0;
    }
    else
    {
        if (a4)
        {
            char* edi_4 = result_1 - result_2;

            if (edi_4 >= 0xff)
                edi_4 = 0xff;

            sub_516f14(a4, result_2, edi_4);
            *(edi_4 + a4) = 0;
            result = a1;
        }

        if (a5)
        {
            char* eax_4 = result - result_1;

            if (eax_4 < 0xff)
                esi_2 = eax_4;

            result = sub_516f14(a5, result_1, esi_2);
            *(esi_2 + a5) = 0;
        }
    }

    return result;
}

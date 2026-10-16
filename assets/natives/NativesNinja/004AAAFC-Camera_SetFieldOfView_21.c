#include "004AAAFC-Camera_SetFieldOfView_21.h"
/* 0x004aaafc Camera_SetFieldOfView_21 full linked: callers=1 callees=4 */
int32_t sub_4aaafc(char* a1, void** a2, int32_t a3, int32_t a4)

{
    int32_t result = 0;
    char ebx = *a1;
    char* esi = &a1[1];
    char* var_8 = esi;

    while (true)
    {
        BOOL eax_2;
        wchar16 (* ecx)[0x21];

        if (g_54427c <= 1)
        {
            ecx = g_544070;
            uint32_t eax_3 = ebx;
            eax_3 = (*ecx)[eax_3];
            eax_2 = eax_3 & 8;
        }
        else
        {
            uint32_t eax_1 = ebx;
            uint32_t var_24_1 = eax_1;
            int32_t edx;
            eax_2 = sub_4a7f2a(eax_1, edx, ecx, 8);
            ecx = 8;
        }

        if (!eax_2)
            break;

        ebx = *esi;
        esi = &esi[1];
    }

    char* var_8_1 = esi;

    if (ebx == 0x2d)
    {
        a4 |= 2;
    label_4aab57:
        ebx = *esi;
        esi = &esi[1];
        var_8_1 = esi;
    }
    else if (ebx == 0x2b)
        goto label_4aab57;

    if (a3 < 0 || a3 == 1 || a3 > 0x24)
    {
        char** eax_20 = a2;

        if (eax_20)
            *eax_20 = a1;

        return 0;
    }

    int32_t ecx_1 = 0x10;

    if (a3)
        goto label_4aaba5;

    if (ebx == 0x30)
    {
        char eax_5 = *esi;

        if (eax_5 == 0x78 || eax_5 == 0x58)
        {
            a3 = 0x10;
        label_4aaba5:

            if (a3 == 0x10 && ebx == 0x30)
            {
                eax_5 = *esi;

                if (eax_5 == 0x78 || eax_5 == 0x58)
                {
                    ebx = esi[1];
                    var_8_1 = &esi[2];
                }
            }
        }
        else
            a3 = 8;
    }
    else
        a3 = 0xa;

    int32_t eax_6 = 0xffffffff;
    int32_t edx_1 = 0;
    char* eax_7 = COMBINE(edx_1, eax_6) / a3;
    uint32_t edx_2 = COMBINE(edx_1, eax_6) % a3;
    char* var_10_1 = eax_7;

    while (true)
    {
        uint32_t esi_3 = ebx;
        BOOL eax_8;

        if (g_54427c <= 1)
        {
            wchar16 (* eax_9)[0x21] = g_544070;
            eax_9 = (*eax_9)[esi_3];
            eax_8 = eax_9 & 4;
        }
        else
        {
            uint32_t var_24_2 = esi_3;
            eax_8 = sub_4a7f2a(eax_7, edx_2, ecx_1, 4);
            ecx_1 = 4;
        }

        if (!eax_8)
        {
            BOOL eax_10;

            if (g_54427c <= 1)
            {
                wchar16 (* eax_11)[0x21] = g_544070;
                eax_11 = (*eax_11)[esi_3];
                eax_10 = eax_11 & 0x103;
            }
            else
            {
                uint32_t var_24_3 = esi_3;
                eax_10 = sub_4a7f2a(eax_8, edx_2, ecx_1, 0x103);
                ecx_1 = 0x103;
            }

            if (!eax_10)
                break;

            int32_t var_20_1 = ebx;
            uint32_t eax_13;
            eax_13 = sub_4ad73d(ecx_1);
            ecx_1 = eax_13 - 0x37;
        }
        else
            ecx_1 = ebx - 0x30;

        if (ecx_1 >= a3)
            break;

        a4 |= 8;

        if (result >= var_10_1 && result == var_10_1)
            edx_2 = COMBINE(0, 0xffffffff) % a3;

        if (result < var_10_1 || (result == var_10_1 && ecx_1 <= edx_2))
            result = result * a3 + ecx_1;
        else
            a4 |= 4;

        eax_7 = var_8_1;
        var_8_1 = &var_8_1[1];
        ebx = *eax_7;
    }

    char* var_8_2 = var_8_1 - 1;

    if (!(a4 & 8))
    {
        if (a2)
            var_8_2 = a1;

        result = 0;
    }
    else if (a4 & 4)
    {
    label_4aacb5:
        g_936064 = 0x22;

        if (!(a4 & 1))
        {
            int32_t ecx_6 = a4;
            ecx_6 &= 2;
            char temp4_1 = ecx_6;
            ecx_6 = -(ecx_6);
            result = -((ecx_6 - ecx_6)) + 0x7fffffff;
        }
        else
            result = 0xffffffff;
    }
    else if (!(a4 & 1))
    {
        int32_t ecx_5 = a4 & 2;

        if (ecx_5 && result > 0x80000000)
            goto label_4aacb5;

        if (!ecx_5 && result > 0x7fffffff)
            goto label_4aacb5;
    }

    if (a2)
        *a2 = var_8_2;

    if (!(a4 & 2))
        return result;

    return -(result);
}

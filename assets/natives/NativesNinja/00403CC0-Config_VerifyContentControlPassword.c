#include "00403CC0-Config_VerifyContentControlPassword.h"
/* 0x00403cc0 Config_VerifyContentControlPassword full linked: callers=0 callees=2 */
int32_t Config_VerifyContentControlPassword(int32_t a1, float a2 @ 0xc)

// Sig: int Config_VerifyContentControlPassword(char* password)
// Note: Checks a password attempt against the stored content-control password.
// Param: password = string to test. RETURNS non-zero when correct, 0 when
// wrong. Use before unlocking violent-content options.
{
    int32_t ebx;
    int32_t var_3c = ebx;
    char* var_48 = 0x20;
    void var_20;
    char* var_4c = &var_20;
    int32_t var_50 = 0;
    sub_4b8a80(a2, var_50, var_4c, var_48);
    char* esi = &g_bc79c8;
    char* eax = &var_20;
    int32_t eax_2;
    char edx_1;
    char ebx_1;

    while (true)
    {
        edx_1 = *eax;
        ebx_1 = *esi;
        bool c_1 = edx_1 < ebx_1;

        if (edx_1 == ebx_1)
        {
            if (!edx_1)
            {
                eax_2 = 0;
                break;
            }

            edx_1 = eax[1];
            ebx_1 = esi[1];
            c_1 = edx_1 < ebx_1;

            if (edx_1 == ebx_1)
            {
                eax = &eax[2];
                esi = &esi[2];

                if (edx_1)
                    continue;

                eax_2 = 0;
                break;
            }
        }

        eax_2 = eax - eax + 1;
        break;
    }

    int32_t ecx_1 = 0;
    char* esi_1 = &g_bc79c8;
    ecx_1 = !eax_2;
    int32_t var_38 = ecx_1;
    char* eax_3 = &var_20;
    int32_t eax_5;

    while (true)
    {
        edx_1 = *eax_3;
        ebx_1 = *esi_1;
        bool c_3 = edx_1 < ebx_1;

        if (edx_1 == ebx_1)
        {
            if (!edx_1)
            {
                eax_5 = 0;
                break;
            }

            edx_1 = eax_3[1];
            ebx_1 = esi_1[1];
            c_3 = edx_1 < ebx_1;

            if (edx_1 == ebx_1)
            {
                eax_3 = &eax_3[2];
                esi_1 = &esi_1[2];

                if (edx_1)
                    continue;

                eax_5 = 0;
                break;
            }
        }

        eax_5 = eax_3 - eax_3 + 1;
        break;
    }

    float ecx_3 = 0f;
    char* var_28 = &g_567c74;
    ecx_3 = !eax_5;
    double var_30 = ecx_3;
    memcpy(a1, &var_38, 0x18);
    return a1;
}

#include "00403D90-Config_IsContentControlPasswordEnabled.h"
/* 0x00403d90 Config_IsContentControlPasswordEnabled full linked: callers=0 callees=1 */
int32_t Config_IsContentControlPasswordEnabled(int32_t a1)

// Sig: int Config_IsContentControlPasswordEnabled()
// Note: RETURNS 1 if a content-control password is SET (parental lock active),
// else 0. Takes no args. Use to decide whether to ask for the password.
{
    char* edi = &g_bc79c8;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi = &edi[1];
        i -= 1;

        if (!cond:0_1)
            break;
    }

    char* edi_1 = &g_bc79c8;
    int32_t var_18 = ~i - 1;
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool cond:1_1 = 0 != *edi_1;
        edi_1 = &edi_1[1];
        i_1 -= 1;

        if (!cond:1_1)
            break;
    }

    int32_t var_1c = 0;
    char* var_8 = &g_567c74;
    double var_10 = (~i_1 - 1);
    memcpy(a1, &var_18, 0x18);
    return a1;
}

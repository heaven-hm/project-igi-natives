#include "Config_IsContentControlPasswordEnabled.h"
int32_t Config_IsContentControlPasswordEnabled(int32_t a1)

// Sig: int Config_IsContentControlPasswordEnabled()
// Note: RETURNS 1 if a content-control password is SET (parental lock active),
// else 0. Takes no args. Use to decide whether to ask for the password.
{
    char* dstD = &g_bc79c8;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD = &dstD[1];
        i -= 1;

        if (!cond_0_1)
            break;
    }

    char* dstD1 = &g_bc79c8;
    int32_t v_18 = ~i - 1;
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool cond_1_1 = 0 != *dstD1;
        dstD1 = &dstD1[1];
        i_1 -= 1;

        if (!cond_1_1)
            break;
    }

    int32_t v_1c = 0;
    char* v_8 = &g_567c74;
    double v_10 = (~i_1 - 1);
    memcpy(a1, &v_18, 0x18);
    return a1;
}

/* LOGIC NOTE (Config_IsContentControlPasswordEnabled @ 0x00403D90)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : none
   called by : none
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "Config_IsContentControlPasswordEnabled.h"

int32_t Config_IsContentControlPasswordEnabled(int32_t arg1)

// Sig: int Config_IsContentControlPasswordEnabled()
// Note: RETURNS 1 if a content-control password is SET (parental lock active),
// else 0. Takes no args. Use to decide whether to ask for the password.
{
    char* dst = &data_bc79c8;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond_1 = 0 != *dst;
        dst = &dst[1];
        i -= 1;

        if (!cond_1)
            break;
    }

    char* dst_1 = &data_bc79c8;
    int32_t v_18 = ~i - 1;
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool cond_1 = 0 != *dst_1;
        dst_1 = &dst_1[1];
        i_1 -= 1;

        if (!cond_1)
            break;
    }

    int32_t v_1c = 0;
    char* v_8 = &data_567c74;
    double v_10 = (~i_1 - 1);
    __builtin_memcpy(arg1, &v_18, 0x18);
    return arg1;
}

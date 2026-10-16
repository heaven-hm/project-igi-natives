/* LOGIC NOTE (Config_VerifyContentControlPassword @ 0x00403CC0)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : , sub_
   called by : none
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "Config_VerifyContentControlPassword.h"

int32_t Config_VerifyContentControlPassword(int32_t arg1, float arg2 @ 0xc)

// Sig: int Config_VerifyContentControlPassword(char* password)
// Note: Checks a password attempt against the stored content-control password.
// Param: password = string to test. RETURNS non-zero when correct, 0 when
// wrong. Use before unlocking violent-content options.
{
    int32_t obj;
    int32_t v_3c = obj;
    char* v_48 = 0x20;
    void v_20;
    char* v_4c = &v_20;
    int32_t v_50 = 0;
    Sys_ResolveSymbol_23(arg2, v_50, v_4c, v_48);
    char* src = &data_bc79c8;
    char* result = &v_20;
    int32_t result_2;
    char tmp_1;
    char obj_1;

    while (true)
    {
        tmp_1 = *result;
        obj_1 = *src;
        bool c_1 = tmp_1 < obj_1;

        if (tmp_1 == obj_1)
        {
            if (!tmp_1)
            {
                result_2 = 0;
                break;
            }

            tmp_1 = result[1];
            obj_1 = src[1];
            c_1 = tmp_1 < obj_1;

            if (tmp_1 == obj_1)
            {
                result = &result[2];
                src = &src[2];

                if (tmp_1)
                    continue;

                result_2 = 0;
                break;
            }
        }

        result_2 = result - result + 1;
        break;
    }

    int32_t ctx_1 = 0;
    char* src_1 = &data_bc79c8;
    ctx_1 = !result_2;
    int32_t v_38 = ctx_1;
    char* result_3 = &v_20;
    int32_t result_5;

    while (true)
    {
        tmp_1 = *result_3;
        obj_1 = *src_1;
        bool c_3 = tmp_1 < obj_1;

        if (tmp_1 == obj_1)
        {
            if (!tmp_1)
            {
                result_5 = 0;
                break;
            }

            tmp_1 = result_3[1];
            obj_1 = src_1[1];
            c_3 = tmp_1 < obj_1;

            if (tmp_1 == obj_1)
            {
                result_3 = &result_3[2];
                src_1 = &src_1[2];

                if (tmp_1)
                    continue;

                result_5 = 0;
                break;
            }
        }

        result_5 = result_3 - result_3 + 1;
        break;
    }

    float ctx_3 = 0f;
    char* v_28 = &data_567c74;
    ctx_3 = !result_5;
    double v_30 = ctx_3;
    __builtin_memcpy(arg1, &v_38, 0x18);
    return arg1;
}

/* LOGIC NOTE (GO_GameLang @ 0x00403A00)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : , sub_
   called by : none
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "GO_GameLang.h"

int32_t GO_GameLang(int32_t arg1, float arg2 @ 0xc)

// Sig: int GO_GameLang(int language)
// Note: Sets game language for the current profile. Param: language = language
// index (retail ships English=0 and German builds use their own index). Use in
// config scripts. Returns 1.
{
    int32_t ctx;
    int32_t tmp;

    if (Camera_UpdateTransform_6(&data_5c8c20, tmp, ctx, &data_5c8c20, "USA"))
    {
        *(data_bc2380 * 0x564 + &data_bc1e28) = Script_GetArg(arg2, 0);
        int32_t result_11 = data_bc2380 * 0x159;

        if (*((result_11 << 2) + &data_bc1e28) == 5)
            *((result_11 << 2) + &data_bc1e28) = 0;
    }
    else
        *(data_bc2380 * 0x564 + &data_bc1e28) = 5;

    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &data_567c74;
    __builtin_memcpy(arg1, &v_18, 0x18);
    return arg1;
}

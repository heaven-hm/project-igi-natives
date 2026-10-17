// Original IGI.EXE function: GO_GameLang (VA 0x00403A00; static CFG gate PASS, CFG score 0.917).
#include "GO_GameLang.h"
int32_t GO_GameLang(int32_t context, float param_2 )

// Sig: int GO_GameLang(int language)
// Note: Sets game language for the current profile. Param: language = language
// index (retail ships English=0 and German builds use their own index). Use in
// config scripts. Returns 1.
{
    int32_t entity_val;
    int32_t temp_val;

    if (Camera_UpdateTransform_6(&g_5c8c20, temp_val, entity_val, &g_5c8c20, "USA"))
    {
        *(g_bc2380 * 0x564 + &g_bc1e28) = Script_GetArg(param_2, 0);
        int32_t data_11 = g_bc2380 * 0x159;

        if (*((data_11 << 2) + &g_bc1e28) == 5)
            *((data_11 << 2) + &g_bc1e28) = 0;
    }
    else
        *(g_bc2380 * 0x564 + &g_bc1e28) = 5;

    int32_t item_18 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}

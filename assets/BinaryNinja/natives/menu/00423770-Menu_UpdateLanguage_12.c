// Original IGI.EXE function: Menu_UpdateLanguage_12 (VA 0x00423770; static CFG gate PASS, CFG score 1.000).
#include "Menu_UpdateLanguage_12.h"
void* Menu_UpdateLanguage_12(void* context, void* param_2, int32_t param_3)

{
    void* source_val = context;
    int32_t* dest_val = *(source_val + (param_2 << 2) + 0x154);
    *(source_val + (param_2 << 2) + 0x254) = param_3;

    if (!dest_val)
        return param_2;

    KEY_ANGLE(param_3, nullptr, &context);
    return Sys_FreeMemory_18(dest_val, Menu_LocalSS(*(source_val + 0x44), context));
}

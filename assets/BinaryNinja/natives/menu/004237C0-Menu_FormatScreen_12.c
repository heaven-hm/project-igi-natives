// IGI native provenance: Menu_FormatScreen_12 - 0x004237C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004237C0-Menu_FormatScreen_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_FormatScreen_12.h"
void* Menu_FormatScreen_12(void* context)

{
    void* result = Config_ValidatePassword();

    for (void* i = nullptr; i < 0x1b; i += 1)
    {
        int32_t entity_val;
        int32_t temp_val;
        int32_t data_1 = Menu_PlayMusic_12(result, temp_val, entity_val, i) * 3;
        result = Menu_UpdateLanguage_12(context, i,
            Menu_DrawWidget_12(*((data_1 << 2) + 0x536414), *((data_1 << 2) + 0x536418)));
    }

    return result;
}

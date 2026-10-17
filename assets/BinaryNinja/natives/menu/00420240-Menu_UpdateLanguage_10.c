// IGI native provenance: Menu_UpdateLanguage_10 - 0x00420240 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00420240-Menu_UpdateLanguage_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_UpdateLanguage_10.h"
void* Menu_UpdateLanguage_10(void* context, int32_t param_2, int32_t param_3, int32_t param_4 , int32_t param_5)

{
    *(context + 0x20) = param_2;
    *(context + 0x24) = param_3;
    void* temp_1 = *(context + 0x9c);
    *(context + 0x2c) = param_4;
    *(context + 0xac) = param_4 - *(temp_1 + 0x2c) - *(*(context + 0x98) + 0x2c) - 6;
    *(context + 0x248) = param_5;
    return context;
}

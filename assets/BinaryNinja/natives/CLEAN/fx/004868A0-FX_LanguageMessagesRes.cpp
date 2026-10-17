// IGI native provenance: FX_LanguageMessagesRes - 0x004868A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004868A0-FX_LanguageMessagesRes.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_LanguageMessagesRes.h"
int32_t* FX_LanguageMessagesRes()

{
    char* item_8 = "LANGUAGE:messages.res";
    int32_t data_val;
    void* entity_val;
    int32_t temp_val;
    int32_t* result = Resource_Load(data_val, temp_val, entity_val, nullptr);
    g_5c8a40 = result;
    return result;
}

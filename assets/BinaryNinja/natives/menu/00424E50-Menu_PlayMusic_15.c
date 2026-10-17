// IGI native provenance: Menu_PlayMusic_15 - 0x00424E50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00424E50-Menu_PlayMusic_15.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_PlayMusic_15.h"
int32_t Menu_PlayMusic_15(void* context, int32_t* param_2, int32_t* param_3, int32_t* param_4, int32_t* param_5)

{
    *param_2 = *(context + 0x24);
    *param_3 = *(context + 0x28);
    *param_4 = *(context + 0x3c);
    int32_t result = *(context + 0x38);
    *param_5 = result;
    return result;
}

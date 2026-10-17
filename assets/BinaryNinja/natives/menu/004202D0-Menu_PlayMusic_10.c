// IGI native provenance: Menu_PlayMusic_10 - 0x004202D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004202D0-Menu_PlayMusic_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_PlayMusic_10.h"
int32_t Menu_PlayMusic_10(int32_t context, int32_t param_2)

{
    int32_t result = *(context + 0x248);

    if (result)
        *(context + 0xa0) = (param_2 + 0.5f) / result;

    return result;
}

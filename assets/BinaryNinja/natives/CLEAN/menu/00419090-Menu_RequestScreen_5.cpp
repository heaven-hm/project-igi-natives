// IGI native provenance: Menu_RequestScreen_5 - 0x00419090 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00419090-Menu_RequestScreen_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_RequestScreen_5.h"
void* Menu_RequestScreen_5(void* context)

{
    void* result = *(context + 0x30);

    if (!result)
        return result;

    void* item_8_1 = context;
    return Menu_PlayMusic(result);
}

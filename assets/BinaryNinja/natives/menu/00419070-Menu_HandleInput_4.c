// IGI native provenance: Menu_HandleInput_4 - 0x00419070 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00419070-Menu_HandleInput_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_HandleInput_4.h"
int32_t Menu_HandleInput_4(void* context)

{
    char* entity_val = *(context + 8);

    if (!entity_val)
        return 0;

    return Sys_ReadFileBlock_24(entity_val);
}

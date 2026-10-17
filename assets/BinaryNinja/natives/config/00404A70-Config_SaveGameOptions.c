// IGI native provenance: Config_SaveGameOptions - 0x00404A70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00404A70-Config_SaveGameOptions.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Config_SaveGameOptions.h"
void* Config_SaveGameOptions()

{
    return &(&g_bc25ac)[g_bc2384 * 0x159];
}

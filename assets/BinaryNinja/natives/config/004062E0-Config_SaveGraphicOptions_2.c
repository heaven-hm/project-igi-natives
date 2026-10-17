// IGI native provenance: Config_SaveGraphicOptions_2 - 0x004062E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004062E0-Config_SaveGraphicOptions_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Config_SaveGraphicOptions_2.h"
int32_t Config_SaveGraphicOptions_2()

{
    return *(Config_GetActivePlayerProfileRecord() + 4);
}

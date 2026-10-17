// IGI native provenance: Config_RegisterOptions_2 - 0x004062C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004062C0-Config_RegisterOptions_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Config_RegisterOptions_2.h"
long double Config_RegisterOptions_2()

{
    return *(Config_GetActivePlayerProfileRecord() + 0x224);
}

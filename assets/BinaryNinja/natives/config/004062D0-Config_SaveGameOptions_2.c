// IGI native provenance: Config_SaveGameOptions_2 - 0x004062D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004062D0-Config_SaveGameOptions_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Config_SaveGameOptions_2.h"
long double Config_SaveGameOptions_2()

{
    return *(Config_GetActivePlayerProfileRecord() + 0x228);
}

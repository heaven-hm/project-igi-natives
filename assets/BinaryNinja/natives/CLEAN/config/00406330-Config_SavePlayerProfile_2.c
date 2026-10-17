// IGI native provenance: Config_SavePlayerProfile_2 - 0x00406330 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00406330-Config_SavePlayerProfile_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Config_SavePlayerProfile_2.h"
void* Config_SavePlayerProfile_2(int32_t context) {
    return &g_53337c[context << 4];
}

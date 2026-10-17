// IGI native provenance: Config_English_2 - 0x00406320 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00406320-Config_English_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Config_English_2.h"
void* Config_English_2(int32_t context) {
    return &"ENGLISH"[context * 2];
}

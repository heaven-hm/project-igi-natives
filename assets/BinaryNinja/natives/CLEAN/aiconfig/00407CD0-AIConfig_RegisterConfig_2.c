// IGI native provenance: AIConfig_RegisterConfig_2 - 0x00407CD0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00407CD0-AIConfig_RegisterConfig_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIConfig_RegisterConfig_2.h"
int32_t AIConfig_RegisterConfig_2(int32_t context)

{
    if (context >= 0 && context < 0x180)
        return *(context * 0x30 + &g_af5f05);

    return 0;
}

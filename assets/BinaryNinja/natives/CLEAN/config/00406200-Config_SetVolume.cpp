// IGI native provenance: Config_SetVolume - 0x00406200 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00406200-Config_SetVolume.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Config_SetVolume.h"
int32_t Config_SetVolume(int32_t context)

{
    int32_t result = g_bc2384 * 0x159;
    (&g_bc28bc)[result] = context;
    return result;
}

// IGI native provenance: BinocularOverlay_Setup - 0x004713C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004713C0-BinocularOverlay_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "BinocularOverlay_Setup.h"
int32_t BinocularOverlay_Setup(void* context)

{
    Sys_ReadFileBlock_18(*(context + 0x20));
    Sys_ReadFileBlock_18(*(context + 0x34));
    Sys_ReadFileBlock_18(*(context + 0x24));
    Sys_ReadFileBlock_18(*(context + 0x28));
    Sys_ReadFileBlock_18(*(context + 0x2c));
    return Sys_ReadFileBlock_18(*(context + 0x30));
}

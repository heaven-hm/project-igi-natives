// IGI native provenance: Sys_QvertexRegisterstrip - 0x004B59A0 - CFG score 50.5% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004B59A0-Sys_QvertexRegisterstrip.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_QvertexRegisterstrip.h"
int32_t Sys_QvertexRegisterstrip()

{
    g_a84a50 = 0;
    g_a84a58 = 0;
    g_a84a54 = Sys_RendermodeFailedToCr_2("QVertex:RegisterStrip");
    /* tailcall */
    return Physics_QvertexDrawstrip();
}

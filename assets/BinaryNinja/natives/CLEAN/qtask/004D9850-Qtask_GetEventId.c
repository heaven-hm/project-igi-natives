// IGI native provenance: Qtask_GetEventId - 0x004D9850 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D9850-Qtask_GetEventId.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Qtask_GetEventId.h"
int32_t Qtask_GetEventId()

// Sig: unsigned char Qtask_GetEventId(void)
// Note: Returns the Qtask event-slot byte stored at 0x00548644. The result
// selects the first dimension of the task callback table at 0x00A96AE0.
// Ghidra/r2: exact 0x004D9850-0x004D9855 boundary, 1 basic block, 0 CFG edges,
// cdecl no-argument byte getter. At the Gun/GunFlame registration sites, any
// callback pushed before this call belongs to the following FUN_00401400
// registrar call; it is not an argument to this getter.
{
    int32_t result;
    result = g_548644;
    return result;
}

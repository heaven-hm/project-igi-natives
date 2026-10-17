// IGI native provenance: Qvm_Cleanup - 0x004B83D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B83D0-Qvm_Cleanup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Qvm_Cleanup.h"
int32_t Qvm_Cleanup(int32_t* context)

// Sig: void Qvm_Cleanup(void* qvm)
// Note: Frees a loaded QVM script object: reads qvm+0x8C and releases the
// program block when non-zero. Param: qvm = pointer from Qvm_Load. Pair with
// Qvm_Load to avoid leaks.
{
    void* data_val = context[0x23];

    if (!data_val)
    {
        Resource_Unload(context);
        return Sys_ExecuteBytecode_2(context);
    }

    Sys_CheckHeap_28(data_val);
    return Sys_ExecuteBytecode_2(context);
}

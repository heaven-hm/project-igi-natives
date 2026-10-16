#include "Qvm_Cleanup.h"
int32_t Qvm_Cleanup(int32_t* a1)

// Sig: void Qvm_Cleanup(void* qvm)
// Note: Frees a loaded QVM script object: reads qvm+0x8C and releases the
// program block when non-zero. Param: qvm = pointer from Qvm_Load. Pair with
// Qvm_Load to avoid leaks.
{
    void* valA = a1[0x23];

    if (!valA)
    {
        Resource_Unload(a1);
        return Sys_ExecuteBytecode_2(a1);
    }

    Sys_CheckHeap_28(valA);
    return Sys_ExecuteBytecode_2(a1);
}

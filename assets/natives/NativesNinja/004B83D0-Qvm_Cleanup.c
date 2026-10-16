#include "004B83D0-Qvm_Cleanup.h"
/* 0x004b83d0 Qvm_Cleanup full linked: callers=24 callees=4 */
int32_t Qvm_Cleanup(int32_t* a1)

// Sig: void Qvm_Cleanup(void* qvm)
// Note: Frees a loaded QVM script object: reads qvm+0x8C and releases the
// program block when non-zero. Param: qvm = pointer from Qvm_Load. Pair with
// Qvm_Load to avoid leaks.
{
    void* eax = a1[0x23];

    if (!eax)
    {
        Resource_Unload(a1);
        return sub_4b0d10(a1);
    }

    sub_4bd380(eax);
    return sub_4b0d10(a1);
}

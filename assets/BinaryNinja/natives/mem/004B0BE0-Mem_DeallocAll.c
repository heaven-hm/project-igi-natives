#include "Mem_DeallocAll.h"
int32_t Mem_DeallocAll()

// Sig: void Mem_DeallocAll(void)
// Note: Deallocate allocated memory. Frees EVERY tracked heap block (walks
// allocation list via 0x4B0D10), then warns "%d block(s) of memory have not
// been deallocated." Takes no args - NOT a single-pointer free.
{
    int32_t dstD = 0;
    int32_t* i_1 = g_a960f0;
    int32_t* i = *i_1;

    while (i)
    {
        Sys_ExecuteBytecode_2(i_1[2]);
        i_1 = i;
        i = *i;
        dstD += 1;
    }

    g_9422fc = 0;
    Sys_DispatchOpcode_2();

    if (dstD)
    {
        char* valA1 = &g_567c74;

        if (dstD != 1)
            valA1 = &g_541078;

        char* v_c_2 = valA1;
        int32_t v_10_1 = dstD;
        Warning_Show("%d block%s of memory have not been deallocated.");
    }

    int32_t result = g_942300;

    if (!result)
        return result;

    int32_t __saved_esi_1 = result;
    return Warning_Show("Internal memory allocator inconsistency: Totalalloc: %d");
}

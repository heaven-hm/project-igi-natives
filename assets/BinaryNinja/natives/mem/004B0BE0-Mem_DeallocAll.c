// IGI native provenance: Mem_DeallocAll - 0x004B0BE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B0BE0-Mem_DeallocAll.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Mem_DeallocAll.h"
int32_t Mem_DeallocAll()

// Sig: void Mem_DeallocAll(void)
// Note: Deallocate allocated memory. Frees EVERY tracked heap block (walks
// allocation list via 0x4B0D10), then warns "%d block(s) of memory have not
// been deallocated." Takes no args - NOT a single-pointer free.
{
    int32_t dest_val = 0;
    int32_t* i_1 = g_a960f0;
    int32_t* i = *i_1;

    while (i)
    {
        Sys_ExecuteBytecode_2(i_1[2]);
        i_1 = i;
        i = *i;
        dest_val += 1;
    }

    g_9422fc = 0;
    Sys_DispatchOpcode_2();

    if (dest_val)
    {
        char* data_1 = &g_567c74;

        if (dest_val != 1)
            data_1 = &g_541078;

        char* item_c_2 = data_1;
        int32_t item_10_1 = dest_val;
        Warning_Show("%d block%s of memory have not been deallocated.");
    }

    int32_t result = g_942300;

    if (!result)
        return result;

    int32_t saved_esi_1 = result;
    return Warning_Show("Internal memory allocator inconsistency: Totalalloc: %d");
}

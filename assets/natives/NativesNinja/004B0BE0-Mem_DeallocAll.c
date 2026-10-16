#include "004B0BE0-Mem_DeallocAll.h"
/* 0x004b0be0 Mem_DeallocAll full linked: callers=1 callees=5 */
int32_t Mem_DeallocAll()

// Sig: void Mem_DeallocAll(void)
// Note: Deallocate allocated memory. Frees EVERY tracked heap block (walks
// allocation list via 0x4B0D10), then warns "%d block(s) of memory have not
// been deallocated." Takes no args - NOT a single-pointer free.
{
    int32_t edi = 0;
    int32_t* i_1 = g_a960f0;
    int32_t* i = *i_1;

    while (i)
    {
        sub_4b0d10(i_1[2]);
        i_1 = i;
        i = *i;
        edi += 1;
    }

    g_9422fc = 0;
    sub_4b0d50();

    if (edi)
    {
        char* eax_1 = &g_567c74;

        if (edi != 1)
            eax_1 = &g_541078;

        char* var_c_2 = eax_1;
        int32_t var_10_1 = edi;
        Warning_Show("%d block%s of memory have not been deallocated.");
    }

    int32_t result = g_942300;

    if (!result)
        return result;

    int32_t __saved_esi_1 = result;
    return Warning_Show("Internal memory allocator inconsistency: Totalalloc: %d");
}

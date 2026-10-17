// Original IGI.EXE function: Resource_Flush (VA 0x004B63D0; static CFG gate PASS, CFG score 1.000).
#include "Resource_Flush.h"
int32_t Resource_Flush(int32_t context)

// Sig: void Resource_Flush(void* resEntry)
// Note: Flushes/finalizes ONE resource entry: walks the global resource list
// (0x943E38), matches entry+0x34 against the argument, errors "Resource_Flush()
// : Couldn't locate resource at %p." when absent. Param: resEntry = resource
// pointer/address to flush.
{
    int32_t* i_1 = g_943e38;

    for (int32_t* i = *i_1; i; i = *i)
    {
        if (i_1[0xd] == context)
        {
            int32_t result = i_1[9];

            if (result != 3 && result != 1)
                return Sys_FreeMemory_16(i_1);

            return result;
        }

        i_1 = i;
    }

    int32_t item_4_1 = context;
    Error_Show("Resource_Flush() : Couldn't locate resource at %p.");

    while (true)
        /* nop */
}

// IGI native provenance: Sys_CheckHeap_28 - 0x004BD380 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BD380-Sys_CheckHeap_28.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_CheckHeap_28.h"
int32_t Sys_CheckHeap_28(void* context)

{
    int32_t i = 0;

    if (*(context + 0x50) > 0)
    {
        do
        {
            int32_t* data_2 = *(*(context + 0x64) + (i << 2));

            if (data_2)
                Sys_PushStack_25(data_2);

            i += 1;
        } while (i < *(context + 0x50));
    }

    Resource_Flush(*(context + 0x468));
    return Sys_ExecuteBytecode_2(context);
}

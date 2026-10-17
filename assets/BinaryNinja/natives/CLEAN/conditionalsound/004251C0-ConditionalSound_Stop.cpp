// IGI native provenance: ConditionalSound_Stop - 0x004251C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004251C0-ConditionalSound_Stop.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ConditionalSound_Stop.h"
int32_t* ConditionalSound_Stop(void* context)

{
    int32_t* result = *(context + 0x120);

    if (result)
    {
        int32_t* data_val = *result;

        if (data_val)
            QTask_FindType(data_val);

        result = Qtask_UpdateList(*(context + 0x120));
        *(context + 0x120) = 0;
        *(context + 0xb2) = 0;
    }

    return result;
}

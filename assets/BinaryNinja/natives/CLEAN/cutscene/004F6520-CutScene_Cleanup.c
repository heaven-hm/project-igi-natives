// IGI native provenance: CutScene_Cleanup - 0x004F6520 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F6520-CutScene_Cleanup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CutScene_Cleanup.h"
int32_t* CutScene_Cleanup(void* context)

{
    int32_t* data_val = *(context + 0x260);

    if (data_val)
    {
        QTask_FindType(data_val);
        *(context + 0x260) = 0;
    }

    int32_t* data_1 = *(context + 0x25c);

    if (data_1)
    {
        QTask_FindType(data_1);
        *(context + 0x25c) = 0;
    }

    int32_t* data_2 = *(context + 0x264);

    if (data_2)
    {
        QTask_FindType(data_2);
        *(context + 0x264) = 0;
    }

    int32_t* result = *(context + 0x268);

    if (result)
    {
        result = QTask_FindType(result);
        *(context + 0x268) = 0;
    }

    return result;
}

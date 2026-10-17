// IGI native provenance: QTask_ChangeParent_2 - 0x00401C10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00401C10-QTask_ChangeParent_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_ChangeParent_2.h"
void* const QTask_ChangeParent_2(void* context, int16_t param_2)

{
    void* const result = *(context + 0x10);

    for (void* i = *(result + 4); i; i = *(i + 4))
    {
        if (*(result + 0x1c) == param_2)
            return result;

        result = i;
    }

    return nullptr;
}

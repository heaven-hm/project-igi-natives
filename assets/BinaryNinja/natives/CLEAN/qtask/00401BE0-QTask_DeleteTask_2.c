// IGI native provenance: QTask_DeleteTask_2 - 0x00401BE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00401BE0-QTask_DeleteTask_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_DeleteTask_2.h"
int32_t* QTask_DeleteTask_2(void* context, int16_t param_2)

{
    int32_t* result = *(context + 8);

    for (int32_t* i = *result; i; i = *i)
    {
        if (result[7] == param_2)
            return result;

        result = i;
    }

    return nullptr;
}

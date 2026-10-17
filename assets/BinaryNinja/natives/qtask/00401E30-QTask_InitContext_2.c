// IGI native provenance: QTask_InitContext_2 - 0x00401E30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00401E30-QTask_InitContext_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_InitContext_2.h"
void* QTask_InitContext_2(void* context, int32_t param_2, int32_t param_3)

{
    void* result = context;
    int32_t* i = *(result + 8);

    if (*i && i)
    {
        do
        {
            result = QTask_ProcessQueue_2(i, param_2, param_3);
            i = *i;

            if (!i)
                break;

            if (!*i)
                break;
        } while (i);
    }

    return result;
}

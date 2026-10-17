// IGI native provenance: Script_EvaluateCondition_12 - 0x004F2290 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F2290-Script_EvaluateCondition_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_EvaluateCondition_12.h"
void Script_EvaluateCondition_12(void* context)

{
    void* context_val = context;
    int32_t* i = *(context_val + 8);

    if (!*i || !i)
        return;

    do
    {
        int32_t data_1 = 0;
        int32_t entity_1 = 0;
        data_1 = g_a76c03;
        context = nullptr;
        entity_1 = i[7];
        void* data_val = *(((data_1 * 0x180 + entity_1) << 2) + &g_a96ae0);

        if (data_val)
            data_val(i, &context);

        if (!data_val || !context)
        {
            i = *i;

            if (!i)
                break;

            if (!*i)
                break;
        }
        else
        {
            QTask_FindType(i);
            i = *(context_val + 8);

            if (!*i)
                break;
        }
    } while (i);
}

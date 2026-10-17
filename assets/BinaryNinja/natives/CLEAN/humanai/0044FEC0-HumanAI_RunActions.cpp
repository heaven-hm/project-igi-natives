// IGI native provenance: HumanAI_RunActions - 0x0044FEC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0044FEC0-HumanAI_RunActions.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_RunActions.h"
int32_t* HumanAI_RunActions(void* context)

{
    char temp_val = 0;
    int32_t* i_1 = *(context + 0x8fc);
    int32_t* i;

    for (i = *i_1; i; i = *i)
    {
        if (i_1[6])
            return i_1[6](context, i_1, context, 0xffffffff, "Action pushed by: %s",
                (&g_53ca38)[*(context + (i_1[2] << 2) + 0x81c)]);

        int32_t entity_2 = i_1[3];

        if (entity_2 && !temp_val)
        {
            temp_val = 1;
            i_1[3] = entity_2 - 1;
        }

        i_1 = i;
    }

    char* item_c = "No items on actionstack was run";
    int32_t item_10 = 0xffffffff;
    void* item_14 = context;
    return i;
}
